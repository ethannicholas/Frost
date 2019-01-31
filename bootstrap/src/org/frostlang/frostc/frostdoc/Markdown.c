#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableMethod.h"
#include "frost/threads/MessageQueue.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/collections/HashMap.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/math/Random.h"
#include "frost/core/Int64.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/MutableString.h"
#include "frost/core/RegularExpression.h"
#include "frost/collections/ListView.h"
#include "frost/core/Char8.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure2.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure4.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.h"
#include "frost/core/MutableString/Index.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure6.h"
#include "frost/collections/MapView.h"
#include "frost/core/Char32.h"
#include "frost/core/Real64.h"
#include "frost/core/Int32.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure9.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure13.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure15.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure17.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure19.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure21.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure23.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure25.h"
#include "frost/core/Matcher.h"
#include "frost/core/String/Index.h"
#include "frost/core/Comparable.h"
#include "org/frostlang/frostc/frostdoc/Markdown/HTMLToken.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure27.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure29.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure31.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure33.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure35.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$class_type org$frostlang$frostc$frostdoc$Markdown$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$cleanup, org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT, org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString} };

typedef void (*$fn62)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn69)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn72)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn75)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn78)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn83)(frost$core$Object*);
typedef frost$core$String* (*$fn95)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn101)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef void (*$fn105)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn111)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn115)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn120)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn135)(frost$core$Object*);
typedef frost$core$String* (*$fn138)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn156)(org$frostlang$frostc$frostdoc$Markdown$_Closure2*, frost$collections$ListView*);
typedef void (*$fn160)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn162)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn164)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn166)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn168)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn170)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn172)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$collections$Iterator* (*$fn184)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn188)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn193)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn256)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn267)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn301)(org$frostlang$frostc$frostdoc$Markdown$_Closure4*, frost$collections$ListView*);
typedef frost$core$String* (*$fn422)(frost$core$Object*);
typedef frost$core$Int64 (*$fn432)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn460)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn474)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn510)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn522)(org$frostlang$frostc$frostdoc$Markdown$_Closure6*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn531)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn535)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn540)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn547)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn558)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn562)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn567)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn573)(frost$math$Random*);
typedef frost$core$String* (*$fn610)(frost$core$Object*);
typedef frost$core$Object* (*$fn631)(org$frostlang$frostc$frostdoc$Markdown$_Closure9*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn637)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn664)(frost$core$Object*);
typedef frost$core$String* (*$fn670)(frost$collections$ListView*);
typedef frost$core$String* (*$fn694)(org$frostlang$frostc$frostdoc$Markdown$_Closure13*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn709)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn713)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn718)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn729)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn739)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn752)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn842)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn850)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn858)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn866)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn874)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn885)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn895)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn917)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn927)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn941)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn954)(frost$core$Object*);
typedef frost$core$String* (*$fn981)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1002)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1025)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1046)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1069)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1091)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1099)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef void (*$fn1107)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn1142)(org$frostlang$frostc$frostdoc$Markdown$_Closure15*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1152)(org$frostlang$frostc$frostdoc$Markdown$_Closure17*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1180)(org$frostlang$frostc$frostdoc$Markdown$_Closure19*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1205)(org$frostlang$frostc$frostdoc$Markdown$_Closure21*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1210)(org$frostlang$frostc$frostdoc$Markdown$_Closure23*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1218)(org$frostlang$frostc$frostdoc$Markdown$_Closure25*, frost$collections$ListView*);
typedef void (*$fn1222)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1224)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1226)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1228)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1230)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1232)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1234)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1236)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1238)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Bit (*$fn1286)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn1316)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$String* (*$fn1333)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn1336)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1342)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1346)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1351)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1369)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1379)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1389)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1399)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1436)(org$frostlang$frostc$frostdoc$Markdown$_Closure27*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1450)(org$frostlang$frostc$frostdoc$Markdown$_Closure29*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1480)(org$frostlang$frostc$frostdoc$Markdown$_Closure31*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1494)(org$frostlang$frostc$frostdoc$Markdown$_Closure33*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1514)(org$frostlang$frostc$frostdoc$Markdown$_Closure35*, frost$collections$ListView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e", 38, -1724407959187196015, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x64\x75\x6d\x6d\x79", 10, -2887356857474712656, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x72\x5c\x6e", 4, 200020409, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x2b\x24", 6, 2058973016890, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60\x5f\x3e\x21", 4, 203944687, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, -6003771304831432199, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 199795969, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x5c", 3, 1978177, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29", 4, 145926154, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 33, -4589409330981298645, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f", 10, -7697525032227164949, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 15, 4344893690925401026, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f", 24, -4892301784787365954, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 10, 7324187788974597826, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, -695802876960105267, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 5711149104113814898, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, 1703066247920, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70", 1, 213, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76", 3, 2061124, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x31", 2, 20754, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x32", 2, 20755, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x33", 2, 20756, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x34", 2, 20757, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x35", 2, 20758, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x36", 2, 20759, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -2536067448883908010, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65", 3, 2184428, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 22682056921, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6c", 2, 20409, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, 2280602224762, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, 22741103748248783, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d", 4, 210295037, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 21876880126472849, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, 2175813319029, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x68", 4, 217364527, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x73", 3, 2112631, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x6c", 3, 2060710, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 16803092312, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5e", 2, 14335, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28", 2, 16301, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 156491179351200, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, 4158029666834239703, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 20151576623, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 16796009060, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 1536684806687938687, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3f\x3e", 3, 1516173, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 47502487764265221, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, 4158029666834239703, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 20151576623, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a", 4, 145926777, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x21", 2, 16294, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, -4188240096700658567, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, -2921786165263253076, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 20197438560, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x23", 2, 14074, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 965728039488327577, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static frost$core$String $s820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s869 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s877 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static frost$core$String $s1108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static frost$core$String $s1174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static frost$core$String $s1214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static frost$core$String $s1241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static frost$core$String $s1256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static frost$core$String $s1265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s1381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s1401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static frost$core$String $s1421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static frost$core$String $s1427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static frost$core$String $s1428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static frost$core$String $s1461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static frost$core$String $s1471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static frost$core$String $s1473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static frost$core$String $s1475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static frost$core$String $s1487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s1489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static frost$core$String $s1501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static frost$core$String $s1503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static frost$core$String $s1504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static frost$core$String $s1507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s1509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static frost$core$String $s1510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

void org$frostlang$frostc$frostdoc$Markdown$init(org$frostlang$frostc$frostdoc$Markdown* param0) {

// line 120
org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(param0, ((frost$core$MutableMethod*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableMethod* param1) {

// line 98
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp2 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$threads$MessageQueue** $tmp3 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$threads$MessageQueue** $tmp5 = &param0->errorQueue;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 100
FROST_ASSERT(96 == sizeof(org$frostlang$frostc$parser$Parser));
org$frostlang$frostc$parser$Parser* $tmp6 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue** $tmp7 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp8 = *$tmp7;
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT($tmp6, $tmp8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$parser$Parser** $tmp9 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$parser$Parser** $tmp11 = &param0->parser;
*$tmp11 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// line 105
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp12 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$collections$HashMap** $tmp13 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$HashMap** $tmp15 = &param0->linkDefinitions;
*$tmp15 = $tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// line 108
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$frostdoc$Protector));
org$frostlang$frostc$frostdoc$Protector* $tmp16 = (org$frostlang$frostc$frostdoc$Protector*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Protector$class);
org$frostlang$frostc$frostdoc$Protector$init($tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$frostdoc$Protector** $tmp17 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp18 = *$tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlang$frostc$frostdoc$Protector** $tmp19 = &param0->charProtector;
*$tmp19 = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// line 111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$frostdoc$Protector));
org$frostlang$frostc$frostdoc$Protector* $tmp20 = (org$frostlang$frostc$frostdoc$Protector*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Protector$class);
org$frostlang$frostc$frostdoc$Protector$init($tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$frostdoc$Protector** $tmp21 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp22 = *$tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$frostc$frostdoc$Protector** $tmp23 = &param0->htmlProtector;
*$tmp23 = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// line 114
frost$math$Random* $tmp24 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$math$Random** $tmp25 = &param0->random;
frost$math$Random* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$math$Random** $tmp27 = &param0->random;
*$tmp27 = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// line 117
frost$core$Int64 $tmp28 = (frost$core$Int64) {0};
frost$core$Int64* $tmp29 = &param0->listLevel;
*$tmp29 = $tmp28;
// line 124
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp30 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp30, &$s31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$io$File** $tmp32 = &param0->source;
frost$io$File* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$io$File** $tmp34 = &param0->source;
*$tmp34 = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// line 125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$MutableMethod** $tmp35 = &param0->linkResolver;
frost$core$MutableMethod* $tmp36 = *$tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$MutableMethod** $tmp37 = &param0->linkResolver;
*$tmp37 = param1;
// line 126
org$frostlang$frostc$parser$Parser** $tmp38 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp39 = *$tmp38;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$SyntaxHighlighter));
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp40 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp41 = &$tmp39->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp43 = &$tmp39->syntaxHighlighter;
*$tmp43 = $tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
// line 130
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp44 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp44, param1);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$MutableString* $tmp45 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local0) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// line 131
frost$core$MutableString* $tmp46 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp47, &$s48);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp46, $tmp47, &$s49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// line 132
frost$core$MutableString* $tmp50 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp51 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp51, &$s52);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp50, $tmp51, &$s53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// line 133
frost$core$MutableString* $tmp54 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp55 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp55, &$s56);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp54, $tmp55, &$s57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// line 136
frost$core$MutableString* $tmp58 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp58, &$s59);
// line 138
frost$core$MutableString* $tmp60 = *(&local0);
$fn62 $tmp61 = ($fn62) param0->$class->vtable[14];
$tmp61(param0, $tmp60);
// line 139
frost$core$MutableString* $tmp63 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp64 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp64, &$s65);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp63, $tmp64, &$s66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// line 140
frost$core$MutableString* $tmp67 = *(&local0);
$fn69 $tmp68 = ($fn69) param0->$class->vtable[8];
$tmp68(param0, $tmp67);
// line 141
frost$core$MutableString* $tmp70 = *(&local0);
$fn72 $tmp71 = ($fn72) param0->$class->vtable[5];
$tmp71(param0, $tmp70);
// line 142
frost$core$MutableString* $tmp73 = *(&local0);
$fn75 $tmp74 = ($fn75) param0->$class->vtable[6];
$tmp74(param0, $tmp73);
// line 143
frost$core$MutableString* $tmp76 = *(&local0);
$fn78 $tmp77 = ($fn78) param0->$class->vtable[11];
$tmp77(param0, $tmp76);
// line 145
frost$core$MutableString* $tmp79 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp79, &$s80);
// line 146
frost$core$MutableString* $tmp81 = *(&local0);
$fn83 $tmp82 = ($fn83) ((frost$core$Object*) $tmp81)->$class->vtable[0];
frost$core$String* $tmp84 = $tmp82(((frost$core$Object*) $tmp81));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$MutableString* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp84;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// line 150
frost$collections$ListView* $tmp86 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s87);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$collections$ListView* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// line 151
frost$collections$ListView* $tmp89 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s90);
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$collections$ListView* $tmp91 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local1) = $tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// line 154
org$frostlang$frostc$frostdoc$Protector** $tmp92 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp93 = *$tmp92;
$fn95 $tmp94 = ($fn95) $tmp93->$class->vtable[2];
frost$core$String* $tmp96 = $tmp94($tmp93, &$s97);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s98, $tmp96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// line 157
frost$collections$ListView* $tmp99 = *(&local0);
$fn101 $tmp100 = ($fn101) param0->$class->vtable[4];
$tmp100(param0, param1, $tmp99, &$s102);
// line 158
frost$collections$ListView* $tmp103 = *(&local1);
$fn105 $tmp104 = ($fn105) param0->$class->vtable[4];
$tmp104(param0, param1, $tmp103, &$s106);
frost$collections$ListView* $tmp107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1, frost$collections$ListView* param2, frost$core$String* param3) {

frost$core$Char8 local0;
frost$core$RegularExpression* local1 = NULL;
// line 162
ITable* $tmp109 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$collections$Iterator* $tmp112 = $tmp110(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp113 = $tmp112->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Bit $tmp116 = $tmp114($tmp112);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block3; else goto block2;
block2:;
ITable* $tmp118 = $tmp112->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Object* $tmp121 = $tmp119($tmp112);
*(&local0) = ((frost$core$Char8$wrapper*) $tmp121)->value;
// line 163
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp122 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s124, param3);
frost$core$Char8 $tmp125 = *(&local0);
frost$core$Char8$wrapper* $tmp126;
$tmp126 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp126->value = $tmp125;
frost$core$String* $tmp127 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp123, ((frost$core$Object*) $tmp126));
frost$core$RegularExpression$init$frost$core$String($tmp122, $tmp127);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$RegularExpression* $tmp128 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local1) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// line 164
frost$core$RegularExpression* $tmp129 = *(&local1);
org$frostlang$frostc$frostdoc$Protector** $tmp130 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp131 = *$tmp130;
frost$core$Char8 $tmp132 = *(&local0);
frost$core$Char8$wrapper* $tmp133;
$tmp133 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp133->value = $tmp132;
$fn135 $tmp134 = ($fn135) ((frost$core$Object*) $tmp133)->$class->vtable[0];
frost$core$String* $tmp136 = $tmp134(((frost$core$Object*) $tmp133));
$fn138 $tmp137 = ($fn138) $tmp131->$class->vtable[2];
frost$core$String* $tmp139 = $tmp137($tmp131, $tmp136);
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit(false);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(param1, $tmp129, $tmp139, $tmp140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$RegularExpression* $tmp141 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 169
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp142 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s144, &$s145);
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, &$s147);
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, &$s149);
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s151);
frost$core$Int64 $tmp152 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp142, $tmp150, $tmp152);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$RegularExpression* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local0) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// line 177
frost$core$RegularExpression* $tmp154 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure2));
org$frostlang$frostc$frostdoc$Markdown$_Closure2* $tmp155 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure2$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown($tmp155, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp157 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp157, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp155));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp154, $tmp157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$RegularExpression* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 199
$fn160 $tmp159 = ($fn160) param0->$class->vtable[21];
$tmp159(param0, param1);
// line 200
$fn162 $tmp161 = ($fn162) param0->$class->vtable[7];
$tmp161(param0, param1);
// line 201
$fn164 $tmp163 = ($fn164) param0->$class->vtable[19];
$tmp163(param0, param1);
// line 202
$fn166 $tmp165 = ($fn166) param0->$class->vtable[15];
$tmp165(param0, param1);
// line 203
$fn168 $tmp167 = ($fn168) param0->$class->vtable[13];
$tmp167(param0, param1);
// line 204
$fn170 $tmp169 = ($fn170) param0->$class->vtable[8];
$tmp169(param0, param1);
// line 205
$fn172 $tmp171 = ($fn172) param0->$class->vtable[9];
$tmp171(param0, param1);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
// line 209
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp173 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp173);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$collections$Array* $tmp174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local0) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// line 210
frost$collections$Array* $tmp175 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp175, ((frost$core$Object*) &$s176));
// line 211
frost$collections$Array* $tmp177 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp177, ((frost$core$Object*) &$s178));
// line 212
frost$collections$Array* $tmp179 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp179, ((frost$core$Object*) &$s180));
// line 213
frost$collections$Array* $tmp181 = *(&local0);
ITable* $tmp182 = ((frost$collections$Iterable*) $tmp181)->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$collections$Iterator* $tmp185 = $tmp183(((frost$collections$Iterable*) $tmp181));
goto block1;
block1:;
ITable* $tmp186 = $tmp185->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Bit $tmp189 = $tmp187($tmp185);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp191 = $tmp185->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
frost$core$Object* $tmp194 = $tmp192($tmp185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp194)));
frost$core$String* $tmp195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local1) = ((frost$core$String*) $tmp194);
// line 214
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp196 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp197 = *(&local1);
frost$core$String* $tmp198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s199, $tmp197);
frost$core$String* $tmp200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp198, &$s201);
frost$core$RegularExpression$init$frost$core$String($tmp196, $tmp200);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp196, &$s202);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
frost$core$String* $tmp203 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$collections$Array* $tmp204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Int64 local4;
frost$core$RegularExpression* local5 = NULL;
frost$core$MutableMethod* local6 = NULL;
frost$core$RegularExpression* local7 = NULL;
frost$core$RegularExpression* local8 = NULL;
frost$core$RegularExpression* local9 = NULL;
// line 227
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp205 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp205);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$collections$Array* $tmp206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local0) = $tmp205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// line 228
frost$collections$Array* $tmp207 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp207, ((frost$core$Object*) &$s208));
// line 229
frost$collections$Array* $tmp209 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp209, ((frost$core$Object*) &$s210));
// line 230
frost$collections$Array* $tmp211 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp211, ((frost$core$Object*) &$s212));
// line 231
frost$collections$Array* $tmp213 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp213, ((frost$core$Object*) &$s214));
// line 232
frost$collections$Array* $tmp215 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp215, ((frost$core$Object*) &$s216));
// line 233
frost$collections$Array* $tmp217 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp217, ((frost$core$Object*) &$s218));
// line 234
frost$collections$Array* $tmp219 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp219, ((frost$core$Object*) &$s220));
// line 235
frost$collections$Array* $tmp221 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp221, ((frost$core$Object*) &$s222));
// line 236
frost$collections$Array* $tmp223 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp223, ((frost$core$Object*) &$s224));
// line 237
frost$collections$Array* $tmp225 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp225, ((frost$core$Object*) &$s226));
// line 238
frost$collections$Array* $tmp227 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp227, ((frost$core$Object*) &$s228));
// line 239
frost$collections$Array* $tmp229 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp229, ((frost$core$Object*) &$s230));
// line 240
frost$collections$Array* $tmp231 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp231, ((frost$core$Object*) &$s232));
// line 241
frost$collections$Array* $tmp233 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp233, ((frost$core$Object*) &$s234));
// line 242
frost$collections$Array* $tmp235 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp235, ((frost$core$Object*) &$s236));
// line 243
frost$collections$Array* $tmp237 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp237, ((frost$core$Object*) &$s238));
// line 244
frost$collections$Array* $tmp239 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp239, ((frost$core$Object*) &$s240));
// line 245
frost$collections$Array* $tmp241 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp241, ((frost$core$Object*) &$s242));
// line 246
frost$collections$Array* $tmp243 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp243, ((frost$core$Object*) &$s244));
// line 247
frost$collections$Array* $tmp245 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp245, ((frost$core$Object*) &$s246));
// line 248
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp247 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp247);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$collections$Array* $tmp248 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local1) = $tmp247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// line 249
frost$collections$Array* $tmp249 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp249, ((frost$core$Object*) &$s250));
// line 250
frost$collections$Array* $tmp251 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp251, ((frost$core$Object*) &$s252));
// line 252
frost$collections$Array* $tmp253 = *(&local0);
ITable* $tmp254 = ((frost$collections$CollectionView*) $tmp253)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[2];
frost$core$String* $tmp257 = $tmp255(((frost$collections$CollectionView*) $tmp253), &$s258);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$String* $tmp259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local2) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// line 253
frost$core$String* $tmp260 = *(&local2);
frost$core$String* $tmp261 = frost$core$String$get_asString$R$frost$core$String($tmp260);
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp261, &$s263);
frost$collections$Array* $tmp264 = *(&local1);
ITable* $tmp265 = ((frost$collections$CollectionView*) $tmp264)->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[2];
frost$core$String* $tmp268 = $tmp266(((frost$collections$CollectionView*) $tmp264), &$s269);
frost$core$String* $tmp270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp262, $tmp268);
frost$core$String* $tmp271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp270, &$s272);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$String* $tmp273 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local3) = $tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// line 255
frost$core$Int64 $tmp274 = (frost$core$Int64) {4};
frost$core$Int64 $tmp275 = (frost$core$Int64) {1};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 - $tmp277;
frost$core$Int64 $tmp279 = (frost$core$Int64) {$tmp278};
*(&local4) = $tmp279;
// line 268
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp280 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp281 = *(&local2);
frost$core$String* $tmp282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s283, $tmp281);
frost$core$String* $tmp284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp282, &$s285);
frost$core$String* $tmp286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp284, &$s287);
frost$core$String* $tmp288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp286, &$s289);
frost$core$String* $tmp290 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp288, &$s291);
frost$core$String* $tmp292 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp290, &$s293);
frost$core$String* $tmp294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp292, &$s295);
frost$core$Int64 $tmp296 = (frost$core$Int64) {1};
frost$core$Int64 $tmp297 = (frost$core$Int64) {2};
frost$core$Int64 $tmp298 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp296, $tmp297);
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp280, $tmp294, $tmp298);
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$RegularExpression* $tmp299 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local5) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// line 277
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure4));
org$frostlang$frostc$frostdoc$Markdown$_Closure4* $tmp300 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure4$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure4$init$org$frostlang$frostc$frostdoc$Markdown($tmp300, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp302 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp302, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp300));
// line 277
*(&local6) = ((frost$core$MutableMethod*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$MutableMethod* $tmp303 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local6) = $tmp302;
// line 281
frost$core$RegularExpression* $tmp304 = *(&local5);
frost$core$MutableMethod* $tmp305 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp304, $tmp305);
// line 284
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp306 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s308, &$s309);
frost$core$String* $tmp310 = *(&local3);
frost$core$String* $tmp311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp307, $tmp310);
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp311, &$s313);
frost$core$String* $tmp314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp312, &$s315);
frost$core$String* $tmp316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp314, &$s317);
frost$core$String* $tmp318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp316, &$s319);
frost$core$String* $tmp320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp318, &$s321);
frost$core$String* $tmp322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp320, &$s323);
frost$core$Int64 $tmp324 = (frost$core$Int64) {1};
frost$core$Int64 $tmp325 = (frost$core$Int64) {2};
frost$core$Int64 $tmp326 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp324, $tmp325);
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp306, $tmp322, $tmp326);
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$RegularExpression* $tmp327 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local7) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// line 293
frost$core$RegularExpression* $tmp328 = *(&local7);
frost$core$MutableMethod* $tmp329 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp328, $tmp329);
// line 296
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp330 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s332, &$s333);
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s335);
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, &$s337);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp336, &$s339);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
frost$core$Int64 $tmp342 = *(&local4);
frost$core$Int64$wrapper* $tmp343;
$tmp343 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp343->value = $tmp342;
frost$core$String* $tmp344 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp340, ((frost$core$Object*) $tmp343));
frost$core$String* $tmp345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp344, &$s346);
frost$core$String* $tmp347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp345, &$s348);
frost$core$String* $tmp349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp347, &$s350);
frost$core$String* $tmp351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp349, &$s352);
frost$core$String* $tmp353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp351, &$s354);
frost$core$String* $tmp355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp353, &$s356);
frost$core$String* $tmp357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp355, &$s358);
frost$core$Int64 $tmp359 = (frost$core$Int64) {2};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp330, $tmp357, $tmp359);
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$RegularExpression* $tmp360 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local8) = $tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// line 310
frost$core$RegularExpression* $tmp361 = *(&local8);
frost$core$MutableMethod* $tmp362 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp361, $tmp362);
// line 313
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp363 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s365, &$s366);
frost$core$String* $tmp367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp364, &$s368);
frost$core$String* $tmp369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp367, &$s370);
frost$core$String* $tmp371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp369, &$s372);
frost$core$String* $tmp373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp371, &$s374);
frost$core$Int64 $tmp375 = *(&local4);
frost$core$Int64$wrapper* $tmp376;
$tmp376 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp376->value = $tmp375;
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp373, ((frost$core$Object*) $tmp376));
frost$core$String* $tmp378 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp377, &$s379);
frost$core$String* $tmp380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp378, &$s381);
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp380, &$s383);
frost$core$String* $tmp384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, &$s385);
frost$core$String* $tmp386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp384, &$s387);
frost$core$String* $tmp388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp386, &$s389);
frost$core$String* $tmp390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp388, &$s391);
frost$core$String* $tmp392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp390, &$s393);
frost$core$String* $tmp394 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp392, &$s395);
frost$core$RegularExpression$init$frost$core$String($tmp363, $tmp394);
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$RegularExpression* $tmp396 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local9) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// line 328
frost$core$RegularExpression* $tmp397 = *(&local9);
frost$core$MutableMethod* $tmp398 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp397, $tmp398);
frost$core$RegularExpression* $tmp399 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp400 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp401 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$MutableMethod* $tmp402 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local6) = ((frost$core$MutableMethod*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$RegularExpression* $tmp403 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp404 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp405 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp406 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$MutableString* local4 = NULL;
// line 332
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp408 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp408, &$s409);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp408, &$s410);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// line 333
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp411 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp411, &$s412);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp411, &$s413);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// line 335
*(&local0) = ((frost$collections$Array*) NULL);
// line 336
frost$core$Int64 $tmp414 = frost$core$MutableString$get_byteLength$R$frost$core$Int64(param1);
frost$core$Int64 $tmp415 = (frost$core$Int64) {0};
frost$core$Bit $tmp416 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block1; else goto block3;
block1:;
// line 337
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp418 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$collections$Array* $tmp419 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local0) = $tmp418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
goto block2;
block3:;
// line 1
// line 339
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp420 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
$fn422 $tmp421 = ($fn422) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp423 = $tmp421(((frost$core$Object*) param1));
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp424 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp424, &$s425);
frost$collections$Array* $tmp426 = frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT($tmp423, $tmp424);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp420, ((frost$collections$CollectionView*) $tmp426));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$collections$Array* $tmp427 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local0) = $tmp420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
goto block2;
block2:;
// line 341
frost$core$Int64 $tmp428 = (frost$core$Int64) {0};
frost$collections$Array* $tmp429 = *(&local0);
ITable* $tmp430 = ((frost$collections$CollectionView*) $tmp429)->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[0];
frost$core$Int64 $tmp433 = $tmp431(((frost$collections$CollectionView*) $tmp429));
frost$core$Bit $tmp434 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp435 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp428, $tmp433, $tmp434);
frost$core$Int64 $tmp436 = $tmp435.min;
*(&local1) = $tmp436;
frost$core$Int64 $tmp437 = $tmp435.max;
frost$core$Bit $tmp438 = $tmp435.inclusive;
bool $tmp439 = $tmp438.value;
frost$core$Int64 $tmp440 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp441 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp440);
if ($tmp439) goto block7; else goto block8;
block7:;
int64_t $tmp442 = $tmp436.value;
int64_t $tmp443 = $tmp437.value;
bool $tmp444 = $tmp442 <= $tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block4; else goto block5;
block8:;
int64_t $tmp447 = $tmp436.value;
int64_t $tmp448 = $tmp437.value;
bool $tmp449 = $tmp447 < $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block4; else goto block5;
block4:;
// line 342
frost$collections$Array* $tmp452 = *(&local0);
frost$core$Int64 $tmp453 = *(&local1);
frost$core$Object* $tmp454 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp452, $tmp453);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp454)));
frost$core$String* $tmp455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local2) = ((frost$core$String*) $tmp454);
frost$core$Frost$unref$frost$core$Object$Q($tmp454);
// line 343
org$frostlang$frostc$frostdoc$Protector** $tmp456 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp457 = *$tmp456;
frost$core$String* $tmp458 = *(&local2);
$fn460 $tmp459 = ($fn460) $tmp457->$class->vtable[3];
frost$core$String* $tmp461 = $tmp459($tmp457, $tmp458);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$String* $tmp462 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local3) = $tmp461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// line 344
frost$core$String* $tmp463 = *(&local3);
frost$core$Bit $tmp464 = frost$core$Bit$init$builtin_bit($tmp463 != NULL);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block9; else goto block11;
block9:;
// line 345
frost$collections$Array* $tmp466 = *(&local0);
frost$core$Int64 $tmp467 = *(&local1);
frost$core$String* $tmp468 = *(&local3);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp466, $tmp467, ((frost$core$Object*) $tmp468));
goto block10;
block11:;
// line 1
// line 348
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp469 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp470 = *(&local2);
frost$core$MutableString$init$frost$core$String($tmp469, $tmp470);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
frost$core$MutableString* $tmp471 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local4) = $tmp469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// line 349
frost$core$MutableString* $tmp472 = *(&local4);
$fn474 $tmp473 = ($fn474) param0->$class->vtable[22];
$tmp473(param0, $tmp472);
// line 350
frost$collections$Array* $tmp475 = *(&local0);
frost$core$Int64 $tmp476 = *(&local1);
frost$core$MutableString* $tmp477 = *(&local4);
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s479, ((frost$core$Object*) $tmp477));
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s481);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp475, $tmp476, ((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$MutableString* $tmp482 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local4) = ((frost$core$MutableString*) NULL);
goto block10;
block10:;
frost$core$String* $tmp483 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp484 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block6:;
frost$core$Int64 $tmp485 = *(&local1);
int64_t $tmp486 = $tmp437.value;
int64_t $tmp487 = $tmp485.value;
int64_t $tmp488 = $tmp486 - $tmp487;
frost$core$Int64 $tmp489 = (frost$core$Int64) {$tmp488};
frost$core$UInt64 $tmp490 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp489);
if ($tmp439) goto block13; else goto block14;
block13:;
uint64_t $tmp491 = $tmp490.value;
uint64_t $tmp492 = $tmp441.value;
bool $tmp493 = $tmp491 >= $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block12; else goto block5;
block14:;
uint64_t $tmp496 = $tmp490.value;
uint64_t $tmp497 = $tmp441.value;
bool $tmp498 = $tmp496 > $tmp497;
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block12; else goto block5;
block12:;
int64_t $tmp501 = $tmp485.value;
int64_t $tmp502 = $tmp440.value;
int64_t $tmp503 = $tmp501 + $tmp502;
frost$core$Int64 $tmp504 = (frost$core$Int64) {$tmp503};
*(&local1) = $tmp504;
goto block4;
block5:;
// line 353
frost$core$Bit $tmp505 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp506 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp505);
frost$collections$Array* $tmp507 = *(&local0);
ITable* $tmp508 = ((frost$collections$CollectionView*) $tmp507)->$class->itable;
while ($tmp508->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp508 = $tmp508->next;
}
$fn510 $tmp509 = $tmp508->methods[2];
frost$core$String* $tmp511 = $tmp509(((frost$collections$CollectionView*) $tmp507), &$s512);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp506, $tmp511);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$collections$Array* $tmp513 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 357
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp514 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp514, &$s515);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp514, &$s516);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// line 358
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp517 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp517, &$s518);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$RegularExpression* $tmp519 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local0) = $tmp517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// line 359
frost$core$RegularExpression* $tmp520 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure6));
org$frostlang$frostc$frostdoc$Markdown$_Closure6* $tmp521 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown($tmp521, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp523 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp523, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp521));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp520, $tmp523);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$RegularExpression* $tmp524 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 370
org$frostlang$frostc$frostdoc$Protector** $tmp525 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp526 = *$tmp525;
frost$collections$HashMap** $tmp527 = &$tmp526->decodeMap;
frost$collections$HashMap* $tmp528 = *$tmp527;
ITable* $tmp529 = ((frost$collections$MapView*) $tmp528)->$class->itable;
while ($tmp529->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp529 = $tmp529->next;
}
$fn531 $tmp530 = $tmp529->methods[3];
frost$collections$Iterator* $tmp532 = $tmp530(((frost$collections$MapView*) $tmp528));
goto block1;
block1:;
ITable* $tmp533 = $tmp532->$class->itable;
while ($tmp533->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp533 = $tmp533->next;
}
$fn535 $tmp534 = $tmp533->methods[0];
frost$core$Bit $tmp536 = $tmp534($tmp532);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp538 = $tmp532->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[1];
frost$core$Object* $tmp541 = $tmp539($tmp532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp541)));
frost$core$String* $tmp542 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local0) = ((frost$core$String*) $tmp541);
// line 371
org$frostlang$frostc$frostdoc$Protector** $tmp543 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp544 = *$tmp543;
frost$core$String* $tmp545 = *(&local0);
$fn547 $tmp546 = ($fn547) $tmp544->$class->vtable[3];
frost$core$String* $tmp548 = $tmp546($tmp544, $tmp545);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$String* $tmp549 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local1) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// line 372
frost$core$String* $tmp550 = *(&local0);
frost$core$String* $tmp551 = *(&local1);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, $tmp550, $tmp551);
frost$core$String* $tmp552 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp541);
frost$core$String* $tmp553 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Real64 local2;
// line 377
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp554 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp554);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$MutableString* $tmp555 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local0) = $tmp554;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// line 378
ITable* $tmp556 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp556->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp556 = $tmp556->next;
}
$fn558 $tmp557 = $tmp556->methods[0];
frost$collections$Iterator* $tmp559 = $tmp557(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp560 = $tmp559->$class->itable;
while ($tmp560->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp560 = $tmp560->next;
}
$fn562 $tmp561 = $tmp560->methods[0];
frost$core$Bit $tmp563 = $tmp561($tmp559);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block3; else goto block2;
block2:;
ITable* $tmp565 = $tmp559->$class->itable;
while ($tmp565->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp565 = $tmp565->next;
}
$fn567 $tmp566 = $tmp565->methods[1];
frost$core$Object* $tmp568 = $tmp566($tmp559);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp568)->value;
// line 380
frost$math$Random** $tmp569 = &param0->random;
frost$math$Random* $tmp570 = *$tmp569;
ITable* $tmp571 = $tmp570->$class->itable;
while ($tmp571->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp571 = $tmp571->next;
}
$fn573 $tmp572 = $tmp571->methods[5];
frost$core$Real64 $tmp574 = $tmp572($tmp570);
*(&local2) = $tmp574;
// line 381
frost$core$Real64 $tmp575 = *(&local2);
frost$core$Real64 $tmp576 = (frost$core$Real64) {0.45};
double $tmp577 = $tmp575.value;
double $tmp578 = $tmp576.value;
bool $tmp579 = $tmp577 < $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block4; else goto block6;
block4:;
// line 382
frost$core$MutableString* $tmp582 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp582, &$s583);
// line 383
frost$core$MutableString* $tmp584 = *(&local0);
frost$core$Char32 $tmp585 = *(&local1);
frost$core$Int32 $tmp586 = frost$core$Char32$get_asInt32$R$frost$core$Int32($tmp585);
frost$core$Int32$wrapper* $tmp587;
$tmp587 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp587->value = $tmp586;
frost$core$MutableString$append$frost$core$Object($tmp584, ((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
// line 384
frost$core$MutableString* $tmp588 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp588, &$s589);
goto block5;
block6:;
// line 386
frost$core$Real64 $tmp590 = *(&local2);
frost$core$Real64 $tmp591 = (frost$core$Real64) {0.9};
double $tmp592 = $tmp590.value;
double $tmp593 = $tmp591.value;
bool $tmp594 = $tmp592 < $tmp593;
frost$core$Bit $tmp595 = (frost$core$Bit) {$tmp594};
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block7; else goto block9;
block7:;
// line 387
frost$core$MutableString* $tmp597 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp597, &$s598);
// line 388
frost$core$MutableString* $tmp599 = *(&local0);
frost$core$Char32 $tmp600 = *(&local1);
frost$core$Int32 $tmp601 = frost$core$Char32$get_asInt32$R$frost$core$Int32($tmp600);
frost$core$String* $tmp602 = frost$core$Int32$format$frost$core$String$R$frost$core$String($tmp601, &$s603);
frost$core$MutableString$append$frost$core$String($tmp599, $tmp602);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
// line 389
frost$core$MutableString* $tmp604 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp604, &$s605);
goto block8;
block9:;
// line 1
// line 392
frost$core$MutableString* $tmp606 = *(&local0);
frost$core$Char32 $tmp607 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp606, $tmp607);
goto block8;
block8:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp568);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// line 395
frost$core$MutableString* $tmp608 = *(&local0);
$fn610 $tmp609 = ($fn610) ((frost$core$Object*) $tmp608)->$class->vtable[0];
frost$core$String* $tmp611 = $tmp609(((frost$core$Object*) $tmp608));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$MutableString* $tmp612 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp611;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 399
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp613 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp614 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s615, &$s616);
frost$core$String* $tmp617 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp614, &$s618);
frost$core$String* $tmp619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp617, &$s620);
frost$core$String* $tmp621 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp619, &$s622);
frost$core$String* $tmp623 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp621, &$s624);
frost$core$String* $tmp625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp623, &$s626);
frost$core$Int64 $tmp627 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp613, $tmp625, $tmp627);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$RegularExpression* $tmp628 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local0) = $tmp613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// line 408
frost$core$RegularExpression* $tmp629 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure9));
org$frostlang$frostc$frostdoc$Markdown$_Closure9* $tmp630 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown($tmp630, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp632 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp632, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp630));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp629, $tmp632);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$RegularExpression* $tmp633 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* param0) {

frost$core$String* local0 = NULL;
frost$core$Int64 local1;
frost$core$MutableString* local2 = NULL;
// line 423
frost$core$Int64 $tmp634 = (frost$core$Int64) {1};
ITable* $tmp635 = param0->$class->itable;
while ($tmp635->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp635 = $tmp635->next;
}
$fn637 $tmp636 = $tmp635->methods[0];
frost$core$Object* $tmp638 = $tmp636(param0, $tmp634);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp638)));
frost$core$String* $tmp639 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local0) = ((frost$core$String*) $tmp638);
frost$core$Frost$unref$frost$core$Object$Q($tmp638);
// line 424
frost$core$String* $tmp640 = *(&local0);
frost$core$Int64 $tmp641 = frost$core$String$get_length$R$frost$core$Int64($tmp640);
*(&local1) = $tmp641;
// line 425
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp642 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp643 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp642, $tmp643);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$MutableString* $tmp644 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local2) = $tmp642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// line 426
goto block1;
block1:;
// line 427
frost$core$MutableString* $tmp645 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp645, &$s646);
// line 428
frost$core$Int64 $tmp647 = *(&local1);
frost$core$Int64 $tmp648 = (frost$core$Int64) {1};
int64_t $tmp649 = $tmp647.value;
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649 + $tmp650;
frost$core$Int64 $tmp652 = (frost$core$Int64) {$tmp651};
*(&local1) = $tmp652;
goto block2;
block2:;
frost$core$Int64 $tmp653 = *(&local1);
frost$core$Int64 $tmp654 = (frost$core$Int64) {4};
frost$core$Int64 $tmp655 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp653, $tmp654);
frost$core$Int64 $tmp656 = (frost$core$Int64) {0};
int64_t $tmp657 = $tmp655.value;
int64_t $tmp658 = $tmp656.value;
bool $tmp659 = $tmp657 != $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block1; else goto block3;
block3:;
// line 431
frost$core$MutableString* $tmp662 = *(&local2);
$fn664 $tmp663 = ($fn664) ((frost$core$Object*) $tmp662)->$class->vtable[0];
frost$core$String* $tmp665 = $tmp663(((frost$core$Object*) $tmp662));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$core$MutableString* $tmp666 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp667 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local0) = ((frost$core$String*) NULL);
return $tmp665;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 422
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp668 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp668, &$s669);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp671 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp671, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Immutable*) NULL));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp668, ((frost$core$MutableMethod*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

// line 437
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp672 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp672, &$s673);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param0, $tmp672, &$s674);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* local1 = NULL;
// line 493
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp675 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s677, &$s678);
frost$core$String* $tmp679 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp676, &$s680);
frost$core$String* $tmp681 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp679, &$s682);
frost$core$String* $tmp683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp681, &$s684);
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp683, &$s686);
frost$core$Int64 $tmp687 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp675, $tmp685, $tmp687);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$RegularExpression* $tmp688 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local0) = $tmp675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// line 501
frost$core$RegularExpression* $tmp689 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp690 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown($tmp690, param0);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp691 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local1) = $tmp690;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure13));
org$frostlang$frostc$frostdoc$Markdown$_Closure13* $tmp692 = (org$frostlang$frostc$frostdoc$Markdown$_Closure13*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure13$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp693 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure13$init$org$frostlang$frostc$frostdoc$Markdown$CodeReplacer($tmp692, $tmp693);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp695 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp695, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure13$$anonymous12$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp692));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp689, $tmp695);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp696 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$RegularExpression* $tmp697 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, org$frostlang$frostc$parser$Parser* param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$Pair* local2 = NULL;
frost$core$MutableString* local3 = NULL;
// line 505
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp698 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp698, &$s699);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$MutableString* $tmp700 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local0) = $tmp698;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// line 506
frost$core$Int64 $tmp701 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp702 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp701);
*(&local1) = $tmp702;
// line 507
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp703 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp704 = *$tmp703;
frost$collections$Array** $tmp705 = &$tmp704->tokens;
frost$collections$Array* $tmp706 = *$tmp705;
ITable* $tmp707 = ((frost$collections$Iterable*) $tmp706)->$class->itable;
while ($tmp707->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp707 = $tmp707->next;
}
$fn709 $tmp708 = $tmp707->methods[0];
frost$collections$Iterator* $tmp710 = $tmp708(((frost$collections$Iterable*) $tmp706));
goto block1;
block1:;
ITable* $tmp711 = $tmp710->$class->itable;
while ($tmp711->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp711 = $tmp711->next;
}
$fn713 $tmp712 = $tmp711->methods[0];
frost$core$Bit $tmp714 = $tmp712($tmp710);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp716 = $tmp710->$class->itable;
while ($tmp716->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp716 = $tmp716->next;
}
$fn718 $tmp717 = $tmp716->methods[1];
frost$core$Object* $tmp719 = $tmp717($tmp710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp719)));
org$frostlang$frostc$Pair* $tmp720 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp719);
// line 508
org$frostlang$frostc$Pair* $tmp721 = *(&local2);
frost$core$Object** $tmp722 = &$tmp721->second;
frost$core$Object* $tmp723 = *$tmp722;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp724;
$tmp724 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp724->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp723)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp725 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp726;
$tmp726 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp726->value = $tmp725;
ITable* $tmp727 = ((frost$core$Equatable*) $tmp724)->$class->itable;
while ($tmp727->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp727 = $tmp727->next;
}
$fn729 $tmp728 = $tmp727->methods[1];
frost$core$Bit $tmp730 = $tmp728(((frost$core$Equatable*) $tmp724), ((frost$core$Equatable*) $tmp726));
bool $tmp731 = $tmp730.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp726)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp724)));
if ($tmp731) goto block6; else goto block5;
block6:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp732 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp733;
$tmp733 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp733->value = $tmp732;
frost$core$Int64 $tmp734 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp735 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp734);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp736;
$tmp736 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp736->value = $tmp735;
ITable* $tmp737 = ((frost$core$Equatable*) $tmp733)->$class->itable;
while ($tmp737->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp737 = $tmp737->next;
}
$fn739 $tmp738 = $tmp737->methods[1];
frost$core$Bit $tmp740 = $tmp738(((frost$core$Equatable*) $tmp733), ((frost$core$Equatable*) $tmp736));
bool $tmp741 = $tmp740.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp736)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp733)));
if ($tmp741) goto block4; else goto block5;
block4:;
// line 509
frost$core$MutableString* $tmp742 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp742, &$s743);
goto block5;
block5:;
// line 511
org$frostlang$frostc$Pair* $tmp744 = *(&local2);
frost$core$Object** $tmp745 = &$tmp744->second;
frost$core$Object* $tmp746 = *$tmp745;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp747;
$tmp747 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp747->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp746)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp748 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp749;
$tmp749 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp749->value = $tmp748;
ITable* $tmp750 = ((frost$core$Equatable*) $tmp747)->$class->itable;
while ($tmp750->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp750 = $tmp750->next;
}
$fn752 $tmp751 = $tmp750->methods[1];
frost$core$Bit $tmp753 = $tmp751(((frost$core$Equatable*) $tmp747), ((frost$core$Equatable*) $tmp749));
bool $tmp754 = $tmp753.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp749)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp747)));
if ($tmp754) goto block7; else goto block8;
block7:;
// line 512
org$frostlang$frostc$Pair* $tmp755 = *(&local2);
frost$core$Object** $tmp756 = &$tmp755->second;
frost$core$Object* $tmp757 = *$tmp756;
*(&local1) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp757)->value;
// line 513
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp758 = *(&local1);
frost$core$Int64 $tmp759 = $tmp758.$rawValue;
frost$core$Int64 $tmp760 = (frost$core$Int64) {0};
frost$core$Bit $tmp761 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp760);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block10; else goto block11;
block10:;
goto block9;
block11:;
frost$core$Int64 $tmp763 = (frost$core$Int64) {1};
frost$core$Bit $tmp764 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp763);
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp766 = (frost$core$Int64) {2};
frost$core$Bit $tmp767 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp766);
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block12; else goto block14;
block12:;
// line 518
frost$core$MutableString* $tmp769 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp769, &$s770);
goto block9;
block14:;
frost$core$Int64 $tmp771 = (frost$core$Int64) {3};
frost$core$Bit $tmp772 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp771);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block15; else goto block16;
block15:;
// line 521
frost$core$MutableString* $tmp774 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp774, &$s775);
goto block9;
block16:;
frost$core$Int64 $tmp776 = (frost$core$Int64) {4};
frost$core$Bit $tmp777 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp776);
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block17; else goto block18;
block17:;
// line 524
frost$core$MutableString* $tmp779 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp779, &$s780);
goto block9;
block18:;
frost$core$Int64 $tmp781 = (frost$core$Int64) {5};
frost$core$Bit $tmp782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp781);
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block19; else goto block20;
block19:;
// line 527
frost$core$MutableString* $tmp784 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp784, &$s785);
goto block9;
block20:;
frost$core$Int64 $tmp786 = (frost$core$Int64) {6};
frost$core$Bit $tmp787 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp786);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block21; else goto block22;
block21:;
// line 530
frost$core$MutableString* $tmp789 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp789, &$s790);
goto block9;
block22:;
frost$core$Int64 $tmp791 = (frost$core$Int64) {7};
frost$core$Bit $tmp792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp791);
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block23; else goto block24;
block23:;
// line 533
frost$core$MutableString* $tmp794 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp794, &$s795);
goto block9;
block24:;
frost$core$Int64 $tmp796 = (frost$core$Int64) {8};
frost$core$Bit $tmp797 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp796);
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block25; else goto block26;
block25:;
// line 536
frost$core$MutableString* $tmp799 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp799, &$s800);
goto block9;
block26:;
frost$core$Int64 $tmp801 = (frost$core$Int64) {9};
frost$core$Bit $tmp802 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp801);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block27; else goto block28;
block27:;
// line 539
frost$core$MutableString* $tmp804 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp804, &$s805);
goto block9;
block28:;
frost$core$Int64 $tmp806 = (frost$core$Int64) {10};
frost$core$Bit $tmp807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp806);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block29; else goto block30;
block29:;
// line 542
frost$core$MutableString* $tmp809 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp809, &$s810);
goto block9;
block30:;
frost$core$Int64 $tmp811 = (frost$core$Int64) {11};
frost$core$Bit $tmp812 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp811);
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block31; else goto block32;
block31:;
// line 545
frost$core$MutableString* $tmp814 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp814, &$s815);
goto block9;
block32:;
frost$core$Int64 $tmp816 = (frost$core$Int64) {12};
frost$core$Bit $tmp817 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp816);
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block33; else goto block34;
block33:;
// line 548
frost$core$MutableString* $tmp819 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp819, &$s820);
goto block9;
block34:;
// line 551
frost$core$Int64 $tmp821 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s822, $tmp821);
abort(); // unreachable
block9:;
goto block8;
block8:;
// line 555
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp823 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp824 = *(&local2);
frost$core$Object** $tmp825 = &$tmp824->first;
frost$core$Object* $tmp826 = *$tmp825;
frost$core$String* $tmp827 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param1, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp826)->value);
frost$core$MutableString$init$frost$core$String($tmp823, $tmp827);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$MutableString* $tmp828 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local3) = $tmp823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// line 556
frost$core$MutableString* $tmp829 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp829, &$s830, &$s831);
// line 557
frost$core$MutableString* $tmp832 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp832, &$s833, &$s834);
// line 558
frost$core$MutableString* $tmp835 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp835, &$s836, &$s837);
// line 559
frost$core$MutableString* $tmp838 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp839 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp840 = *$tmp839;
$fn842 $tmp841 = ($fn842) $tmp840->$class->vtable[2];
frost$core$String* $tmp843 = $tmp841($tmp840, &$s844);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp838, &$s845, $tmp843);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// line 560
frost$core$MutableString* $tmp846 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp847 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp848 = *$tmp847;
$fn850 $tmp849 = ($fn850) $tmp848->$class->vtable[2];
frost$core$String* $tmp851 = $tmp849($tmp848, &$s852);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp846, &$s853, $tmp851);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// line 561
frost$core$MutableString* $tmp854 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp855 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp856 = *$tmp855;
$fn858 $tmp857 = ($fn858) $tmp856->$class->vtable[2];
frost$core$String* $tmp859 = $tmp857($tmp856, &$s860);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp854, &$s861, $tmp859);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// line 562
frost$core$MutableString* $tmp862 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp863 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp864 = *$tmp863;
$fn866 $tmp865 = ($fn866) $tmp864->$class->vtable[2];
frost$core$String* $tmp867 = $tmp865($tmp864, &$s868);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp862, &$s869, $tmp867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// line 563
frost$core$MutableString* $tmp870 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp871 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp872 = *$tmp871;
$fn874 $tmp873 = ($fn874) $tmp872->$class->vtable[2];
frost$core$String* $tmp875 = $tmp873($tmp872, &$s876);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp870, &$s877, $tmp875);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
// line 564
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp878 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp879;
$tmp879 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp879->value = $tmp878;
frost$core$Int64 $tmp880 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp881 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp880);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp882;
$tmp882 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp882->value = $tmp881;
ITable* $tmp883 = ((frost$core$Equatable*) $tmp879)->$class->itable;
while ($tmp883->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp883 = $tmp883->next;
}
$fn885 $tmp884 = $tmp883->methods[1];
frost$core$Bit $tmp886 = $tmp884(((frost$core$Equatable*) $tmp879), ((frost$core$Equatable*) $tmp882));
bool $tmp887 = $tmp886.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp882)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp879)));
if ($tmp887) goto block37; else goto block36;
block37:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp888 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp889;
$tmp889 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp889->value = $tmp888;
frost$core$Int64 $tmp890 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp891 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp890);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp892;
$tmp892 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp892->value = $tmp891;
ITable* $tmp893 = ((frost$core$Equatable*) $tmp889)->$class->itable;
while ($tmp893->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp893 = $tmp893->next;
}
$fn895 $tmp894 = $tmp893->methods[1];
frost$core$Bit $tmp896 = $tmp894(((frost$core$Equatable*) $tmp889), ((frost$core$Equatable*) $tmp892));
bool $tmp897 = $tmp896.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp892)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp889)));
if ($tmp897) goto block35; else goto block36;
block35:;
// line 566
frost$core$MutableString* $tmp898 = *(&local0);
org$frostlang$frostc$Pair* $tmp899 = *(&local2);
frost$core$Object** $tmp900 = &$tmp899->first;
frost$core$Object* $tmp901 = *$tmp900;
org$frostlang$frostc$parser$Token$Kind $tmp902 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp901)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp903;
$tmp903 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp903->value = $tmp902;
frost$core$String* $tmp904 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s905, ((frost$core$Object*) $tmp903));
frost$core$String* $tmp906 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp904, &$s907);
frost$core$MutableString$append$frost$core$String($tmp898, $tmp906);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
goto block36;
block36:;
// line 568
frost$core$MutableString* $tmp908 = *(&local0);
frost$core$MutableString* $tmp909 = *(&local3);
frost$core$MutableString$append$frost$core$Object($tmp908, ((frost$core$Object*) $tmp909));
// line 569
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp910 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp911;
$tmp911 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp911->value = $tmp910;
frost$core$Int64 $tmp912 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp913 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp912);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp914;
$tmp914 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp914->value = $tmp913;
ITable* $tmp915 = ((frost$core$Equatable*) $tmp911)->$class->itable;
while ($tmp915->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp915 = $tmp915->next;
}
$fn917 $tmp916 = $tmp915->methods[1];
frost$core$Bit $tmp918 = $tmp916(((frost$core$Equatable*) $tmp911), ((frost$core$Equatable*) $tmp914));
bool $tmp919 = $tmp918.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp914)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp911)));
if ($tmp919) goto block40; else goto block39;
block40:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp920 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp921;
$tmp921 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp921->value = $tmp920;
frost$core$Int64 $tmp922 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp923 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp922);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp924;
$tmp924 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp924->value = $tmp923;
ITable* $tmp925 = ((frost$core$Equatable*) $tmp921)->$class->itable;
while ($tmp925->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp925 = $tmp925->next;
}
$fn927 $tmp926 = $tmp925->methods[1];
frost$core$Bit $tmp928 = $tmp926(((frost$core$Equatable*) $tmp921), ((frost$core$Equatable*) $tmp924));
bool $tmp929 = $tmp928.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp924)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp921)));
if ($tmp929) goto block38; else goto block39;
block38:;
// line 571
frost$core$MutableString* $tmp930 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp930, &$s931);
goto block39;
block39:;
frost$core$MutableString* $tmp932 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp719);
org$frostlang$frostc$Pair* $tmp933 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// line 574
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp934 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp935;
$tmp935 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp935->value = $tmp934;
frost$core$Int64 $tmp936 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp937 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp936);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp938;
$tmp938 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp938->value = $tmp937;
ITable* $tmp939 = ((frost$core$Equatable*) $tmp935)->$class->itable;
while ($tmp939->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
frost$core$Bit $tmp942 = $tmp940(((frost$core$Equatable*) $tmp935), ((frost$core$Equatable*) $tmp938));
bool $tmp943 = $tmp942.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp938)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp935)));
if ($tmp943) goto block41; else goto block42;
block41:;
// line 575
frost$core$MutableString* $tmp944 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp944, &$s945);
goto block42;
block42:;
// line 577
frost$core$MutableString* $tmp946 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp946, &$s947);
// line 578
frost$core$MutableString* $tmp948 = *(&local0);
frost$core$String* $tmp949 = frost$core$MutableString$finish$R$frost$core$String($tmp948);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$MutableString* $tmp950 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp949;

}
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 582
frost$threads$MessageQueue** $tmp951 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp952 = *$tmp951;
frost$threads$MessageQueue$clear($tmp952);
// line 583
$fn954 $tmp953 = ($fn954) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp955 = $tmp953(((frost$core$Object*) param1));
frost$core$String* $tmp956 = frost$core$String$get_trimmed$R$frost$core$String($tmp955);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$String* $tmp957 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local0) = $tmp956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// line 584
org$frostlang$frostc$parser$Parser** $tmp958 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp959 = *$tmp958;
frost$io$File** $tmp960 = &param0->source;
frost$io$File* $tmp961 = *$tmp960;
frost$core$String* $tmp962 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp959, $tmp961, $tmp962);
// line 585
org$frostlang$frostc$parser$Parser** $tmp963 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp964 = *$tmp963;
org$frostlang$frostc$ASTNode* $tmp965 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp964);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
org$frostlang$frostc$ASTNode* $tmp966 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local1) = $tmp965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
// line 586
org$frostlang$frostc$ASTNode* $tmp967 = *(&local1);
frost$core$Bit $tmp968 = frost$core$Bit$init$builtin_bit($tmp967 != NULL);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block3; else goto block2;
block3:;
frost$threads$MessageQueue** $tmp970 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp971 = *$tmp970;
frost$core$Int64 $tmp972 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp971);
frost$core$Int64 $tmp973 = (frost$core$Int64) {0};
frost$core$Bit $tmp974 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp972, $tmp973);
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block1; else goto block2;
block1:;
// line 587
frost$core$Bit $tmp976 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp977 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp976);
org$frostlang$frostc$parser$Parser** $tmp978 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp979 = *$tmp978;
$fn981 $tmp980 = ($fn981) param0->$class->vtable[16];
frost$core$String* $tmp982 = $tmp980(param0, $tmp979);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp977, $tmp982);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// line 588
org$frostlang$frostc$ASTNode* $tmp983 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp984 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local0) = ((frost$core$String*) NULL);
return;
block2:;
// line 591
frost$threads$MessageQueue** $tmp985 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp986 = *$tmp985;
frost$threads$MessageQueue$clear($tmp986);
// line 592
org$frostlang$frostc$parser$Parser** $tmp987 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp988 = *$tmp987;
frost$io$File** $tmp989 = &param0->source;
frost$io$File* $tmp990 = *$tmp989;
frost$core$String* $tmp991 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp988, $tmp990, $tmp991);
// line 593
goto block4;
block4:;
org$frostlang$frostc$parser$Parser** $tmp992 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp993 = *$tmp992;
org$frostlang$frostc$parser$Token $tmp994 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp993);
org$frostlang$frostc$parser$Token$Kind $tmp995 = $tmp994.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp996;
$tmp996 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp996->value = $tmp995;
frost$core$Int64 $tmp997 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp998 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp997);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp999;
$tmp999 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp999->value = $tmp998;
ITable* $tmp1000 = ((frost$core$Equatable*) $tmp996)->$class->itable;
while ($tmp1000->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1000 = $tmp1000->next;
}
$fn1002 $tmp1001 = $tmp1000->methods[1];
frost$core$Bit $tmp1003 = $tmp1001(((frost$core$Equatable*) $tmp996), ((frost$core$Equatable*) $tmp999));
bool $tmp1004 = $tmp1003.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp999)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp996)));
if ($tmp1004) goto block7; else goto block6;
block7:;
frost$threads$MessageQueue** $tmp1005 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1006 = *$tmp1005;
frost$core$Int64 $tmp1007 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1006);
frost$core$Int64 $tmp1008 = (frost$core$Int64) {0};
frost$core$Bit $tmp1009 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1007, $tmp1008);
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block5; else goto block6;
block5:;
// line 594
org$frostlang$frostc$parser$Parser** $tmp1011 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1012 = *$tmp1011;
org$frostlang$frostc$ASTNode* $tmp1013 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q($tmp1012);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
goto block4;
block6:;
// line 596
frost$threads$MessageQueue** $tmp1014 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1015 = *$tmp1014;
frost$core$Int64 $tmp1016 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1015);
frost$core$Int64 $tmp1017 = (frost$core$Int64) {0};
frost$core$Bit $tmp1018 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1016, $tmp1017);
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block8; else goto block9;
block8:;
// line 597
frost$core$Bit $tmp1020 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1021 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1020);
org$frostlang$frostc$parser$Parser** $tmp1022 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1023 = *$tmp1022;
$fn1025 $tmp1024 = ($fn1025) param0->$class->vtable[16];
frost$core$String* $tmp1026 = $tmp1024(param0, $tmp1023);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1021, $tmp1026);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// line 598
org$frostlang$frostc$ASTNode* $tmp1027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1028 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local0) = ((frost$core$String*) NULL);
return;
block9:;
// line 601
frost$threads$MessageQueue** $tmp1029 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1030 = *$tmp1029;
frost$threads$MessageQueue$clear($tmp1030);
// line 602
org$frostlang$frostc$parser$Parser** $tmp1031 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1032 = *$tmp1031;
frost$io$File** $tmp1033 = &param0->source;
frost$io$File* $tmp1034 = *$tmp1033;
frost$core$String* $tmp1035 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1032, $tmp1034, $tmp1035);
// line 603
goto block10;
block10:;
org$frostlang$frostc$parser$Parser** $tmp1036 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1037 = *$tmp1036;
org$frostlang$frostc$parser$Token $tmp1038 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp1037);
org$frostlang$frostc$parser$Token$Kind $tmp1039 = $tmp1038.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1040;
$tmp1040 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1040->value = $tmp1039;
frost$core$Int64 $tmp1041 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1042 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1041);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1043;
$tmp1043 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1043->value = $tmp1042;
ITable* $tmp1044 = ((frost$core$Equatable*) $tmp1040)->$class->itable;
while ($tmp1044->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1044 = $tmp1044->next;
}
$fn1046 $tmp1045 = $tmp1044->methods[1];
frost$core$Bit $tmp1047 = $tmp1045(((frost$core$Equatable*) $tmp1040), ((frost$core$Equatable*) $tmp1043));
bool $tmp1048 = $tmp1047.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1043)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1040)));
if ($tmp1048) goto block13; else goto block12;
block13:;
frost$threads$MessageQueue** $tmp1049 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1050 = *$tmp1049;
frost$core$Int64 $tmp1051 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1050);
frost$core$Int64 $tmp1052 = (frost$core$Int64) {0};
frost$core$Bit $tmp1053 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1051, $tmp1052);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block11; else goto block12;
block11:;
// line 604
org$frostlang$frostc$parser$Parser** $tmp1055 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1056 = *$tmp1055;
org$frostlang$frostc$ASTNode* $tmp1057 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q($tmp1056);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
goto block10;
block12:;
// line 606
frost$threads$MessageQueue** $tmp1058 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1059 = *$tmp1058;
frost$core$Int64 $tmp1060 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1059);
frost$core$Int64 $tmp1061 = (frost$core$Int64) {0};
frost$core$Bit $tmp1062 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1060, $tmp1061);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block14; else goto block15;
block14:;
// line 607
frost$core$Bit $tmp1064 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1065 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1064);
org$frostlang$frostc$parser$Parser** $tmp1066 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1067 = *$tmp1066;
$fn1069 $tmp1068 = ($fn1069) param0->$class->vtable[16];
frost$core$String* $tmp1070 = $tmp1068(param0, $tmp1067);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1065, $tmp1070);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// line 608
org$frostlang$frostc$ASTNode* $tmp1071 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1072 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local0) = ((frost$core$String*) NULL);
return;
block15:;
// line 611
frost$threads$MessageQueue** $tmp1073 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1074 = *$tmp1073;
frost$threads$MessageQueue$clear($tmp1074);
// line 612
org$frostlang$frostc$parser$Parser** $tmp1075 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1076 = *$tmp1075;
frost$io$File** $tmp1077 = &param0->source;
frost$io$File* $tmp1078 = *$tmp1077;
frost$core$String* $tmp1079 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1076, $tmp1078, $tmp1079);
// line 613
goto block16;
block16:;
// line 614
org$frostlang$frostc$parser$Parser** $tmp1080 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1081 = *$tmp1080;
org$frostlang$frostc$parser$Token $tmp1082 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1081);
*(&local2) = $tmp1082;
// line 615
org$frostlang$frostc$parser$Token $tmp1083 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp1084 = $tmp1083.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1085;
$tmp1085 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1085->value = $tmp1084;
frost$core$Int64 $tmp1086 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1087 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1086);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1088;
$tmp1088 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1088->value = $tmp1087;
ITable* $tmp1089 = ((frost$core$Equatable*) $tmp1085)->$class->itable;
while ($tmp1089->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1089 = $tmp1089->next;
}
$fn1091 $tmp1090 = $tmp1089->methods[0];
frost$core$Bit $tmp1092 = $tmp1090(((frost$core$Equatable*) $tmp1085), ((frost$core$Equatable*) $tmp1088));
bool $tmp1093 = $tmp1092.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1088)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1085)));
if ($tmp1093) goto block18; else goto block19;
block18:;
// line 616
goto block17;
block19:;
goto block16;
block17:;
// line 619
frost$core$Bit $tmp1094 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1095 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1094);
org$frostlang$frostc$parser$Parser** $tmp1096 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1097 = *$tmp1096;
$fn1099 $tmp1098 = ($fn1099) param0->$class->vtable[16];
frost$core$String* $tmp1100 = $tmp1098(param0, $tmp1097);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1095, $tmp1100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
org$frostlang$frostc$ASTNode* $tmp1101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 625
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1103 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1103, &$s1104);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1103, &$s1105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// line 626
$fn1107 $tmp1106 = ($fn1107) param0->$class->vtable[17];
$tmp1106(param0, param1);
// line 627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s1108, &$s1109);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Int64 local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
// line 631
frost$core$Int64 $tmp1110 = (frost$core$Int64) {4};
frost$core$Int64 $tmp1111 = (frost$core$Int64) {1};
int64_t $tmp1112 = $tmp1110.value;
int64_t $tmp1113 = $tmp1111.value;
int64_t $tmp1114 = $tmp1112 - $tmp1113;
frost$core$Int64 $tmp1115 = (frost$core$Int64) {$tmp1114};
*(&local0) = $tmp1115;
// line 633
frost$core$Int64 $tmp1116 = *(&local0);
frost$core$Int64$wrapper* $tmp1117;
$tmp1117 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1117->value = $tmp1116;
frost$core$String* $tmp1118 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1119, ((frost$core$Object*) $tmp1117));
frost$core$String* $tmp1120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1118, &$s1121);
frost$core$String* $tmp1122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1120, &$s1123);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$String* $tmp1124 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
*(&local1) = $tmp1122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
// line 656
frost$core$Int64* $tmp1125 = &param0->listLevel;
frost$core$Int64 $tmp1126 = *$tmp1125;
frost$core$Int64 $tmp1127 = (frost$core$Int64) {0};
int64_t $tmp1128 = $tmp1126.value;
int64_t $tmp1129 = $tmp1127.value;
bool $tmp1130 = $tmp1128 > $tmp1129;
frost$core$Bit $tmp1131 = (frost$core$Bit) {$tmp1130};
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block1; else goto block3;
block1:;
// line 657
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1133 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1134 = *(&local1);
frost$core$String* $tmp1135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1136, $tmp1134);
frost$core$String* $tmp1137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1135, &$s1138);
frost$core$RegularExpression$init$frost$core$String($tmp1133, $tmp1137);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$RegularExpression* $tmp1139 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local2) = $tmp1133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
// line 658
frost$core$RegularExpression* $tmp1140 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure15));
org$frostlang$frostc$frostdoc$Markdown$_Closure15* $tmp1141 = (org$frostlang$frostc$frostdoc$Markdown$_Closure15*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure15$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure15$init$org$frostlang$frostc$frostdoc$Markdown($tmp1141, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1143 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1143, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure15$$anonymous14$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1141));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1140, $tmp1143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$RegularExpression* $tmp1144 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 684
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1145 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1146 = *(&local1);
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1148, $tmp1146);
frost$core$RegularExpression$init$frost$core$String($tmp1145, $tmp1147);
*(&local3) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$RegularExpression* $tmp1149 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local3) = $tmp1145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
// line 685
frost$core$RegularExpression* $tmp1150 = *(&local3);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure17));
org$frostlang$frostc$frostdoc$Markdown$_Closure17* $tmp1151 = (org$frostlang$frostc$frostdoc$Markdown$_Closure17*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure17$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure17$init$org$frostlang$frostc$frostdoc$Markdown($tmp1151, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1153 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1153, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure17$$anonymous16$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1151));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1150, $tmp1153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$RegularExpression* $tmp1154 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block2;
block2:;
frost$core$String* $tmp1155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// line 726
frost$core$Int64* $tmp1156 = &param0->listLevel;
frost$core$Int64 $tmp1157 = *$tmp1156;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {1};
int64_t $tmp1159 = $tmp1157.value;
int64_t $tmp1160 = $tmp1158.value;
int64_t $tmp1161 = $tmp1159 + $tmp1160;
frost$core$Int64 $tmp1162 = (frost$core$Int64) {$tmp1161};
frost$core$Int64* $tmp1163 = &param0->listLevel;
*$tmp1163 = $tmp1162;
// line 729
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1164 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1164, &$s1165);
frost$core$String* $tmp1166 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(param1, $tmp1164, &$s1167);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$String* $tmp1168 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local0) = $tmp1166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// line 731
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1169 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1171, &$s1172);
frost$core$String* $tmp1173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1170, &$s1174);
frost$core$Int64 $tmp1175 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1169, $tmp1173, $tmp1175);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$RegularExpression* $tmp1176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local1) = $tmp1169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
// line 736
frost$core$String* $tmp1177 = *(&local0);
frost$core$RegularExpression* $tmp1178 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure19));
org$frostlang$frostc$frostdoc$Markdown$_Closure19* $tmp1179 = (org$frostlang$frostc$frostdoc$Markdown$_Closure19*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure19$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure19$init$org$frostlang$frostc$frostdoc$Markdown($tmp1179, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1181 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1181, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure19$$anonymous18$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1179));
frost$core$String* $tmp1182 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String($tmp1177, $tmp1178, $tmp1181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$String* $tmp1183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
*(&local0) = $tmp1182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
// line 753
frost$core$Int64* $tmp1184 = &param0->listLevel;
frost$core$Int64 $tmp1185 = *$tmp1184;
frost$core$Int64 $tmp1186 = (frost$core$Int64) {1};
int64_t $tmp1187 = $tmp1185.value;
int64_t $tmp1188 = $tmp1186.value;
int64_t $tmp1189 = $tmp1187 - $tmp1188;
frost$core$Int64 $tmp1190 = (frost$core$Int64) {$tmp1189};
frost$core$Int64* $tmp1191 = &param0->listLevel;
*$tmp1191 = $tmp1190;
// line 754
frost$core$String* $tmp1192 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$RegularExpression* $tmp1193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1194 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1192;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

// line 759
frost$core$Bit $tmp1195 = frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(param0, &$s1196);
return $tmp1195;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
// line 764
frost$core$Bit $tmp1197 = frost$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1197;
goto block3;
block2:;
frost$core$Bit $tmp1199 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s1200);
*(&local0) = $tmp1199;
goto block3;
block3:;
frost$core$Bit $tmp1201 = *(&local0);
return $tmp1201;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 769
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1202 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1202, &$s1203);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure21));
org$frostlang$frostc$frostdoc$Markdown$_Closure21* $tmp1204 = (org$frostlang$frostc$frostdoc$Markdown$_Closure21*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure21$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure21$init$org$frostlang$frostc$frostdoc$Markdown($tmp1204, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1206 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1206, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure21$$anonymous20$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1204));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1202, $tmp1206);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
// line 774
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1207 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1207, &$s1208);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure23));
org$frostlang$frostc$frostdoc$Markdown$_Closure23* $tmp1209 = (org$frostlang$frostc$frostdoc$Markdown$_Closure23*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure23$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure23$init$org$frostlang$frostc$frostdoc$Markdown($tmp1209, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1211 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1211, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure23$$anonymous22$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1209));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1207, $tmp1211);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
// line 781
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1212 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int64 $tmp1213 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1212, &$s1214, $tmp1213);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$RegularExpression* $tmp1215 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local0) = $tmp1212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
// line 782
frost$core$RegularExpression* $tmp1216 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure25));
org$frostlang$frostc$frostdoc$Markdown$_Closure25* $tmp1217 = (org$frostlang$frostc$frostdoc$Markdown$_Closure25*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure25$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure25$init$org$frostlang$frostc$frostdoc$Markdown($tmp1217, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1219 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1219, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure25$$anonymous24$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1217));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1216, $tmp1219);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
frost$core$RegularExpression* $tmp1220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 793
$fn1222 $tmp1221 = ($fn1222) param0->$class->vtable[24];
$tmp1221(param0, param1);
// line 794
$fn1224 $tmp1223 = ($fn1224) param0->$class->vtable[29];
$tmp1223(param0, param1);
// line 795
$fn1226 $tmp1225 = ($fn1226) param0->$class->vtable[3];
$tmp1225(param0, param1);
// line 797
$fn1228 $tmp1227 = ($fn1228) param0->$class->vtable[25];
$tmp1227(param0, param1);
// line 798
$fn1230 $tmp1229 = ($fn1230) param0->$class->vtable[26];
$tmp1229(param0, param1);
// line 799
$fn1232 $tmp1231 = ($fn1232) param0->$class->vtable[10];
$tmp1231(param0, param1);
// line 805
$fn1234 $tmp1233 = ($fn1234) param0->$class->vtable[24];
$tmp1233(param0, param1);
// line 807
$fn1236 $tmp1235 = ($fn1236) param0->$class->vtable[28];
$tmp1235(param0, param1);
// line 808
$fn1238 $tmp1237 = ($fn1238) param0->$class->vtable[27];
$tmp1237(param0, param1);
// line 810
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1239 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1239, &$s1240);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1239, &$s1241);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String(frost$core$Int64 param0) {

// line 820
frost$core$Int64 $tmp1242 = (frost$core$Int64) {0};
frost$core$Bit $tmp1243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param0, $tmp1242);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block1; else goto block3;
block1:;
// line 821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1245));
return &$s1246;
block3:;
// line 1
// line 824
frost$core$Int64 $tmp1247 = (frost$core$Int64) {1};
int64_t $tmp1248 = param0.value;
int64_t $tmp1249 = $tmp1247.value;
int64_t $tmp1250 = $tmp1248 - $tmp1249;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {$tmp1250};
frost$core$String* $tmp1252 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1251);
frost$core$String* $tmp1253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1254, $tmp1252);
frost$core$String* $tmp1255 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1253, &$s1256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
return $tmp1255;
block2:;
goto block4;
block4:;

}
frost$collections$ListView* org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$String$Index local4;
// line 829
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1257 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1257);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$collections$Array* $tmp1258 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local0) = $tmp1257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
// line 830
frost$core$Int64 $tmp1259 = (frost$core$Int64) {6};
frost$core$String* $tmp1260 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1259);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
frost$core$String* $tmp1261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local1) = $tmp1260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
// line 832
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1262 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1264, &$s1265);
frost$core$String* $tmp1266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1263, &$s1267);
frost$core$String* $tmp1268 = *(&local1);
frost$core$String* $tmp1269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1266, $tmp1268);
frost$core$Int64 $tmp1270 = (frost$core$Int64) {2};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1262, $tmp1269, $tmp1270);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$RegularExpression* $tmp1271 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local2) = $tmp1262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// line 840
frost$core$RegularExpression* $tmp1272 = *(&local2);
frost$core$Matcher* $tmp1273 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1272, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
frost$core$Matcher* $tmp1274 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local3) = $tmp1273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
// line 841
frost$core$String$Index $tmp1275 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local4) = $tmp1275;
// line 842
goto block1;
block1:;
frost$core$Matcher* $tmp1276 = *(&local3);
frost$core$Bit $tmp1277 = frost$core$Matcher$find$R$frost$core$Bit($tmp1276);
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block2; else goto block3;
block2:;
// line 843
frost$core$String$Index $tmp1279 = *(&local4);
frost$core$String$Index$wrapper* $tmp1280;
$tmp1280 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1280->value = $tmp1279;
frost$core$Matcher* $tmp1281 = *(&local3);
frost$core$String$Index $tmp1282;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1282, $tmp1281);
frost$core$String$Index$wrapper* $tmp1283;
$tmp1283 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1283->value = $tmp1282;
ITable* $tmp1284 = ((frost$core$Comparable*) $tmp1280)->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[1];
frost$core$Bit $tmp1287 = $tmp1285(((frost$core$Comparable*) $tmp1280), ((frost$core$Comparable*) $tmp1283));
bool $tmp1288 = $tmp1287.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1283)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1280)));
if ($tmp1288) goto block4; else goto block5;
block4:;
// line 844
frost$collections$Array* $tmp1289 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1290 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1291 = (frost$core$Int64) {1};
frost$core$String$Index $tmp1292 = *(&local4);
frost$core$Matcher* $tmp1293 = *(&local3);
frost$core$String$Index $tmp1294;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1294, $tmp1293);
frost$core$Bit $tmp1295 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1296 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1292, $tmp1294, $tmp1295);
frost$core$String* $tmp1297 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1296);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1290, $tmp1291, $tmp1297);
frost$collections$Array$add$frost$collections$Array$T($tmp1289, ((frost$core$Object*) $tmp1290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
goto block5;
block5:;
// line 846
frost$collections$Array* $tmp1298 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1299 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1300 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp1301 = *(&local3);
frost$core$String$Index $tmp1302;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1302, $tmp1301);
frost$core$Matcher* $tmp1303 = *(&local3);
frost$core$String$Index $tmp1304;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1304, $tmp1303);
frost$core$Bit $tmp1305 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1306 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1302, $tmp1304, $tmp1305);
frost$core$String* $tmp1307 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1306);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1299, $tmp1300, $tmp1307);
frost$collections$Array$add$frost$collections$Array$T($tmp1298, ((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// line 847
frost$core$Matcher* $tmp1308 = *(&local3);
frost$core$String$Index $tmp1309;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1309, $tmp1308);
*(&local4) = $tmp1309;
goto block1;
block3:;
// line 849
frost$core$String$Index $tmp1310 = *(&local4);
frost$core$String$Index$wrapper* $tmp1311;
$tmp1311 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1311->value = $tmp1310;
frost$core$String$Index $tmp1312 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp1313;
$tmp1313 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1313->value = $tmp1312;
ITable* $tmp1314 = ((frost$core$Comparable*) $tmp1311)->$class->itable;
while ($tmp1314->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1314 = $tmp1314->next;
}
$fn1316 $tmp1315 = $tmp1314->methods[1];
frost$core$Bit $tmp1317 = $tmp1315(((frost$core$Comparable*) $tmp1311), ((frost$core$Comparable*) $tmp1313));
bool $tmp1318 = $tmp1317.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1313)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1311)));
if ($tmp1318) goto block6; else goto block7;
block6:;
// line 850
frost$collections$Array* $tmp1319 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1320 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1321 = (frost$core$Int64) {1};
frost$core$String$Index $tmp1322 = *(&local4);
frost$core$String$Index $tmp1323 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$Bit $tmp1324 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1325 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1322, $tmp1323, $tmp1324);
frost$core$String* $tmp1326 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1325);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1320, $tmp1321, $tmp1326);
frost$collections$Array$add$frost$collections$Array$T($tmp1319, ((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
goto block7;
block7:;
// line 853
frost$collections$Array* $tmp1327 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1327)));
frost$core$Matcher* $tmp1328 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$RegularExpression* $tmp1329 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1330 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1331 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1327);

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 866
$fn1333 $tmp1332 = ($fn1333) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1334 = $tmp1332(((frost$core$Object*) param1));
$fn1336 $tmp1335 = ($fn1336) param0->$class->vtable[23];
frost$collections$ListView* $tmp1337 = $tmp1335(param0, $tmp1334);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$collections$ListView* $tmp1338 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local0) = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// line 867
frost$core$MutableString$clear(param1);
// line 869
frost$collections$ListView* $tmp1339 = *(&local0);
ITable* $tmp1340 = ((frost$collections$Iterable*) $tmp1339)->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[0];
frost$collections$Iterator* $tmp1343 = $tmp1341(((frost$collections$Iterable*) $tmp1339));
goto block1;
block1:;
ITable* $tmp1344 = $tmp1343->$class->itable;
while ($tmp1344->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1344 = $tmp1344->next;
}
$fn1346 $tmp1345 = $tmp1344->methods[0];
frost$core$Bit $tmp1347 = $tmp1345($tmp1343);
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1349 = $tmp1343->$class->itable;
while ($tmp1349->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1349 = $tmp1349->next;
}
$fn1351 $tmp1350 = $tmp1349->methods[1];
frost$core$Object* $tmp1352 = $tmp1350($tmp1343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1352)));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1353 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1352);
// line 870
*(&local2) = ((frost$core$String*) NULL);
// line 871
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1354 = *(&local1);
frost$core$Int64* $tmp1355 = &$tmp1354->$rawValue;
frost$core$Int64 $tmp1356 = *$tmp1355;
frost$core$Int64 $tmp1357 = (frost$core$Int64) {0};
frost$core$Bit $tmp1358 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1356, $tmp1357);
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block5; else goto block6;
block5:;
frost$core$String** $tmp1360 = (frost$core$String**) ($tmp1354->$data + 0);
frost$core$String* $tmp1361 = *$tmp1360;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$core$String* $tmp1362 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local3) = $tmp1361;
// line 873
frost$core$String* $tmp1363 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$String* $tmp1364 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local2) = $tmp1363;
// line 874
frost$core$String* $tmp1365 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1366 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1367 = *$tmp1366;
$fn1369 $tmp1368 = ($fn1369) $tmp1367->$class->vtable[2];
frost$core$String* $tmp1370 = $tmp1368($tmp1367, &$s1371);
frost$core$String* $tmp1372 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1365, &$s1373, $tmp1370);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$String* $tmp1374 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local2) = $tmp1372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// line 875
frost$core$String* $tmp1375 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1376 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1377 = *$tmp1376;
$fn1379 $tmp1378 = ($fn1379) $tmp1377->$class->vtable[2];
frost$core$String* $tmp1380 = $tmp1378($tmp1377, &$s1381);
frost$core$String* $tmp1382 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1375, &$s1383, $tmp1380);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
frost$core$String* $tmp1384 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local2) = $tmp1382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
// line 876
frost$core$String* $tmp1385 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1386 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1387 = *$tmp1386;
$fn1389 $tmp1388 = ($fn1389) $tmp1387->$class->vtable[2];
frost$core$String* $tmp1390 = $tmp1388($tmp1387, &$s1391);
frost$core$String* $tmp1392 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1385, &$s1393, $tmp1390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$String* $tmp1394 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local2) = $tmp1392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
// line 877
frost$core$String* $tmp1395 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1396 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1397 = *$tmp1396;
$fn1399 $tmp1398 = ($fn1399) $tmp1397->$class->vtable[2];
frost$core$String* $tmp1400 = $tmp1398($tmp1397, &$s1401);
frost$core$String* $tmp1402 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1395, &$s1403, $tmp1400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$String* $tmp1404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local2) = $tmp1402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$String* $tmp1405 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
frost$core$Int64 $tmp1406 = (frost$core$Int64) {1};
frost$core$Bit $tmp1407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1356, $tmp1406);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block7; else goto block4;
block7:;
frost$core$String** $tmp1409 = (frost$core$String**) ($tmp1354->$data + 0);
frost$core$String* $tmp1410 = *$tmp1409;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
frost$core$String* $tmp1411 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local4) = $tmp1410;
// line 880
frost$core$String* $tmp1412 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$String* $tmp1413 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local2) = $tmp1412;
frost$core$String* $tmp1414 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 883
frost$core$String* $tmp1415 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, $tmp1415);
frost$core$String* $tmp1416 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1352);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1417 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$collections$ListView* $tmp1418 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 889
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1419 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1419, &$s1420);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1419, &$s1421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// line 890
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1422 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1422, &$s1423);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1422, &$s1424);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
// line 893
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1425 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1427, &$s1428);
frost$core$String* $tmp1429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1426, &$s1430);
frost$core$String* $tmp1431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1429, &$s1432);
frost$core$RegularExpression$init$frost$core$String($tmp1425, $tmp1431);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$RegularExpression* $tmp1433 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local0) = $tmp1425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
// line 898
frost$core$RegularExpression* $tmp1434 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure27));
org$frostlang$frostc$frostdoc$Markdown$_Closure27* $tmp1435 = (org$frostlang$frostc$frostdoc$Markdown$_Closure27*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure27$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure27$init$org$frostlang$frostc$frostdoc$Markdown($tmp1435, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1437 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1437, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure27$$anonymous26$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1435));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1434, $tmp1437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
frost$core$RegularExpression* $tmp1438 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// line 931
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1439 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1441, &$s1442);
frost$core$String* $tmp1443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1440, &$s1444);
frost$core$String* $tmp1445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1443, &$s1446);
frost$core$RegularExpression$init$frost$core$String($tmp1439, $tmp1445);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$RegularExpression* $tmp1447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local0) = $tmp1439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// line 936
frost$core$RegularExpression* $tmp1448 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure29));
org$frostlang$frostc$frostdoc$Markdown$_Closure29* $tmp1449 = (org$frostlang$frostc$frostdoc$Markdown$_Closure29*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure29$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure29$init$org$frostlang$frostc$frostdoc$Markdown($tmp1449, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1451 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1451, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure29$$anonymous28$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1449));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1448, $tmp1451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
// line 968
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1452 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1454, &$s1455);
frost$core$String* $tmp1456 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1453, &$s1457);
frost$core$String* $tmp1458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1456, &$s1459);
frost$core$String* $tmp1460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1458, &$s1461);
frost$core$String* $tmp1462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1460, &$s1463);
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1462, &$s1465);
frost$core$String* $tmp1466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1464, &$s1467);
frost$core$String* $tmp1468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1466, &$s1469);
frost$core$String* $tmp1470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1468, &$s1471);
frost$core$String* $tmp1472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1470, &$s1473);
frost$core$String* $tmp1474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1472, &$s1475);
frost$core$Int64 $tmp1476 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1452, $tmp1474, $tmp1476);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
frost$core$RegularExpression* $tmp1477 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local1) = $tmp1452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
// line 982
frost$core$RegularExpression* $tmp1478 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure31));
org$frostlang$frostc$frostdoc$Markdown$_Closure31* $tmp1479 = (org$frostlang$frostc$frostdoc$Markdown$_Closure31*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure31$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure31$init$org$frostlang$frostc$frostdoc$Markdown($tmp1479, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1481 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1481, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure31$$anonymous30$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1479));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1478, $tmp1481);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
// line 1024
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1482 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1484, &$s1485);
frost$core$String* $tmp1486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1483, &$s1487);
frost$core$String* $tmp1488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1486, &$s1489);
frost$core$Int64 $tmp1490 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1482, $tmp1488, $tmp1490);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$RegularExpression* $tmp1491 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local2) = $tmp1482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
// line 1030
frost$core$RegularExpression* $tmp1492 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure33));
org$frostlang$frostc$frostdoc$Markdown$_Closure33* $tmp1493 = (org$frostlang$frostc$frostdoc$Markdown$_Closure33*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure33$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure33$init$org$frostlang$frostc$frostdoc$Markdown($tmp1493, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1495 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1495, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure33$$anonymous32$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1493));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1492, $tmp1495);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
frost$core$RegularExpression* $tmp1496 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1497 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1072
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1499 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1499, &$s1500);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1499, &$s1501);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
// line 1073
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1502 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1502, &$s1503);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1502, &$s1504);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1079
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1505 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1505, &$s1506);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1505, &$s1507);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
// line 1080
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1508 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1508, &$s1509);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1508, &$s1510);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1084
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1511 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1511, &$s1512);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure35));
org$frostlang$frostc$frostdoc$Markdown$_Closure35* $tmp1513 = (org$frostlang$frostc$frostdoc$Markdown$_Closure35*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure35$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure35$init$org$frostlang$frostc$frostdoc$Markdown($tmp1513, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1515 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1515, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure35$$anonymous34$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1513));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1511, $tmp1515);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

// line 83
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1516 = &param0->source;
frost$io$File* $tmp1517 = *$tmp1516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$threads$MessageQueue** $tmp1518 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1519 = *$tmp1518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
org$frostlang$frostc$parser$Parser** $tmp1520 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1521 = *$tmp1520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
frost$core$MutableMethod** $tmp1522 = &param0->linkResolver;
frost$core$MutableMethod* $tmp1523 = *$tmp1522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$collections$HashMap** $tmp1524 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp1525 = *$tmp1524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
org$frostlang$frostc$frostdoc$Protector** $tmp1526 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1527 = *$tmp1526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
org$frostlang$frostc$frostdoc$Protector** $tmp1528 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1529 = *$tmp1528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
frost$math$Random** $tmp1530 = &param0->random;
frost$math$Random* $tmp1531 = *$tmp1530;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
return;

}

