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
#include "panda/io/Console.h"
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

typedef void (*$fn66)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn73)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn76)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn79)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn82)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn98)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn104)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef void (*$fn108)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn118)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn123)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn138)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn156)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure2*, panda$collections$ListView*);
typedef void (*$fn160)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn162)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn164)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn166)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn168)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn170)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn172)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn184)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn188)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn193)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn256)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn267)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn301)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure4*, panda$collections$ListView*);
typedef panda$core$Int64 (*$fn430)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn458)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn472)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn506)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn518)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn534)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*, panda$collections$ListView*);
typedef panda$core$Bit (*$fn544)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn549)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn556)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn567)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn571)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn576)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn582)(panda$math$Random*);
typedef panda$core$Object* (*$fn638)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn644)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn675)(panda$collections$ListView*);
typedef panda$core$String* (*$fn696)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn710)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn714)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn719)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn730)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn740)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn754)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn846)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn854)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn862)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn870)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn878)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn889)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn899)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn922)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn932)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn947)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn986)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1007)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1031)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1052)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1076)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1098)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1106)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1114)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1149)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1159)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1187)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1212)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1217)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1225)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*, panda$collections$ListView*);
typedef void (*$fn1229)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1231)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1233)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1235)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1237)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1239)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1241)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1243)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1245)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1298)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn1328)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn1346)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1352)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1356)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1361)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1379)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1389)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1399)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1409)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1446)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1460)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1490)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1504)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1524)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*, panda$collections$ListView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e", 42, 5747153137714602429, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x64\x75\x6d\x6d\x79", 10, -2887356857474712656, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x74\x65\x73\x74\x2a", 6, 1515120623433, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x74\x65\x73\x74\x2a", 6, 1515120623433, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72\x5c\x6e", 4, 200020409, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x2b\x24", 6, 2058973016890, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60\x5f\x3e\x21", 4, 203944687, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, -6003771304831432199, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 199795969, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c", 3, 1978177, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29", 4, 145926154, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 33, -4589409330981298645, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f", 10, -7697525032227164949, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 15, 4344893690925401026, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f", 24, -4892301784787365954, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 10, 7324187788974597826, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, -695802876960105267, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 5711149104113814898, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, 1703066247920, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76", 3, 2061124, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x31", 2, 20754, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x32", 2, 20755, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x33", 2, 20756, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x34", 2, 20757, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x35", 2, 20758, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x36", 2, 20759, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -2536067448883908010, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65", 3, 2184428, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 22682056921, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6c", 2, 20409, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, 2280602224762, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, 22741103748248783, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d", 4, 210295037, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 21876880126472849, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, 2175813319029, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x68", 4, 217364527, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x73", 3, 2112631, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x6c", 3, 2060710, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 16803092312, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e", 2, 14335, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28", 2, 16301, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 156491179351200, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, 4158029666834239703, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 20151576623, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 16796009060, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 1536684806687938687, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3f\x3e", 3, 1516173, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 47502487764265221, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, 4158029666834239703, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 20151576623, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a", 4, 145926777, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x21", 2, 16294, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, -4188240096700658567, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, -2921786165263253076, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 20197438560, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x67\x72\x61\x70\x68\x73\x31\x3a\x20", 13, 37722413876074605, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x67\x72\x61\x70\x68\x73\x32\x3a\x20", 13, 37722413876084806, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 134, 6382497733495402167, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

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

panda$core$String* local0 = NULL;
panda$core$MutableString* local1 = NULL;
// line 130
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s45));
*(&local0) = &$s46;
// line 131
panda$core$MutableString* $tmp47 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp48 = *(&local0);
panda$core$MutableString$init$panda$core$String($tmp47, $tmp48);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp49 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
*(&local1) = $tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// line 132
panda$core$MutableString* $tmp50 = *(&local1);
panda$core$RegularExpression* $tmp51 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp51, &$s52);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp50, $tmp51, &$s53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// line 133
panda$core$MutableString* $tmp54 = *(&local1);
panda$core$RegularExpression* $tmp55 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp55, &$s56);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp54, $tmp55, &$s57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// line 134
panda$core$MutableString* $tmp58 = *(&local1);
panda$core$RegularExpression* $tmp59 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp59, &$s60);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp58, $tmp59, &$s61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// line 137
panda$core$MutableString* $tmp62 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp62, &$s63);
// line 139
panda$core$MutableString* $tmp64 = *(&local1);
$fn66 $tmp65 = ($fn66) param0->$class->vtable[14];
$tmp65(param0, $tmp64);
// line 140
panda$core$MutableString* $tmp67 = *(&local1);
panda$core$RegularExpression* $tmp68 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp68, &$s69);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp67, $tmp68, &$s70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// line 141
panda$core$MutableString* $tmp71 = *(&local1);
$fn73 $tmp72 = ($fn73) param0->$class->vtable[8];
$tmp72(param0, $tmp71);
// line 142
panda$core$MutableString* $tmp74 = *(&local1);
$fn76 $tmp75 = ($fn76) param0->$class->vtable[5];
$tmp75(param0, $tmp74);
// line 143
panda$core$MutableString* $tmp77 = *(&local1);
$fn79 $tmp78 = ($fn79) param0->$class->vtable[6];
$tmp78(param0, $tmp77);
// line 144
panda$core$MutableString* $tmp80 = *(&local1);
$fn82 $tmp81 = ($fn82) param0->$class->vtable[11];
$tmp81(param0, $tmp80);
// line 146
panda$core$MutableString* $tmp83 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp83, &$s84);
// line 147
panda$core$MutableString* $tmp85 = *(&local1);
panda$core$String* $tmp86 = panda$core$MutableString$convert$R$panda$core$String($tmp85);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
panda$core$MutableString* $tmp87 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing text
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp88 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing raw
*(&local0) = ((panda$core$String*) NULL);
return $tmp86;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
panda$collections$ListView* local1 = NULL;
// line 151
panda$collections$ListView* $tmp89 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s90);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp91 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
*(&local0) = $tmp89;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// line 152
panda$collections$ListView* $tmp92 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s93);
*(&local1) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp94 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
*(&local1) = $tmp92;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// line 155
org$pandalanguage$pandac$pandadoc$Protector** $tmp95 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp96 = *$tmp95;
$fn98 $tmp97 = ($fn98) $tmp96->$class->vtable[2];
panda$core$String* $tmp99 = $tmp97($tmp96, &$s100);
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s101, $tmp99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// line 158
panda$collections$ListView* $tmp102 = *(&local0);
$fn104 $tmp103 = ($fn104) param0->$class->vtable[4];
$tmp103(param0, param1, $tmp102, &$s105);
// line 159
panda$collections$ListView* $tmp106 = *(&local1);
$fn108 $tmp107 = ($fn108) param0->$class->vtable[4];
$tmp107(param0, param1, $tmp106, &$s109);
panda$collections$ListView* $tmp110 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing escapedChars
*(&local1) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp111 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing normalChars
*(&local0) = ((panda$collections$ListView*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1, panda$collections$ListView* param2, panda$core$String* param3) {

panda$core$Char8 local0;
panda$core$RegularExpression* local1 = NULL;
// line 163
ITable* $tmp112 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
panda$collections$Iterator* $tmp115 = $tmp113(((panda$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp116 = $tmp115->$class->itable;
while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[0];
panda$core$Bit $tmp119 = $tmp117($tmp115);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block3; else goto block2;
block2:;
ITable* $tmp121 = $tmp115->$class->itable;
while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp121 = $tmp121->next;
}
$fn123 $tmp122 = $tmp121->methods[1];
panda$core$Object* $tmp124 = $tmp122($tmp115);
panda$core$Panda$unref$panda$core$Object$Q($tmp124);
*(&local0) = ((panda$core$Char8$wrapper*) $tmp124)->value;
// line 164
panda$core$RegularExpression* $tmp125 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s127, param3);
panda$core$Char8 $tmp128 = *(&local0);
panda$core$Char8$wrapper* $tmp129;
$tmp129 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
$tmp129->value = $tmp128;
panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp126, ((panda$core$Object*) $tmp129));
panda$core$RegularExpression$init$panda$core$String($tmp125, $tmp130);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp131 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
*(&local1) = $tmp125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// line 165
panda$core$RegularExpression* $tmp132 = *(&local1);
org$pandalanguage$pandac$pandadoc$Protector** $tmp133 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp134 = *$tmp133;
panda$core$Char8 $tmp135 = *(&local0);
panda$core$String* $tmp136 = panda$core$Char8$convert$R$panda$core$String($tmp135);
$fn138 $tmp137 = ($fn138) $tmp134->$class->vtable[2];
panda$core$String* $tmp139 = $tmp137($tmp134, $tmp136);
panda$core$Bit $tmp140 = panda$core$Bit$init$builtin_bit(false);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(param1, $tmp132, $tmp139, $tmp140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
panda$core$RegularExpression* $tmp141 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing regex
*(&local1) = ((panda$core$RegularExpression*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 170
panda$core$RegularExpression* $tmp142 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s144, &$s145);
panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s147);
panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s149);
panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, &$s151);
panda$core$Int64 $tmp152 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp142, $tmp150, $tmp152);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp153 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
*(&local0) = $tmp142;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// line 178
panda$core$RegularExpression* $tmp154 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2* $tmp155 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure2*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp155, param0);
panda$core$MutableMethod* $tmp157 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp157, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp155));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp154, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp157)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
panda$core$RegularExpression* $tmp158 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 200
$fn160 $tmp159 = ($fn160) param0->$class->vtable[21];
$tmp159(param0, param1);
// line 201
$fn162 $tmp161 = ($fn162) param0->$class->vtable[7];
$tmp161(param0, param1);
// line 202
$fn164 $tmp163 = ($fn164) param0->$class->vtable[19];
$tmp163(param0, param1);
// line 203
$fn166 $tmp165 = ($fn166) param0->$class->vtable[15];
$tmp165(param0, param1);
// line 204
$fn168 $tmp167 = ($fn168) param0->$class->vtable[13];
$tmp167(param0, param1);
// line 205
$fn170 $tmp169 = ($fn170) param0->$class->vtable[8];
$tmp169(param0, param1);
// line 206
$fn172 $tmp171 = ($fn172) param0->$class->vtable[9];
$tmp171(param0, param1);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$Array* local0 = NULL;
panda$core$String* local1 = NULL;
// line 210
panda$collections$Array* $tmp173 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp173);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp174 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
*(&local0) = $tmp173;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// line 211
panda$collections$Array* $tmp175 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp175, ((panda$core$Object*) &$s176));
// line 212
panda$collections$Array* $tmp177 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp177, ((panda$core$Object*) &$s178));
// line 213
panda$collections$Array* $tmp179 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp179, ((panda$core$Object*) &$s180));
// line 214
panda$collections$Array* $tmp181 = *(&local0);
ITable* $tmp182 = ((panda$collections$Iterable*) $tmp181)->$class->itable;
while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
panda$collections$Iterator* $tmp185 = $tmp183(((panda$collections$Iterable*) $tmp181));
goto block1;
block1:;
ITable* $tmp186 = $tmp185->$class->itable;
while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
panda$core$Bit $tmp189 = $tmp187($tmp185);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$String*) NULL);
ITable* $tmp191 = $tmp185->$class->itable;
while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
panda$core$Object* $tmp194 = $tmp192($tmp185);
panda$core$Panda$unref$panda$core$Object$Q($tmp194);
panda$core$String* $tmp195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp194)));
*(&local1) = ((panda$core$String*) $tmp194);
// line 215
panda$core$RegularExpression* $tmp196 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp197 = *(&local1);
panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s199, $tmp197);
panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, &$s201);
panda$core$RegularExpression$init$panda$core$String($tmp196, $tmp200);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp196, &$s202);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
panda$core$String* $tmp203 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing hrDelimiter
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$collections$Array* $tmp204 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
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
// line 228
panda$collections$Array* $tmp205 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp205);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp206 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
*(&local0) = $tmp205;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// line 229
panda$collections$Array* $tmp207 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp207, ((panda$core$Object*) &$s208));
// line 230
panda$collections$Array* $tmp209 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp209, ((panda$core$Object*) &$s210));
// line 231
panda$collections$Array* $tmp211 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp211, ((panda$core$Object*) &$s212));
// line 232
panda$collections$Array* $tmp213 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp213, ((panda$core$Object*) &$s214));
// line 233
panda$collections$Array* $tmp215 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp215, ((panda$core$Object*) &$s216));
// line 234
panda$collections$Array* $tmp217 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp217, ((panda$core$Object*) &$s218));
// line 235
panda$collections$Array* $tmp219 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp219, ((panda$core$Object*) &$s220));
// line 236
panda$collections$Array* $tmp221 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp221, ((panda$core$Object*) &$s222));
// line 237
panda$collections$Array* $tmp223 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp223, ((panda$core$Object*) &$s224));
// line 238
panda$collections$Array* $tmp225 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp225, ((panda$core$Object*) &$s226));
// line 239
panda$collections$Array* $tmp227 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp227, ((panda$core$Object*) &$s228));
// line 240
panda$collections$Array* $tmp229 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp229, ((panda$core$Object*) &$s230));
// line 241
panda$collections$Array* $tmp231 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp231, ((panda$core$Object*) &$s232));
// line 242
panda$collections$Array* $tmp233 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp233, ((panda$core$Object*) &$s234));
// line 243
panda$collections$Array* $tmp235 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp235, ((panda$core$Object*) &$s236));
// line 244
panda$collections$Array* $tmp237 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp237, ((panda$core$Object*) &$s238));
// line 245
panda$collections$Array* $tmp239 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp239, ((panda$core$Object*) &$s240));
// line 246
panda$collections$Array* $tmp241 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp241, ((panda$core$Object*) &$s242));
// line 247
panda$collections$Array* $tmp243 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp243, ((panda$core$Object*) &$s244));
// line 248
panda$collections$Array* $tmp245 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp245, ((panda$core$Object*) &$s246));
// line 249
panda$collections$Array* $tmp247 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp247);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp248 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
*(&local1) = $tmp247;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// line 250
panda$collections$Array* $tmp249 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp249, ((panda$core$Object*) &$s250));
// line 251
panda$collections$Array* $tmp251 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp251, ((panda$core$Object*) &$s252));
// line 253
panda$collections$Array* $tmp253 = *(&local0);
ITable* $tmp254 = ((panda$collections$CollectionView*) $tmp253)->$class->itable;
while ($tmp254->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[2];
panda$core$String* $tmp257 = $tmp255(((panda$collections$CollectionView*) $tmp253), &$s258);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp259 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
*(&local2) = $tmp257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// line 254
panda$core$String* $tmp260 = *(&local2);
panda$core$String* $tmp261 = panda$core$String$convert$R$panda$core$String($tmp260);
panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, &$s263);
panda$collections$Array* $tmp264 = *(&local1);
ITable* $tmp265 = ((panda$collections$CollectionView*) $tmp264)->$class->itable;
while ($tmp265->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[2];
panda$core$String* $tmp268 = $tmp266(((panda$collections$CollectionView*) $tmp264), &$s269);
panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, $tmp268);
panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s272);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp273 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
*(&local3) = $tmp271;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
// line 256
panda$core$Int64 $tmp274 = (panda$core$Int64) {4};
panda$core$Int64 $tmp275 = (panda$core$Int64) {1};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 - $tmp277;
panda$core$Int64 $tmp279 = (panda$core$Int64) {$tmp278};
*(&local4) = $tmp279;
// line 269
panda$core$RegularExpression* $tmp280 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp281 = *(&local2);
panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s283, $tmp281);
panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s285);
panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s287);
panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s289);
panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s291);
panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, &$s293);
panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s295);
panda$core$Int64 $tmp296 = (panda$core$Int64) {1};
panda$core$Int64 $tmp297 = (panda$core$Int64) {2};
panda$core$Int64 $tmp298 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp296, $tmp297);
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp280, $tmp294, $tmp298);
*(&local5) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp299 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
*(&local5) = $tmp280;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// line 278
org$pandalanguage$pandac$pandadoc$Markdown$_Closure4* $tmp300 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure4*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp300, param0);
panda$core$MutableMethod* $tmp302 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp302, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp300));
// line 278
*(&local6) = ((panda$core$Method*) NULL);
panda$core$Method* $tmp303 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Method*) $tmp302)));
*(&local6) = ((panda$core$Method*) $tmp302);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// line 282
panda$core$RegularExpression* $tmp304 = *(&local5);
panda$core$Method* $tmp305 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp304, ((panda$core$MutableMethod*) $tmp305));
// line 285
panda$core$RegularExpression* $tmp306 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s308, &$s309);
panda$core$String* $tmp310 = *(&local3);
panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp307, $tmp310);
panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp311, &$s313);
panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s315);
panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp314, &$s317);
panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s319);
panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp318, &$s321);
panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s323);
panda$core$Int64 $tmp324 = (panda$core$Int64) {1};
panda$core$Int64 $tmp325 = (panda$core$Int64) {2};
panda$core$Int64 $tmp326 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp324, $tmp325);
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp306, $tmp322, $tmp326);
*(&local7) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp327 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
*(&local7) = $tmp306;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// line 294
panda$core$RegularExpression* $tmp328 = *(&local7);
panda$core$Method* $tmp329 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp328, ((panda$core$MutableMethod*) $tmp329));
// line 297
panda$core$RegularExpression* $tmp330 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s332, &$s333);
panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s335);
panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s337);
panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s339);
panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, &$s341);
panda$core$Int64 $tmp342 = *(&local4);
panda$core$Int64$wrapper* $tmp343;
$tmp343 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp343->value = $tmp342;
panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp340, ((panda$core$Object*) $tmp343));
panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s346);
panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s348);
panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, &$s350);
panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp349, &$s352);
panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s354);
panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, &$s356);
panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s358);
panda$core$Int64 $tmp359 = (panda$core$Int64) {2};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp330, $tmp357, $tmp359);
*(&local8) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp360 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
*(&local8) = $tmp330;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
// line 311
panda$core$RegularExpression* $tmp361 = *(&local8);
panda$core$Method* $tmp362 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp361, ((panda$core$MutableMethod*) $tmp362));
// line 314
panda$core$RegularExpression* $tmp363 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s365, &$s366);
panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s368);
panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp367, &$s370);
panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, &$s372);
panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s374);
panda$core$Int64 $tmp375 = *(&local4);
panda$core$Int64$wrapper* $tmp376;
$tmp376 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp376->value = $tmp375;
panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp373, ((panda$core$Object*) $tmp376));
panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s379);
panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s381);
panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s383);
panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, &$s385);
panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, &$s387);
panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp386, &$s389);
panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp388, &$s391);
panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp390, &$s393);
panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, &$s395);
panda$core$RegularExpression$init$panda$core$String($tmp363, $tmp394);
*(&local9) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp396 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
*(&local9) = $tmp363;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// line 329
panda$core$RegularExpression* $tmp397 = *(&local9);
panda$core$Method* $tmp398 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp397, ((panda$core$MutableMethod*) $tmp398));
panda$core$RegularExpression* $tmp399 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing p4
*(&local9) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp400 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
// unreffing p3
*(&local8) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp401 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing p2
*(&local7) = ((panda$core$RegularExpression*) NULL);
panda$core$Method* $tmp402 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing protectHTML
*(&local6) = ((panda$core$Method*) NULL);
panda$core$RegularExpression* $tmp403 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing p1
*(&local5) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp404 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing alternationB
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp405 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing alternationA
*(&local2) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp406 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing tagsB
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp407 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
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
// line 333
panda$core$RegularExpression* $tmp408 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp408, &$s409);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp408, &$s410);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// line 334
panda$core$RegularExpression* $tmp411 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp411, &$s412);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp411, &$s413);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// line 336
*(&local0) = ((panda$collections$Array*) NULL);
// line 337
panda$core$Int64 $tmp414 = panda$core$MutableString$byteLength$R$panda$core$Int64(param1);
panda$core$Int64 $tmp415 = (panda$core$Int64) {0};
panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp414, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block1; else goto block3;
block1:;
// line 338
panda$collections$Array* $tmp418 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp418);
panda$collections$Array* $tmp419 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
*(&local0) = $tmp418;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
goto block2;
block3:;
// line 1
// line 340
panda$collections$Array* $tmp420 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$String* $tmp421 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$RegularExpression* $tmp422 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp422, &$s423);
panda$collections$Array* $tmp424 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT($tmp421, $tmp422);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp420, ((panda$collections$CollectionView*) $tmp424));
panda$collections$Array* $tmp425 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
*(&local0) = $tmp420;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
goto block2;
block2:;
// line 342
panda$core$Int64 $tmp426 = (panda$core$Int64) {0};
panda$collections$Array* $tmp427 = *(&local0);
ITable* $tmp428 = ((panda$collections$CollectionView*) $tmp427)->$class->itable;
while ($tmp428->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp428 = $tmp428->next;
}
$fn430 $tmp429 = $tmp428->methods[0];
panda$core$Int64 $tmp431 = $tmp429(((panda$collections$CollectionView*) $tmp427));
panda$core$Bit $tmp432 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp433 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp426, $tmp431, $tmp432);
panda$core$Int64 $tmp434 = $tmp433.min;
*(&local1) = $tmp434;
panda$core$Int64 $tmp435 = $tmp433.max;
panda$core$Bit $tmp436 = $tmp433.inclusive;
bool $tmp437 = $tmp436.value;
panda$core$Int64 $tmp438 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp439 = panda$core$Int64$convert$R$panda$core$UInt64($tmp438);
if ($tmp437) goto block7; else goto block8;
block7:;
int64_t $tmp440 = $tmp434.value;
int64_t $tmp441 = $tmp435.value;
bool $tmp442 = $tmp440 <= $tmp441;
panda$core$Bit $tmp443 = (panda$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block4; else goto block5;
block8:;
int64_t $tmp445 = $tmp434.value;
int64_t $tmp446 = $tmp435.value;
bool $tmp447 = $tmp445 < $tmp446;
panda$core$Bit $tmp448 = (panda$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block4; else goto block5;
block4:;
// line 343
panda$collections$Array* $tmp450 = *(&local0);
panda$core$Int64 $tmp451 = *(&local1);
panda$core$Object* $tmp452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp450, $tmp451);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp453 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp452)));
*(&local2) = ((panda$core$String*) $tmp452);
panda$core$Panda$unref$panda$core$Object$Q($tmp452);
// line 344
org$pandalanguage$pandac$pandadoc$Protector** $tmp454 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp455 = *$tmp454;
panda$core$String* $tmp456 = *(&local2);
$fn458 $tmp457 = ($fn458) $tmp455->$class->vtable[3];
panda$core$String* $tmp459 = $tmp457($tmp455, $tmp456);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp460 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
*(&local3) = $tmp459;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// line 345
panda$core$String* $tmp461 = *(&local3);
panda$core$Bit $tmp462 = panda$core$Bit$init$builtin_bit($tmp461 != NULL);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block9; else goto block11;
block9:;
// line 346
panda$collections$Array* $tmp464 = *(&local0);
panda$core$Int64 $tmp465 = *(&local1);
panda$core$String* $tmp466 = *(&local3);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp464, $tmp465, ((panda$core$Object*) $tmp466));
goto block10;
block11:;
// line 1
// line 349
panda$core$MutableString* $tmp467 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp468 = *(&local2);
panda$core$MutableString$init$panda$core$String($tmp467, $tmp468);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp469 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
*(&local4) = $tmp467;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
// line 350
panda$core$MutableString* $tmp470 = *(&local4);
$fn472 $tmp471 = ($fn472) param0->$class->vtable[22];
$tmp471(param0, $tmp470);
// line 351
panda$collections$Array* $tmp473 = *(&local0);
panda$core$Int64 $tmp474 = *(&local1);
panda$core$MutableString* $tmp475 = *(&local4);
panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s477, ((panda$core$Object*) $tmp475));
panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s479);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp473, $tmp474, ((panda$core$Object*) $tmp478));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
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
int64_t $tmp484 = $tmp435.value;
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484 - $tmp485;
panda$core$Int64 $tmp487 = (panda$core$Int64) {$tmp486};
panda$core$UInt64 $tmp488 = panda$core$Int64$convert$R$panda$core$UInt64($tmp487);
if ($tmp437) goto block13; else goto block14;
block13:;
uint64_t $tmp489 = $tmp488.value;
uint64_t $tmp490 = $tmp439.value;
bool $tmp491 = $tmp489 >= $tmp490;
panda$core$Bit $tmp492 = (panda$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block12; else goto block5;
block14:;
uint64_t $tmp494 = $tmp488.value;
uint64_t $tmp495 = $tmp439.value;
bool $tmp496 = $tmp494 > $tmp495;
panda$core$Bit $tmp497 = (panda$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block12; else goto block5;
block12:;
int64_t $tmp499 = $tmp483.value;
int64_t $tmp500 = $tmp438.value;
int64_t $tmp501 = $tmp499 + $tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {$tmp501};
*(&local1) = $tmp502;
goto block4;
block5:;
// line 354
panda$collections$Array* $tmp503 = *(&local0);
ITable* $tmp504 = ((panda$collections$CollectionView*) $tmp503)->$class->itable;
while ($tmp504->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp504 = $tmp504->next;
}
$fn506 $tmp505 = $tmp504->methods[2];
panda$core$String* $tmp507 = $tmp505(((panda$collections$CollectionView*) $tmp503), &$s508);
panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s510, $tmp507);
panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s512);
panda$io$Console$printLine$panda$core$String($tmp511);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// line 355
panda$core$Bit $tmp513 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp514 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp513);
panda$collections$Array* $tmp515 = *(&local0);
ITable* $tmp516 = ((panda$collections$CollectionView*) $tmp515)->$class->itable;
while ($tmp516->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp516 = $tmp516->next;
}
$fn518 $tmp517 = $tmp516->methods[2];
panda$core$String* $tmp519 = $tmp517(((panda$collections$CollectionView*) $tmp515), &$s520);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp514, $tmp519);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// line 356
panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s522, ((panda$core$Object*) param1));
panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp521, &$s524);
panda$io$Console$printLine$panda$core$String($tmp523);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
panda$collections$Array* $tmp525 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
// unreffing paragraphs
*(&local0) = ((panda$collections$Array*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 360
panda$core$RegularExpression* $tmp526 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp526, &$s527);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp526, &$s528);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// line 361
panda$core$RegularExpression* $tmp529 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp529, &$s530);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp531 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
*(&local0) = $tmp529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// line 362
panda$core$RegularExpression* $tmp532 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6* $tmp533 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp533, param0);
panda$core$MutableMethod* $tmp535 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp535, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$$anonymous5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp533));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp532, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp535)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
panda$core$RegularExpression* $tmp536 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// unreffing email
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 373
org$pandalanguage$pandac$pandadoc$Protector** $tmp537 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp538 = *$tmp537;
panda$collections$HashMap** $tmp539 = &$tmp538->decodeMap;
panda$collections$HashMap* $tmp540 = *$tmp539;
panda$collections$Iterator* $tmp541 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT($tmp540);
goto block1;
block1:;
ITable* $tmp542 = $tmp541->$class->itable;
while ($tmp542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[0];
panda$core$Bit $tmp545 = $tmp543($tmp541);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$String*) NULL);
ITable* $tmp547 = $tmp541->$class->itable;
while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp547 = $tmp547->next;
}
$fn549 $tmp548 = $tmp547->methods[1];
panda$core$Object* $tmp550 = $tmp548($tmp541);
panda$core$Panda$unref$panda$core$Object$Q($tmp550);
panda$core$String* $tmp551 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp550)));
*(&local0) = ((panda$core$String*) $tmp550);
// line 374
org$pandalanguage$pandac$pandadoc$Protector** $tmp552 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp553 = *$tmp552;
panda$core$String* $tmp554 = *(&local0);
$fn556 $tmp555 = ($fn556) $tmp553->$class->vtable[3];
panda$core$String* $tmp557 = $tmp555($tmp553, $tmp554);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp558 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
*(&local1) = $tmp557;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// line 375
panda$core$String* $tmp559 = *(&local0);
panda$core$String* $tmp560 = *(&local1);
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, $tmp559, $tmp560);
panda$core$String* $tmp561 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// unreffing plaintext
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp562 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing hash
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char32 local1;
panda$core$Real64 local2;
// line 380
panda$core$MutableString* $tmp563 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp563);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp564 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
*(&local0) = $tmp563;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// line 381
ITable* $tmp565 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp565 = $tmp565->next;
}
$fn567 $tmp566 = $tmp565->methods[0];
panda$collections$Iterator* $tmp568 = $tmp566(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp569 = $tmp568->$class->itable;
while ($tmp569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp569 = $tmp569->next;
}
$fn571 $tmp570 = $tmp569->methods[0];
panda$core$Bit $tmp572 = $tmp570($tmp568);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block3; else goto block2;
block2:;
ITable* $tmp574 = $tmp568->$class->itable;
while ($tmp574->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp574 = $tmp574->next;
}
$fn576 $tmp575 = $tmp574->methods[1];
panda$core$Object* $tmp577 = $tmp575($tmp568);
panda$core$Panda$unref$panda$core$Object$Q($tmp577);
*(&local1) = ((panda$core$Char32$wrapper*) $tmp577)->value;
// line 383
panda$math$Random** $tmp578 = &param0->random;
panda$math$Random* $tmp579 = *$tmp578;
ITable* $tmp580 = $tmp579->$class->itable;
while ($tmp580->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[5];
panda$core$Real64 $tmp583 = $tmp581($tmp579);
*(&local2) = $tmp583;
// line 384
panda$core$Real64 $tmp584 = *(&local2);
panda$core$Real64 $tmp585 = (panda$core$Real64) {0.45};
double $tmp586 = $tmp584.value;
double $tmp587 = $tmp585.value;
bool $tmp588 = $tmp586 < $tmp587;
panda$core$Bit $tmp589 = (panda$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block4; else goto block6;
block4:;
// line 385
panda$core$MutableString* $tmp591 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp591, &$s592);
// line 386
panda$core$MutableString* $tmp593 = *(&local0);
panda$core$Char32 $tmp594 = *(&local1);
panda$core$Int32 $tmp595 = panda$core$Char32$convert$R$panda$core$Int32($tmp594);
panda$core$Int32$wrapper* $tmp596;
$tmp596 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
$tmp596->value = $tmp595;
panda$core$MutableString$append$panda$core$Object($tmp593, ((panda$core$Object*) $tmp596));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
// line 387
panda$core$MutableString* $tmp597 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp597, &$s598);
goto block5;
block6:;
// line 389
panda$core$Real64 $tmp599 = *(&local2);
panda$core$Real64 $tmp600 = (panda$core$Real64) {0.9};
double $tmp601 = $tmp599.value;
double $tmp602 = $tmp600.value;
bool $tmp603 = $tmp601 < $tmp602;
panda$core$Bit $tmp604 = (panda$core$Bit) {$tmp603};
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block7; else goto block9;
block7:;
// line 390
panda$core$MutableString* $tmp606 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp606, &$s607);
// line 391
panda$core$MutableString* $tmp608 = *(&local0);
panda$core$Char32 $tmp609 = *(&local1);
panda$core$Int32 $tmp610 = panda$core$Char32$convert$R$panda$core$Int32($tmp609);
panda$core$String* $tmp611 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp610, &$s612);
panda$core$MutableString$append$panda$core$String($tmp608, $tmp611);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// line 392
panda$core$MutableString* $tmp613 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp613, &$s614);
goto block8;
block9:;
// line 1
// line 395
panda$core$MutableString* $tmp615 = *(&local0);
panda$core$Char32 $tmp616 = *(&local1);
panda$core$MutableString$append$panda$core$Char32($tmp615, $tmp616);
goto block8;
block8:;
goto block5;
block5:;
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// line 398
panda$core$MutableString* $tmp617 = *(&local0);
panda$core$String* $tmp618 = panda$core$MutableString$convert$R$panda$core$String($tmp617);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
panda$core$MutableString* $tmp619 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp618;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 402
panda$core$RegularExpression* $tmp620 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s622, &$s623);
panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp621, &$s625);
panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s627);
panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp626, &$s629);
panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s631);
panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s633);
panda$core$Int64 $tmp634 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp620, $tmp632, $tmp634);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp635 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
*(&local0) = $tmp620;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// line 411
panda$core$RegularExpression* $tmp636 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* $tmp637 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp637, param0);
panda$core$MutableMethod* $tmp639 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp639, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp637));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp636, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp639)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
panda$core$RegularExpression* $tmp640 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(panda$collections$ListView* param0) {

panda$core$String* local0 = NULL;
panda$core$Int64 local1;
panda$core$MutableString* local2 = NULL;
// line 426
panda$core$Int64 $tmp641 = (panda$core$Int64) {1};
ITable* $tmp642 = param0->$class->itable;
while ($tmp642->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp642 = $tmp642->next;
}
$fn644 $tmp643 = $tmp642->methods[0];
panda$core$Object* $tmp645 = $tmp643(param0, $tmp641);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp646 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp645)));
*(&local0) = ((panda$core$String*) $tmp645);
panda$core$Panda$unref$panda$core$Object$Q($tmp645);
// line 427
panda$core$String* $tmp647 = *(&local0);
panda$core$Int64 $tmp648 = panda$core$String$get_length$R$panda$core$Int64($tmp647);
*(&local1) = $tmp648;
// line 428
panda$core$MutableString* $tmp649 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp650 = *(&local0);
panda$core$MutableString$init$panda$core$String($tmp649, $tmp650);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp651 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
*(&local2) = $tmp649;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
// line 429
goto block1;
block1:;
// line 430
panda$core$MutableString* $tmp652 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp652, &$s653);
// line 431
panda$core$Int64 $tmp654 = *(&local1);
panda$core$Int64 $tmp655 = (panda$core$Int64) {1};
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655.value;
int64_t $tmp658 = $tmp656 + $tmp657;
panda$core$Int64 $tmp659 = (panda$core$Int64) {$tmp658};
*(&local1) = $tmp659;
goto block2;
block2:;
panda$core$Int64 $tmp660 = *(&local1);
panda$core$Int64 $tmp661 = (panda$core$Int64) {4};
panda$core$Int64 $tmp662 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp660, $tmp661);
panda$core$Int64 $tmp663 = (panda$core$Int64) {0};
int64_t $tmp664 = $tmp662.value;
int64_t $tmp665 = $tmp663.value;
bool $tmp666 = $tmp664 != $tmp665;
panda$core$Bit $tmp667 = (panda$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block1; else goto block3;
block3:;
// line 434
panda$core$MutableString* $tmp669 = *(&local2);
panda$core$String* $tmp670 = panda$core$MutableString$convert$R$panda$core$String($tmp669);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
panda$core$MutableString* $tmp671 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing replacement
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp672 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
// unreffing lineSoFar
*(&local0) = ((panda$core$String*) NULL);
return $tmp670;

}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 425
panda$core$RegularExpression* $tmp673 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp673, &$s674);
panda$core$Method* $tmp676 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp676, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Immutable*) NULL));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp673, ((panda$core$MutableMethod*) $tmp676));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* param0) {

// line 440
panda$core$RegularExpression* $tmp677 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp677, &$s678);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param0, $tmp677, &$s679);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 496
panda$core$RegularExpression* $tmp680 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s682, &$s683);
panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp681, &$s685);
panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp684, &$s687);
panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, &$s689);
panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, &$s691);
panda$core$Int64 $tmp692 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp680, $tmp690, $tmp692);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp693 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
*(&local0) = $tmp680;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp681));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// line 504
panda$core$RegularExpression* $tmp694 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp695 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp695, param0);
panda$core$MutableMethod* $tmp697 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp697, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp695));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp694, $tmp697);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
panda$core$RegularExpression* $tmp698 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
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
// line 508
panda$core$MutableString* $tmp699 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp699, &$s700);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp701 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
*(&local0) = $tmp699;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
// line 509
panda$core$Int64 $tmp702 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp703 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp702);
*(&local1) = $tmp703;
// line 510
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp704 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp705 = *$tmp704;
panda$collections$Array** $tmp706 = &$tmp705->tokens;
panda$collections$Array* $tmp707 = *$tmp706;
ITable* $tmp708 = ((panda$collections$Iterable*) $tmp707)->$class->itable;
while ($tmp708->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp708 = $tmp708->next;
}
$fn710 $tmp709 = $tmp708->methods[0];
panda$collections$Iterator* $tmp711 = $tmp709(((panda$collections$Iterable*) $tmp707));
goto block1;
block1:;
ITable* $tmp712 = $tmp711->$class->itable;
while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp712 = $tmp712->next;
}
$fn714 $tmp713 = $tmp712->methods[0];
panda$core$Bit $tmp715 = $tmp713($tmp711);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
ITable* $tmp717 = $tmp711->$class->itable;
while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp717 = $tmp717->next;
}
$fn719 $tmp718 = $tmp717->methods[1];
panda$core$Object* $tmp720 = $tmp718($tmp711);
panda$core$Panda$unref$panda$core$Object$Q($tmp720);
org$pandalanguage$pandac$Pair* $tmp721 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) $tmp720)));
*(&local2) = ((org$pandalanguage$pandac$Pair*) $tmp720);
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
if ($tmp732) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp733 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp734;
$tmp734 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp734->value = $tmp733;
panda$core$Int64 $tmp735 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp736 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp735);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp737;
$tmp737 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp737->value = $tmp736;
ITable* $tmp738 = ((panda$core$Equatable*) $tmp734)->$class->itable;
while ($tmp738->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp738 = $tmp738->next;
}
$fn740 $tmp739 = $tmp738->methods[1];
panda$core$Bit $tmp741 = $tmp739(((panda$core$Equatable*) $tmp734), ((panda$core$Equatable*) $tmp737));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp734)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp737)));
*(&local3) = $tmp741;
goto block6;
block5:;
*(&local3) = $tmp731;
goto block6;
block6:;
panda$core$Bit $tmp742 = *(&local3);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block7; else goto block8;
block7:;
// line 512
panda$core$MutableString* $tmp744 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp744, &$s745);
goto block8;
block8:;
// line 514
org$pandalanguage$pandac$Pair* $tmp746 = *(&local2);
panda$core$Object** $tmp747 = &$tmp746->second;
panda$core$Object* $tmp748 = *$tmp747;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp749;
$tmp749 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp749->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp748)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp750 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp751;
$tmp751 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp751->value = $tmp750;
ITable* $tmp752 = ((panda$core$Equatable*) $tmp749)->$class->itable;
while ($tmp752->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp752 = $tmp752->next;
}
$fn754 $tmp753 = $tmp752->methods[1];
panda$core$Bit $tmp755 = $tmp753(((panda$core$Equatable*) $tmp749), ((panda$core$Equatable*) $tmp751));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp749)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp751)));
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block9; else goto block10;
block9:;
// line 515
org$pandalanguage$pandac$Pair* $tmp757 = *(&local2);
panda$core$Object** $tmp758 = &$tmp757->second;
panda$core$Object* $tmp759 = *$tmp758;
*(&local1) = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp759)->value;
// line 516
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp760 = *(&local1);
panda$core$Int64 $tmp761 = $tmp760.$rawValue;
panda$core$Int64 $tmp762 = (panda$core$Int64) {0};
panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block12; else goto block13;
block12:;
goto block11;
block13:;
panda$core$Int64 $tmp765 = (panda$core$Int64) {1};
panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp765);
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp768 = (panda$core$Int64) {2};
panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp768);
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block14; else goto block16;
block14:;
// line 521
panda$core$MutableString* $tmp771 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp771, &$s772);
goto block11;
block16:;
panda$core$Int64 $tmp773 = (panda$core$Int64) {3};
panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp773);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block17; else goto block18;
block17:;
// line 524
panda$core$MutableString* $tmp776 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp776, &$s777);
goto block11;
block18:;
panda$core$Int64 $tmp778 = (panda$core$Int64) {4};
panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp778);
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block19; else goto block20;
block19:;
// line 527
panda$core$MutableString* $tmp781 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp781, &$s782);
goto block11;
block20:;
panda$core$Int64 $tmp783 = (panda$core$Int64) {5};
panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block21; else goto block22;
block21:;
// line 530
panda$core$MutableString* $tmp786 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp786, &$s787);
goto block11;
block22:;
panda$core$Int64 $tmp788 = (panda$core$Int64) {6};
panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp788);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block23; else goto block24;
block23:;
// line 533
panda$core$MutableString* $tmp791 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp791, &$s792);
goto block11;
block24:;
panda$core$Int64 $tmp793 = (panda$core$Int64) {7};
panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp793);
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block25; else goto block26;
block25:;
// line 536
panda$core$MutableString* $tmp796 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp796, &$s797);
goto block11;
block26:;
panda$core$Int64 $tmp798 = (panda$core$Int64) {8};
panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp798);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block27; else goto block28;
block27:;
// line 539
panda$core$MutableString* $tmp801 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp801, &$s802);
goto block11;
block28:;
panda$core$Int64 $tmp803 = (panda$core$Int64) {9};
panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp803);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block29; else goto block30;
block29:;
// line 542
panda$core$MutableString* $tmp806 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp806, &$s807);
goto block11;
block30:;
panda$core$Int64 $tmp808 = (panda$core$Int64) {10};
panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp808);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block31; else goto block32;
block31:;
// line 545
panda$core$MutableString* $tmp811 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp811, &$s812);
goto block11;
block32:;
panda$core$Int64 $tmp813 = (panda$core$Int64) {11};
panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp813);
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block33; else goto block34;
block33:;
// line 548
panda$core$MutableString* $tmp816 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp816, &$s817);
goto block11;
block34:;
panda$core$Int64 $tmp818 = (panda$core$Int64) {12};
panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp761, $tmp818);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block35; else goto block36;
block35:;
// line 551
panda$core$MutableString* $tmp821 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp821, &$s822);
goto block11;
block36:;
// line 554
panda$core$Bit $tmp823 = panda$core$Bit$init$builtin_bit(false);
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp825 = (panda$core$Int64) {554};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s826, $tmp825);
abort(); // unreachable
block37:;
goto block11;
block11:;
goto block10;
block10:;
// line 558
panda$core$MutableString* $tmp827 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Pair* $tmp828 = *(&local2);
panda$core$Object** $tmp829 = &$tmp828->first;
panda$core$Object* $tmp830 = *$tmp829;
panda$core$String* $tmp831 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param1, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp830)->value);
panda$core$MutableString$init$panda$core$String($tmp827, $tmp831);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp832 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
*(&local4) = $tmp827;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
// line 559
panda$core$MutableString* $tmp833 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp833, &$s834, &$s835);
// line 560
panda$core$MutableString* $tmp836 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp836, &$s837, &$s838);
// line 561
panda$core$MutableString* $tmp839 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp839, &$s840, &$s841);
// line 562
panda$core$MutableString* $tmp842 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp843 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp844 = *$tmp843;
$fn846 $tmp845 = ($fn846) $tmp844->$class->vtable[2];
panda$core$String* $tmp847 = $tmp845($tmp844, &$s848);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp842, &$s849, $tmp847);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
// line 563
panda$core$MutableString* $tmp850 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp851 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp852 = *$tmp851;
$fn854 $tmp853 = ($fn854) $tmp852->$class->vtable[2];
panda$core$String* $tmp855 = $tmp853($tmp852, &$s856);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp850, &$s857, $tmp855);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// line 564
panda$core$MutableString* $tmp858 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp859 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp860 = *$tmp859;
$fn862 $tmp861 = ($fn862) $tmp860->$class->vtable[2];
panda$core$String* $tmp863 = $tmp861($tmp860, &$s864);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp858, &$s865, $tmp863);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// line 565
panda$core$MutableString* $tmp866 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp867 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp868 = *$tmp867;
$fn870 $tmp869 = ($fn870) $tmp868->$class->vtable[2];
panda$core$String* $tmp871 = $tmp869($tmp868, &$s872);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp866, &$s873, $tmp871);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
// line 566
panda$core$MutableString* $tmp874 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp875 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp876 = *$tmp875;
$fn878 $tmp877 = ($fn878) $tmp876->$class->vtable[2];
panda$core$String* $tmp879 = $tmp877($tmp876, &$s880);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp874, &$s881, $tmp879);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
// line 567
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp882 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp883;
$tmp883 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp883->value = $tmp882;
panda$core$Int64 $tmp884 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp885 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp884);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp886;
$tmp886 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp886->value = $tmp885;
ITable* $tmp887 = ((panda$core$Equatable*) $tmp883)->$class->itable;
while ($tmp887->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp887 = $tmp887->next;
}
$fn889 $tmp888 = $tmp887->methods[1];
panda$core$Bit $tmp890 = $tmp888(((panda$core$Equatable*) $tmp883), ((panda$core$Equatable*) $tmp886));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp883)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp886)));
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp892 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp893;
$tmp893 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp893->value = $tmp892;
panda$core$Int64 $tmp894 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp895 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp894);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp896;
$tmp896 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp896->value = $tmp895;
ITable* $tmp897 = ((panda$core$Equatable*) $tmp893)->$class->itable;
while ($tmp897->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp897 = $tmp897->next;
}
$fn899 $tmp898 = $tmp897->methods[1];
panda$core$Bit $tmp900 = $tmp898(((panda$core$Equatable*) $tmp893), ((panda$core$Equatable*) $tmp896));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp893)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp896)));
*(&local5) = $tmp900;
goto block41;
block40:;
*(&local5) = $tmp890;
goto block41;
block41:;
panda$core$Bit $tmp901 = *(&local5);
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block42; else goto block43;
block42:;
// line 569
panda$core$MutableString* $tmp903 = *(&local0);
org$pandalanguage$pandac$Pair* $tmp904 = *(&local2);
panda$core$Object** $tmp905 = &$tmp904->first;
panda$core$Object* $tmp906 = *$tmp905;
org$pandalanguage$pandac$parser$Token$Kind $tmp907 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp906)->value.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp908;
$tmp908 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp908->value = $tmp907;
panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s910, ((panda$core$Object*) $tmp908));
panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s912);
panda$core$MutableString$append$panda$core$String($tmp903, $tmp911);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
goto block43;
block43:;
// line 571
panda$core$MutableString* $tmp913 = *(&local0);
panda$core$MutableString* $tmp914 = *(&local4);
panda$core$MutableString$append$panda$core$Object($tmp913, ((panda$core$Object*) $tmp914));
// line 572
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp915 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp916;
$tmp916 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp916->value = $tmp915;
panda$core$Int64 $tmp917 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp918 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp917);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp919;
$tmp919 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp919->value = $tmp918;
ITable* $tmp920 = ((panda$core$Equatable*) $tmp916)->$class->itable;
while ($tmp920->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp920 = $tmp920->next;
}
$fn922 $tmp921 = $tmp920->methods[1];
panda$core$Bit $tmp923 = $tmp921(((panda$core$Equatable*) $tmp916), ((panda$core$Equatable*) $tmp919));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp916)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp919)));
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp925 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp926;
$tmp926 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp926->value = $tmp925;
panda$core$Int64 $tmp927 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp928 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp927);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp929;
$tmp929 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp929->value = $tmp928;
ITable* $tmp930 = ((panda$core$Equatable*) $tmp926)->$class->itable;
while ($tmp930->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[1];
panda$core$Bit $tmp933 = $tmp931(((panda$core$Equatable*) $tmp926), ((panda$core$Equatable*) $tmp929));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp926)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp929)));
*(&local6) = $tmp933;
goto block46;
block45:;
*(&local6) = $tmp923;
goto block46;
block46:;
panda$core$Bit $tmp934 = *(&local6);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block47; else goto block48;
block47:;
// line 574
panda$core$MutableString* $tmp936 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp936, &$s937);
goto block48;
block48:;
panda$core$MutableString* $tmp938 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp938));
// unreffing s
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$Pair* $tmp939 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// line 577
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp940 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp941;
$tmp941 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp941->value = $tmp940;
panda$core$Int64 $tmp942 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp943 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp942);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp944;
$tmp944 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp944->value = $tmp943;
ITable* $tmp945 = ((panda$core$Equatable*) $tmp941)->$class->itable;
while ($tmp945->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp945 = $tmp945->next;
}
$fn947 $tmp946 = $tmp945->methods[1];
panda$core$Bit $tmp948 = $tmp946(((panda$core$Equatable*) $tmp941), ((panda$core$Equatable*) $tmp944));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp941)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp944)));
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block49; else goto block50;
block49:;
// line 578
panda$core$MutableString* $tmp950 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp950, &$s951);
goto block50;
block50:;
// line 580
panda$core$MutableString* $tmp952 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp952, &$s953);
// line 581
panda$core$MutableString* $tmp954 = *(&local0);
panda$core$String* $tmp955 = panda$core$MutableString$finish$R$panda$core$String($tmp954);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
panda$core$MutableString* $tmp956 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp956));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp955;

}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$parser$Token local5;
// line 585
panda$threads$MessageQueue** $tmp957 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp958 = *$tmp957;
panda$threads$MessageQueue$clear($tmp958);
// line 586
panda$core$String* $tmp959 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$String* $tmp960 = panda$core$String$get_trimmed$R$panda$core$String($tmp959);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp961 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
*(&local0) = $tmp960;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
// line 587
org$pandalanguage$pandac$parser$Parser** $tmp962 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp963 = *$tmp962;
panda$io$File** $tmp964 = &param0->source;
panda$io$File* $tmp965 = *$tmp964;
panda$core$String* $tmp966 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp963, $tmp965, $tmp966);
// line 588
org$pandalanguage$pandac$parser$Parser** $tmp967 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp968 = *$tmp967;
org$pandalanguage$pandac$ASTNode* $tmp969 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q($tmp968);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp970 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
*(&local1) = $tmp969;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// line 589
org$pandalanguage$pandac$ASTNode* $tmp971 = *(&local1);
panda$core$Bit $tmp972 = panda$core$Bit$init$builtin_bit($tmp971 != NULL);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block1; else goto block2;
block1:;
panda$threads$MessageQueue** $tmp974 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp975 = *$tmp974;
panda$core$Int64 $tmp976 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp975);
panda$core$Int64 $tmp977 = (panda$core$Int64) {0};
panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp976, $tmp977);
*(&local2) = $tmp978;
goto block3;
block2:;
*(&local2) = $tmp972;
goto block3;
block3:;
panda$core$Bit $tmp979 = *(&local2);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block4; else goto block5;
block4:;
// line 590
panda$core$Bit $tmp981 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp982 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp981);
org$pandalanguage$pandac$parser$Parser** $tmp983 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp984 = *$tmp983;
$fn986 $tmp985 = ($fn986) param0->$class->vtable[16];
panda$core$String* $tmp987 = $tmp985(param0, $tmp984);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp982, $tmp987);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
// line 591
org$pandalanguage$pandac$ASTNode* $tmp988 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp989 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block5:;
// line 594
panda$threads$MessageQueue** $tmp990 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp991 = *$tmp990;
panda$threads$MessageQueue$clear($tmp991);
// line 595
org$pandalanguage$pandac$parser$Parser** $tmp992 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp993 = *$tmp992;
panda$io$File** $tmp994 = &param0->source;
panda$io$File* $tmp995 = *$tmp994;
panda$core$String* $tmp996 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp993, $tmp995, $tmp996);
// line 596
goto block6;
block6:;
org$pandalanguage$pandac$parser$Parser** $tmp997 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp998 = *$tmp997;
org$pandalanguage$pandac$parser$Token $tmp999 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp998);
org$pandalanguage$pandac$parser$Token$Kind $tmp1000 = $tmp999.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1001;
$tmp1001 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1001->value = $tmp1000;
panda$core$Int64 $tmp1002 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1003 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1002);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1004;
$tmp1004 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1004->value = $tmp1003;
ITable* $tmp1005 = ((panda$core$Equatable*) $tmp1001)->$class->itable;
while ($tmp1005->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1005 = $tmp1005->next;
}
$fn1007 $tmp1006 = $tmp1005->methods[1];
panda$core$Bit $tmp1008 = $tmp1006(((panda$core$Equatable*) $tmp1001), ((panda$core$Equatable*) $tmp1004));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1001)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1004)));
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block9; else goto block10;
block9:;
panda$threads$MessageQueue** $tmp1010 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1011 = *$tmp1010;
panda$core$Int64 $tmp1012 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1011);
panda$core$Int64 $tmp1013 = (panda$core$Int64) {0};
panda$core$Bit $tmp1014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1012, $tmp1013);
*(&local3) = $tmp1014;
goto block11;
block10:;
*(&local3) = $tmp1008;
goto block11;
block11:;
panda$core$Bit $tmp1015 = *(&local3);
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block7; else goto block8;
block7:;
// line 597
org$pandalanguage$pandac$parser$Parser** $tmp1017 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1018 = *$tmp1017;
org$pandalanguage$pandac$ASTNode* $tmp1019 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q($tmp1018);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
goto block6;
block8:;
// line 599
panda$threads$MessageQueue** $tmp1020 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1021 = *$tmp1020;
panda$core$Int64 $tmp1022 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1021);
panda$core$Int64 $tmp1023 = (panda$core$Int64) {0};
panda$core$Bit $tmp1024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1022, $tmp1023);
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block12; else goto block13;
block12:;
// line 600
panda$core$Bit $tmp1026 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1027 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1026);
org$pandalanguage$pandac$parser$Parser** $tmp1028 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1029 = *$tmp1028;
$fn1031 $tmp1030 = ($fn1031) param0->$class->vtable[16];
panda$core$String* $tmp1032 = $tmp1030(param0, $tmp1029);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1027, $tmp1032);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
// line 601
org$pandalanguage$pandac$ASTNode* $tmp1033 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1034 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block13:;
// line 604
panda$threads$MessageQueue** $tmp1035 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1036 = *$tmp1035;
panda$threads$MessageQueue$clear($tmp1036);
// line 605
org$pandalanguage$pandac$parser$Parser** $tmp1037 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1038 = *$tmp1037;
panda$io$File** $tmp1039 = &param0->source;
panda$io$File* $tmp1040 = *$tmp1039;
panda$core$String* $tmp1041 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1038, $tmp1040, $tmp1041);
// line 606
goto block14;
block14:;
org$pandalanguage$pandac$parser$Parser** $tmp1042 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1043 = *$tmp1042;
org$pandalanguage$pandac$parser$Token $tmp1044 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp1043);
org$pandalanguage$pandac$parser$Token$Kind $tmp1045 = $tmp1044.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1046;
$tmp1046 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1046->value = $tmp1045;
panda$core$Int64 $tmp1047 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1048 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1047);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1049;
$tmp1049 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1049->value = $tmp1048;
ITable* $tmp1050 = ((panda$core$Equatable*) $tmp1046)->$class->itable;
while ($tmp1050->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1050 = $tmp1050->next;
}
$fn1052 $tmp1051 = $tmp1050->methods[1];
panda$core$Bit $tmp1053 = $tmp1051(((panda$core$Equatable*) $tmp1046), ((panda$core$Equatable*) $tmp1049));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1046)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1049)));
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block17; else goto block18;
block17:;
panda$threads$MessageQueue** $tmp1055 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1056 = *$tmp1055;
panda$core$Int64 $tmp1057 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1056);
panda$core$Int64 $tmp1058 = (panda$core$Int64) {0};
panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1058);
*(&local4) = $tmp1059;
goto block19;
block18:;
*(&local4) = $tmp1053;
goto block19;
block19:;
panda$core$Bit $tmp1060 = *(&local4);
bool $tmp1061 = $tmp1060.value;
if ($tmp1061) goto block15; else goto block16;
block15:;
// line 607
org$pandalanguage$pandac$parser$Parser** $tmp1062 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1063 = *$tmp1062;
org$pandalanguage$pandac$ASTNode* $tmp1064 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q($tmp1063);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
goto block14;
block16:;
// line 609
panda$threads$MessageQueue** $tmp1065 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1066 = *$tmp1065;
panda$core$Int64 $tmp1067 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1066);
panda$core$Int64 $tmp1068 = (panda$core$Int64) {0};
panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1067, $tmp1068);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block20; else goto block21;
block20:;
// line 610
panda$core$Bit $tmp1071 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1072 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1071);
org$pandalanguage$pandac$parser$Parser** $tmp1073 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1074 = *$tmp1073;
$fn1076 $tmp1075 = ($fn1076) param0->$class->vtable[16];
panda$core$String* $tmp1077 = $tmp1075(param0, $tmp1074);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1072, $tmp1077);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// line 611
org$pandalanguage$pandac$ASTNode* $tmp1078 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1079 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block21:;
// line 614
panda$threads$MessageQueue** $tmp1080 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1081 = *$tmp1080;
panda$threads$MessageQueue$clear($tmp1081);
// line 615
org$pandalanguage$pandac$parser$Parser** $tmp1082 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1083 = *$tmp1082;
panda$io$File** $tmp1084 = &param0->source;
panda$io$File* $tmp1085 = *$tmp1084;
panda$core$String* $tmp1086 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1083, $tmp1085, $tmp1086);
// line 616
goto block22;
block22:;
// line 617
org$pandalanguage$pandac$parser$Parser** $tmp1087 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1088 = *$tmp1087;
org$pandalanguage$pandac$parser$Token $tmp1089 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token($tmp1088);
*(&local5) = $tmp1089;
// line 618
org$pandalanguage$pandac$parser$Token $tmp1090 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp1091 = $tmp1090.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1092;
$tmp1092 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1092->value = $tmp1091;
panda$core$Int64 $tmp1093 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1094 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1093);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1095;
$tmp1095 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1095->value = $tmp1094;
ITable* $tmp1096 = ((panda$core$Equatable*) $tmp1092)->$class->itable;
while ($tmp1096->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1096 = $tmp1096->next;
}
$fn1098 $tmp1097 = $tmp1096->methods[0];
panda$core$Bit $tmp1099 = $tmp1097(((panda$core$Equatable*) $tmp1092), ((panda$core$Equatable*) $tmp1095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1092)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1095)));
bool $tmp1100 = $tmp1099.value;
if ($tmp1100) goto block24; else goto block25;
block24:;
// line 619
goto block23;
block25:;
goto block22;
block23:;
// line 622
panda$core$Bit $tmp1101 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1102 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1101);
org$pandalanguage$pandac$parser$Parser** $tmp1103 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1104 = *$tmp1103;
$fn1106 $tmp1105 = ($fn1106) param0->$class->vtable[16];
panda$core$String* $tmp1107 = $tmp1105(param0, $tmp1104);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1102, $tmp1107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1107));
org$pandalanguage$pandac$ASTNode* $tmp1108 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1109 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 628
panda$core$RegularExpression* $tmp1110 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1110, &$s1111);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1110, &$s1112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
// line 629
$fn1114 $tmp1113 = ($fn1114) param0->$class->vtable[17];
$tmp1113(param0, param1);
// line 630
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s1115, &$s1116);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
panda$core$RegularExpression* local3 = NULL;
// line 634
panda$core$Int64 $tmp1117 = (panda$core$Int64) {4};
panda$core$Int64 $tmp1118 = (panda$core$Int64) {1};
int64_t $tmp1119 = $tmp1117.value;
int64_t $tmp1120 = $tmp1118.value;
int64_t $tmp1121 = $tmp1119 - $tmp1120;
panda$core$Int64 $tmp1122 = (panda$core$Int64) {$tmp1121};
*(&local0) = $tmp1122;
// line 636
panda$core$Int64 $tmp1123 = *(&local0);
panda$core$Int64$wrapper* $tmp1124;
$tmp1124 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1124->value = $tmp1123;
panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1126, ((panda$core$Object*) $tmp1124));
panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1125, &$s1128);
panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1130);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1131 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
*(&local1) = $tmp1129;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// line 659
panda$core$Int64* $tmp1132 = &param0->listLevel;
panda$core$Int64 $tmp1133 = *$tmp1132;
panda$core$Int64 $tmp1134 = (panda$core$Int64) {0};
int64_t $tmp1135 = $tmp1133.value;
int64_t $tmp1136 = $tmp1134.value;
bool $tmp1137 = $tmp1135 > $tmp1136;
panda$core$Bit $tmp1138 = (panda$core$Bit) {$tmp1137};
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block1; else goto block3;
block1:;
// line 660
panda$core$RegularExpression* $tmp1140 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1141 = *(&local1);
panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1143, $tmp1141);
panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, &$s1145);
panda$core$RegularExpression$init$panda$core$String($tmp1140, $tmp1144);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1146 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
*(&local2) = $tmp1140;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
// line 661
panda$core$RegularExpression* $tmp1147 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* $tmp1148 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1148, param0);
panda$core$MutableMethod* $tmp1150 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1150, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1148));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1147, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1150)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
panda$core$RegularExpression* $tmp1151 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
// unreffing matchStartOfLine
*(&local2) = ((panda$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 687
panda$core$RegularExpression* $tmp1152 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1153 = *(&local1);
panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1155, $tmp1153);
panda$core$RegularExpression$init$panda$core$String($tmp1152, $tmp1154);
*(&local3) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1156 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1152));
*(&local3) = $tmp1152;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1152));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
// line 688
panda$core$RegularExpression* $tmp1157 = *(&local3);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14* $tmp1158 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1158, param0);
panda$core$MutableMethod* $tmp1160 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1160, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1158));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1157, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1160)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
panda$core$RegularExpression* $tmp1161 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
// unreffing matchStartOfLine
*(&local3) = ((panda$core$RegularExpression*) NULL);
goto block2;
block2:;
panda$core$String* $tmp1162 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
// unreffing wholeList
*(&local1) = ((panda$core$String*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
// line 729
panda$core$Int64* $tmp1163 = &param0->listLevel;
panda$core$Int64 $tmp1164 = *$tmp1163;
panda$core$Int64 $tmp1165 = (panda$core$Int64) {1};
int64_t $tmp1166 = $tmp1164.value;
int64_t $tmp1167 = $tmp1165.value;
int64_t $tmp1168 = $tmp1166 + $tmp1167;
panda$core$Int64 $tmp1169 = (panda$core$Int64) {$tmp1168};
panda$core$Int64* $tmp1170 = &param0->listLevel;
*$tmp1170 = $tmp1169;
// line 732
panda$core$RegularExpression* $tmp1171 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1171, &$s1172);
panda$core$String* $tmp1173 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(param1, $tmp1171, &$s1174);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp1175 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
*(&local0) = $tmp1173;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
// line 734
panda$core$RegularExpression* $tmp1176 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1178, &$s1179);
panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, &$s1181);
panda$core$Int64 $tmp1182 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1176, $tmp1180, $tmp1182);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1183 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1183));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
*(&local1) = $tmp1176;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1180));
// line 739
panda$core$String* $tmp1184 = *(&local0);
panda$core$RegularExpression* $tmp1185 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* $tmp1186 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1186, param0);
panda$core$MutableMethod* $tmp1188 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1188, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$$anonymous15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1186));
panda$core$String* $tmp1189 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String($tmp1184, $tmp1185, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1188)));
panda$core$String* $tmp1190 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
*(&local0) = $tmp1189;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
// line 756
panda$core$Int64* $tmp1191 = &param0->listLevel;
panda$core$Int64 $tmp1192 = *$tmp1191;
panda$core$Int64 $tmp1193 = (panda$core$Int64) {1};
int64_t $tmp1194 = $tmp1192.value;
int64_t $tmp1195 = $tmp1193.value;
int64_t $tmp1196 = $tmp1194 - $tmp1195;
panda$core$Int64 $tmp1197 = (panda$core$Int64) {$tmp1196};
panda$core$Int64* $tmp1198 = &param0->listLevel;
*$tmp1198 = $tmp1197;
// line 757
panda$core$String* $tmp1199 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
panda$core$RegularExpression* $tmp1200 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
// unreffing p
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1201 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1201));
// unreffing list
*(&local0) = ((panda$core$String*) NULL);
return $tmp1199;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* param0) {

// line 762
panda$core$Bit $tmp1202 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(param0, &$s1203);
return $tmp1202;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* param0) {

panda$core$Bit local0;
// line 767
panda$core$Bit $tmp1204 = panda$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1205 = $tmp1204.value;
if ($tmp1205) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1204;
goto block3;
block2:;
panda$core$Bit $tmp1206 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s1207);
*(&local0) = $tmp1206;
goto block3;
block3:;
panda$core$Bit $tmp1208 = *(&local0);
return $tmp1208;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 772
panda$core$RegularExpression* $tmp1209 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1209, &$s1210);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* $tmp1211 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1211, param0);
panda$core$MutableMethod* $tmp1213 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1213, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1211));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1209, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1213)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
// line 777
panda$core$RegularExpression* $tmp1214 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1214, &$s1215);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20* $tmp1216 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1216, param0);
panda$core$MutableMethod* $tmp1218 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1218, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$$anonymous19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1216));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1214, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1218)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1216));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
// line 784
panda$core$RegularExpression* $tmp1219 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$Int64 $tmp1220 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1219, &$s1221, $tmp1220);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1222 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1222));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
*(&local0) = $tmp1219;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
// line 785
panda$core$RegularExpression* $tmp1223 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* $tmp1224 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1224, param0);
panda$core$MutableMethod* $tmp1226 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1226, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1224));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1223, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1226)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
panda$core$RegularExpression* $tmp1227 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 796
$fn1229 $tmp1228 = ($fn1229) param0->$class->vtable[24];
$tmp1228(param0, param1);
// line 797
$fn1231 $tmp1230 = ($fn1231) param0->$class->vtable[29];
$tmp1230(param0, param1);
// line 798
$fn1233 $tmp1232 = ($fn1233) param0->$class->vtable[3];
$tmp1232(param0, param1);
// line 800
$fn1235 $tmp1234 = ($fn1235) param0->$class->vtable[25];
$tmp1234(param0, param1);
// line 801
$fn1237 $tmp1236 = ($fn1237) param0->$class->vtable[26];
$tmp1236(param0, param1);
// line 802
$fn1239 $tmp1238 = ($fn1239) param0->$class->vtable[10];
$tmp1238(param0, param1);
// line 808
$fn1241 $tmp1240 = ($fn1241) param0->$class->vtable[24];
$tmp1240(param0, param1);
// line 810
$fn1243 $tmp1242 = ($fn1243) param0->$class->vtable[28];
$tmp1242(param0, param1);
// line 811
$fn1245 $tmp1244 = ($fn1245) param0->$class->vtable[27];
$tmp1244(param0, param1);
// line 813
panda$core$RegularExpression* $tmp1246 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1246, &$s1247);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1246, &$s1248);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 param0) {

// line 823
panda$core$Int64 $tmp1249 = (panda$core$Int64) {0};
panda$core$Bit $tmp1250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(param0, $tmp1249);
bool $tmp1251 = $tmp1250.value;
if ($tmp1251) goto block1; else goto block3;
block1:;
// line 824
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1252));
return &$s1253;
block3:;
// line 1
// line 827
panda$core$Int64 $tmp1254 = (panda$core$Int64) {1};
int64_t $tmp1255 = param0.value;
int64_t $tmp1256 = $tmp1254.value;
int64_t $tmp1257 = $tmp1255 - $tmp1256;
panda$core$Int64 $tmp1258 = (panda$core$Int64) {$tmp1257};
panda$core$String* $tmp1259 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1258);
panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1261, $tmp1259);
panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, &$s1263);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
return $tmp1262;
block2:;
panda$core$Bit $tmp1264 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1266 = (panda$core$Int64) {822};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1267, $tmp1266, &$s1268);
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
// line 832
panda$collections$Array* $tmp1269 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1269);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1270 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
*(&local0) = $tmp1269;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
// line 833
panda$core$Int64 $tmp1271 = (panda$core$Int64) {6};
panda$core$String* $tmp1272 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1271);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1273 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
*(&local1) = $tmp1272;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
// line 835
panda$core$RegularExpression* $tmp1274 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1276, &$s1277);
panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1279);
panda$core$String* $tmp1280 = *(&local1);
panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1278, $tmp1280);
panda$core$Int64 $tmp1282 = (panda$core$Int64) {2};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1274, $tmp1281, $tmp1282);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1283 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1274));
*(&local2) = $tmp1274;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1274));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1278));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1281));
// line 843
panda$core$RegularExpression* $tmp1284 = *(&local2);
panda$core$Matcher* $tmp1285 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp1284, param1);
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1286 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
*(&local3) = $tmp1285;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
// line 844
panda$core$String$Index $tmp1287 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local4) = $tmp1287;
// line 845
goto block1;
block1:;
panda$core$Matcher* $tmp1288 = *(&local3);
panda$core$Bit $tmp1289 = panda$core$Matcher$find$R$panda$core$Bit($tmp1288);
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block2; else goto block3;
block2:;
// line 846
panda$core$String$Index $tmp1291 = *(&local4);
panda$core$String$Index$wrapper* $tmp1292;
$tmp1292 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1292->value = $tmp1291;
panda$core$Matcher* $tmp1293 = *(&local3);
panda$core$String$Index $tmp1294;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1294, $tmp1293);
panda$core$String$Index$wrapper* $tmp1295;
$tmp1295 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1295->value = $tmp1294;
ITable* $tmp1296 = ((panda$core$Comparable*) $tmp1292)->$class->itable;
while ($tmp1296->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1296 = $tmp1296->next;
}
$fn1298 $tmp1297 = $tmp1296->methods[1];
panda$core$Bit $tmp1299 = $tmp1297(((panda$core$Comparable*) $tmp1292), ((panda$core$Comparable*) $tmp1295));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1292)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1295)));
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block4; else goto block5;
block4:;
// line 847
panda$collections$Array* $tmp1301 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1302 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1303 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1304 = *(&local4);
panda$core$Matcher* $tmp1305 = *(&local3);
panda$core$String$Index $tmp1306;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1306, $tmp1305);
panda$core$Bit $tmp1307 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1308 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1304, $tmp1306, $tmp1307);
panda$core$String* $tmp1309 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1308);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1302, $tmp1303, $tmp1309);
panda$collections$Array$add$panda$collections$Array$T($tmp1301, ((panda$core$Object*) $tmp1302));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1302));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
goto block5;
block5:;
// line 849
panda$collections$Array* $tmp1310 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1311 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1312 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp1313 = *(&local3);
panda$core$String$Index $tmp1314;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1314, $tmp1313);
panda$core$Matcher* $tmp1315 = *(&local3);
panda$core$String$Index $tmp1316;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1316, $tmp1315);
panda$core$Bit $tmp1317 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1318 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1314, $tmp1316, $tmp1317);
panda$core$String* $tmp1319 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1318);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1311, $tmp1312, $tmp1319);
panda$collections$Array$add$panda$collections$Array$T($tmp1310, ((panda$core$Object*) $tmp1311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// line 850
panda$core$Matcher* $tmp1320 = *(&local3);
panda$core$String$Index $tmp1321;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1321, $tmp1320);
*(&local4) = $tmp1321;
goto block1;
block3:;
// line 852
panda$core$String$Index $tmp1322 = *(&local4);
panda$core$String$Index$wrapper* $tmp1323;
$tmp1323 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1323->value = $tmp1322;
panda$core$String$Index $tmp1324 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$String$Index$wrapper* $tmp1325;
$tmp1325 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1325->value = $tmp1324;
ITable* $tmp1326 = ((panda$core$Comparable*) $tmp1323)->$class->itable;
while ($tmp1326->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1326 = $tmp1326->next;
}
$fn1328 $tmp1327 = $tmp1326->methods[1];
panda$core$Bit $tmp1329 = $tmp1327(((panda$core$Comparable*) $tmp1323), ((panda$core$Comparable*) $tmp1325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1323)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1325)));
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block6; else goto block7;
block6:;
// line 853
panda$collections$Array* $tmp1331 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1332 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1333 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1334 = *(&local4);
panda$core$String$Index $tmp1335 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$Bit $tmp1336 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1337 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1334, $tmp1335, $tmp1336);
panda$core$String* $tmp1338 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1337);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1332, $tmp1333, $tmp1338);
panda$collections$Array$add$panda$collections$Array$T($tmp1331, ((panda$core$Object*) $tmp1332));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
goto block7;
block7:;
// line 856
panda$collections$Array* $tmp1339 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1339)));
panda$core$Matcher* $tmp1340 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
// unreffing m
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$RegularExpression* $tmp1341 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
// unreffing p
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1342 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
// unreffing nestedTags
*(&local1) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp1343 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
// unreffing tokens
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp1339);

}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
// line 869
panda$core$String* $tmp1344 = panda$core$MutableString$convert$R$panda$core$String(param1);
$fn1346 $tmp1345 = ($fn1346) param0->$class->vtable[23];
panda$collections$ListView* $tmp1347 = $tmp1345(param0, $tmp1344);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1348 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
*(&local0) = $tmp1347;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
// line 870
panda$core$MutableString$clear(param1);
// line 872
panda$collections$ListView* $tmp1349 = *(&local0);
ITable* $tmp1350 = ((panda$collections$Iterable*) $tmp1349)->$class->itable;
while ($tmp1350->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1350 = $tmp1350->next;
}
$fn1352 $tmp1351 = $tmp1350->methods[0];
panda$collections$Iterator* $tmp1353 = $tmp1351(((panda$collections$Iterable*) $tmp1349));
goto block1;
block1:;
ITable* $tmp1354 = $tmp1353->$class->itable;
while ($tmp1354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1354 = $tmp1354->next;
}
$fn1356 $tmp1355 = $tmp1354->methods[0];
panda$core$Bit $tmp1357 = $tmp1355($tmp1353);
bool $tmp1358 = $tmp1357.value;
if ($tmp1358) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1359 = $tmp1353->$class->itable;
while ($tmp1359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1359 = $tmp1359->next;
}
$fn1361 $tmp1360 = $tmp1359->methods[1];
panda$core$Object* $tmp1362 = $tmp1360($tmp1353);
panda$core$Panda$unref$panda$core$Object$Q($tmp1362);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1363 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1362)));
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1362);
// line 873
*(&local2) = ((panda$core$String*) NULL);
// line 874
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1364 = *(&local1);
panda$core$Int64* $tmp1365 = &$tmp1364->$rawValue;
panda$core$Int64 $tmp1366 = *$tmp1365;
panda$core$Int64 $tmp1367 = (panda$core$Int64) {0};
panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1366, $tmp1367);
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block5; else goto block6;
block5:;
panda$core$String** $tmp1370 = (panda$core$String**) ($tmp1364->$data + 0);
panda$core$String* $tmp1371 = *$tmp1370;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1372 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1372));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
*(&local3) = $tmp1371;
// line 876
panda$core$String* $tmp1373 = *(&local3);
panda$core$String* $tmp1374 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
*(&local2) = $tmp1373;
// line 877
panda$core$String* $tmp1375 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1376 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1377 = *$tmp1376;
$fn1379 $tmp1378 = ($fn1379) $tmp1377->$class->vtable[2];
panda$core$String* $tmp1380 = $tmp1378($tmp1377, &$s1381);
panda$core$String* $tmp1382 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1375, &$s1383, $tmp1380);
panda$core$String* $tmp1384 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1384));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
*(&local2) = $tmp1382;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
// line 878
panda$core$String* $tmp1385 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1386 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1387 = *$tmp1386;
$fn1389 $tmp1388 = ($fn1389) $tmp1387->$class->vtable[2];
panda$core$String* $tmp1390 = $tmp1388($tmp1387, &$s1391);
panda$core$String* $tmp1392 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1385, &$s1393, $tmp1390);
panda$core$String* $tmp1394 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
*(&local2) = $tmp1392;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
// line 879
panda$core$String* $tmp1395 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1396 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1397 = *$tmp1396;
$fn1399 $tmp1398 = ($fn1399) $tmp1397->$class->vtable[2];
panda$core$String* $tmp1400 = $tmp1398($tmp1397, &$s1401);
panda$core$String* $tmp1402 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1395, &$s1403, $tmp1400);
panda$core$String* $tmp1404 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
*(&local2) = $tmp1402;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
// line 880
panda$core$String* $tmp1405 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1406 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1407 = *$tmp1406;
$fn1409 $tmp1408 = ($fn1409) $tmp1407->$class->vtable[2];
panda$core$String* $tmp1410 = $tmp1408($tmp1407, &$s1411);
panda$core$String* $tmp1412 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1405, &$s1413, $tmp1410);
panda$core$String* $tmp1414 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
*(&local2) = $tmp1412;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
panda$core$String* $tmp1415 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block4;
block6:;
panda$core$Int64 $tmp1416 = (panda$core$Int64) {1};
panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1366, $tmp1416);
bool $tmp1418 = $tmp1417.value;
if ($tmp1418) goto block7; else goto block4;
block7:;
panda$core$String** $tmp1419 = (panda$core$String**) ($tmp1364->$data + 0);
panda$core$String* $tmp1420 = *$tmp1419;
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1421 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
*(&local4) = $tmp1420;
// line 883
panda$core$String* $tmp1422 = *(&local4);
panda$core$String* $tmp1423 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
*(&local2) = $tmp1422;
panda$core$String* $tmp1424 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
// unreffing text
*(&local4) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 886
panda$core$String* $tmp1425 = *(&local2);
panda$core$MutableString$append$panda$core$String(param1, $tmp1425);
panda$core$String* $tmp1426 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1427 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
// unreffing token
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
panda$collections$ListView* $tmp1428 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
// unreffing tokens
*(&local0) = ((panda$collections$ListView*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 892
panda$core$RegularExpression* $tmp1429 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1429, &$s1430);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1429, &$s1431);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// line 893
panda$core$RegularExpression* $tmp1432 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1432, &$s1433);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1432, &$s1434);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1432));
// line 896
panda$core$RegularExpression* $tmp1435 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1437, &$s1438);
panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1440);
panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, &$s1442);
panda$core$RegularExpression$init$panda$core$String($tmp1435, $tmp1441);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1443 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
*(&local0) = $tmp1435;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
// line 901
panda$core$RegularExpression* $tmp1444 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* $tmp1445 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1445, param0);
panda$core$MutableMethod* $tmp1447 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1447, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$$anonymous23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1445));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1444, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1447)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1447));
panda$core$RegularExpression* $tmp1448 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
// unreffing imageLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
// line 934
panda$core$RegularExpression* $tmp1449 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1451, &$s1452);
panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1454);
panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1456);
panda$core$RegularExpression$init$panda$core$String($tmp1449, $tmp1455);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1457 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1457));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
*(&local0) = $tmp1449;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
// line 939
panda$core$RegularExpression* $tmp1458 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* $tmp1459 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1459, param0);
panda$core$MutableMethod* $tmp1461 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1461, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1459));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1458, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1461)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
// line 971
panda$core$RegularExpression* $tmp1462 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1464, &$s1465);
panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1467);
panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, &$s1469);
panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1471);
panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, &$s1473);
panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, &$s1475);
panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, &$s1477);
panda$core$String* $tmp1478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1476, &$s1479);
panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1478, &$s1481);
panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1483);
panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, &$s1485);
panda$core$Int64 $tmp1486 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1462, $tmp1484, $tmp1486);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1487 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
*(&local1) = $tmp1462;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1478));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1482));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
// line 985
panda$core$RegularExpression* $tmp1488 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* $tmp1489 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1489, param0);
panda$core$MutableMethod* $tmp1491 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1491, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1489));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1488, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1491)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
// line 1022
panda$core$RegularExpression* $tmp1492 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1494, &$s1495);
panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, &$s1497);
panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, &$s1499);
panda$core$Int64 $tmp1500 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1492, $tmp1498, $tmp1500);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1501 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
*(&local2) = $tmp1492;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
// line 1028
panda$core$RegularExpression* $tmp1502 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* $tmp1503 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1503, param0);
panda$core$MutableMethod* $tmp1505 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1505, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1503));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1502, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1505)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
panda$core$RegularExpression* $tmp1506 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
// unreffing referenceShortcut
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1507 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
// unreffing inlineLink
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1508 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
// unreffing internalLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1070
panda$core$RegularExpression* $tmp1509 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1509, &$s1510);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1509, &$s1511);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
// line 1071
panda$core$RegularExpression* $tmp1512 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1512, &$s1513);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1512, &$s1514);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1077
panda$core$RegularExpression* $tmp1515 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1515, &$s1516);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1515, &$s1517);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
// line 1078
panda$core$RegularExpression* $tmp1518 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1518, &$s1519);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1518, &$s1520);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1518));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1082
panda$core$RegularExpression* $tmp1521 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1521, &$s1522);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32* $tmp1523 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1523, param0);
panda$core$MutableMethod* $tmp1525 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1525, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1523));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1521, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1525)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

panda$io$File** $tmp1526 = &param0->source;
panda$io$File* $tmp1527 = *$tmp1526;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1527));
panda$threads$MessageQueue** $tmp1528 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1529 = *$tmp1528;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1529));
org$pandalanguage$pandac$parser$Parser** $tmp1530 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1531 = *$tmp1530;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
panda$core$MutableMethod** $tmp1532 = &param0->linkResolver;
panda$core$MutableMethod* $tmp1533 = *$tmp1532;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
panda$collections$HashMap** $tmp1534 = &param0->linkDefinitions;
panda$collections$HashMap* $tmp1535 = *$tmp1534;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1536 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1537 = *$tmp1536;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1538 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1539 = *$tmp1538;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
panda$math$Random** $tmp1540 = &param0->random;
panda$math$Random* $tmp1541 = *$tmp1540;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
return;

}

