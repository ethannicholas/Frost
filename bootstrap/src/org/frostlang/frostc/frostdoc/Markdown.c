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
#include "frost/core/Method.h"
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
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure12.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure14.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure16.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure18.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure20.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure22.h"
#include "frost/core/Matcher.h"
#include "frost/core/String/Index.h"
#include "frost/core/Comparable.h"
#include "org/frostlang/frostc/frostdoc/Markdown/HTMLToken.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure24.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure26.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure30.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure32.h"


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
typedef frost$core$String* (*$fn691)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn705)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn709)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn714)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn725)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn735)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn748)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn838)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn846)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn854)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn862)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn870)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn881)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn891)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn913)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn923)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn937)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn950)(frost$core$Object*);
typedef frost$core$String* (*$fn977)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn998)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1021)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1042)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1065)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1087)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1095)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef void (*$fn1103)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn1138)(org$frostlang$frostc$frostdoc$Markdown$_Closure12*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1148)(org$frostlang$frostc$frostdoc$Markdown$_Closure14*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1176)(org$frostlang$frostc$frostdoc$Markdown$_Closure16*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1201)(org$frostlang$frostc$frostdoc$Markdown$_Closure18*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1206)(org$frostlang$frostc$frostdoc$Markdown$_Closure20*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1214)(org$frostlang$frostc$frostdoc$Markdown$_Closure22*, frost$collections$ListView*);
typedef void (*$fn1218)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1220)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1222)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1224)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1226)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1228)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1230)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1232)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1234)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Bit (*$fn1282)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn1312)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$String* (*$fn1329)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn1332)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1338)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1342)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1347)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1365)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1375)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1385)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1395)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1432)(org$frostlang$frostc$frostdoc$Markdown$_Closure24*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1446)(org$frostlang$frostc$frostdoc$Markdown$_Closure26*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1476)(org$frostlang$frostc$frostdoc$Markdown$_Closure28*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1490)(org$frostlang$frostc$frostdoc$Markdown$_Closure30*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1510)(org$frostlang$frostc$frostdoc$Markdown$_Closure32*, frost$collections$ListView*);

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
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 965728039488327577, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static frost$core$String $s1117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static frost$core$String $s1132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static frost$core$String $s1163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static frost$core$String $s1192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static frost$core$String $s1236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static frost$core$String $s1241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static frost$core$String $s1260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static frost$core$String $s1261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s1377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s1397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static frost$core$String $s1417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static frost$core$String $s1419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static frost$core$String $s1420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static frost$core$String $s1453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static frost$core$String $s1471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static frost$core$String $s1499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static frost$core$String $s1502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static frost$core$String $s1503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s1505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s1508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

void org$frostlang$frostc$frostdoc$Markdown$init(org$frostlang$frostc$frostdoc$Markdown* param0) {

// line 120
org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(param0, ((frost$core$MutableMethod*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableMethod* param1) {

// line 98
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
frost$core$RegularExpression* $tmp47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp47, &$s48);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp46, $tmp47, &$s49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// line 132
frost$core$MutableString* $tmp50 = *(&local0);
frost$core$RegularExpression* $tmp51 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp51, &$s52);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp50, $tmp51, &$s53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// line 133
frost$core$MutableString* $tmp54 = *(&local0);
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
frost$core$RegularExpression* $tmp122 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s124, param3);
frost$core$Char8 $tmp125 = *(&local0);
frost$core$Char8$wrapper* $tmp126;
$tmp126 = (frost$core$Char8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Char8$wrapperclass);
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
$tmp133 = (frost$core$Char8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Char8$wrapperclass);
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
org$frostlang$frostc$frostdoc$Markdown$_Closure2* $tmp155 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure2$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown($tmp155, param0);
frost$core$MutableMethod* $tmp157 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp157, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp155));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp154, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp157)));
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
frost$core$Method* local6 = NULL;
frost$core$RegularExpression* local7 = NULL;
frost$core$RegularExpression* local8 = NULL;
frost$core$RegularExpression* local9 = NULL;
// line 227
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
org$frostlang$frostc$frostdoc$Markdown$_Closure4* $tmp300 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure4$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure4$init$org$frostlang$frostc$frostdoc$Markdown($tmp300, param0);
frost$core$MutableMethod* $tmp302 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp302, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp300));
// line 277
*(&local6) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Method*) $tmp302)));
frost$core$Method* $tmp303 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local6) = ((frost$core$Method*) $tmp302);
// line 281
frost$core$RegularExpression* $tmp304 = *(&local5);
frost$core$Method* $tmp305 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp304, ((frost$core$MutableMethod*) $tmp305));
// line 284
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
frost$core$Method* $tmp329 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp328, ((frost$core$MutableMethod*) $tmp329));
// line 296
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
frost$core$Method* $tmp362 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp361, ((frost$core$MutableMethod*) $tmp362));
// line 313
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
frost$core$Method* $tmp398 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp397, ((frost$core$MutableMethod*) $tmp398));
frost$core$RegularExpression* $tmp399 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp400 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp401 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$Method* $tmp402 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local6) = ((frost$core$Method*) NULL);
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
frost$core$RegularExpression* $tmp408 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp408, &$s409);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp408, &$s410);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// line 333
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
frost$collections$Array* $tmp420 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
$fn422 $tmp421 = ($fn422) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp423 = $tmp421(((frost$core$Object*) param1));
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
frost$core$RegularExpression* $tmp514 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp514, &$s515);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp514, &$s516);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// line 358
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
org$frostlang$frostc$frostdoc$Markdown$_Closure6* $tmp521 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown($tmp521, param0);
frost$core$MutableMethod* $tmp523 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp523, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp521));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp520, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp523)));
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
$tmp587 = (frost$core$Int32$wrapper*) frostObjectAlloc(16, (frost$core$Class*) &frost$core$Int32$wrapperclass);
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
org$frostlang$frostc$frostdoc$Markdown$_Closure9* $tmp630 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown($tmp630, param0);
frost$core$MutableMethod* $tmp632 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp632, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp630));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp629, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp632)));
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
frost$core$RegularExpression* $tmp668 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp668, &$s669);
frost$core$Method* $tmp671 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp671, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Immutable*) NULL));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp668, ((frost$core$MutableMethod*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

// line 437
frost$core$RegularExpression* $tmp672 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp672, &$s673);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param0, $tmp672, &$s674);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 493
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
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp690 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown($tmp690, param0);
frost$core$MutableMethod* $tmp692 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp692, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp690));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp689, $tmp692);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$RegularExpression* $tmp693 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, org$frostlang$frostc$parser$Parser* param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$Pair* local2 = NULL;
frost$core$MutableString* local3 = NULL;
// line 505
frost$core$MutableString* $tmp694 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp694, &$s695);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$MutableString* $tmp696 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local0) = $tmp694;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// line 506
frost$core$Int64 $tmp697 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp698 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp697);
*(&local1) = $tmp698;
// line 507
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp699 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp700 = *$tmp699;
frost$collections$Array** $tmp701 = &$tmp700->tokens;
frost$collections$Array* $tmp702 = *$tmp701;
ITable* $tmp703 = ((frost$collections$Iterable*) $tmp702)->$class->itable;
while ($tmp703->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp703 = $tmp703->next;
}
$fn705 $tmp704 = $tmp703->methods[0];
frost$collections$Iterator* $tmp706 = $tmp704(((frost$collections$Iterable*) $tmp702));
goto block1;
block1:;
ITable* $tmp707 = $tmp706->$class->itable;
while ($tmp707->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp707 = $tmp707->next;
}
$fn709 $tmp708 = $tmp707->methods[0];
frost$core$Bit $tmp710 = $tmp708($tmp706);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp712 = $tmp706->$class->itable;
while ($tmp712->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp712 = $tmp712->next;
}
$fn714 $tmp713 = $tmp712->methods[1];
frost$core$Object* $tmp715 = $tmp713($tmp706);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp715)));
org$frostlang$frostc$Pair* $tmp716 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp715);
// line 508
org$frostlang$frostc$Pair* $tmp717 = *(&local2);
frost$core$Object** $tmp718 = &$tmp717->second;
frost$core$Object* $tmp719 = *$tmp718;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp720;
$tmp720 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp720->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp719)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp721 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp722;
$tmp722 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp722->value = $tmp721;
ITable* $tmp723 = ((frost$core$Equatable*) $tmp720)->$class->itable;
while ($tmp723->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp723 = $tmp723->next;
}
$fn725 $tmp724 = $tmp723->methods[1];
frost$core$Bit $tmp726 = $tmp724(((frost$core$Equatable*) $tmp720), ((frost$core$Equatable*) $tmp722));
bool $tmp727 = $tmp726.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp722)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp720)));
if ($tmp727) goto block6; else goto block5;
block6:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp728 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp729;
$tmp729 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp729->value = $tmp728;
frost$core$Int64 $tmp730 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp731 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp730);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp732;
$tmp732 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp732->value = $tmp731;
ITable* $tmp733 = ((frost$core$Equatable*) $tmp729)->$class->itable;
while ($tmp733->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp733 = $tmp733->next;
}
$fn735 $tmp734 = $tmp733->methods[1];
frost$core$Bit $tmp736 = $tmp734(((frost$core$Equatable*) $tmp729), ((frost$core$Equatable*) $tmp732));
bool $tmp737 = $tmp736.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp732)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp729)));
if ($tmp737) goto block4; else goto block5;
block4:;
// line 509
frost$core$MutableString* $tmp738 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp738, &$s739);
goto block5;
block5:;
// line 511
org$frostlang$frostc$Pair* $tmp740 = *(&local2);
frost$core$Object** $tmp741 = &$tmp740->second;
frost$core$Object* $tmp742 = *$tmp741;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp743;
$tmp743 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp743->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp742)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp744 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp745;
$tmp745 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp745->value = $tmp744;
ITable* $tmp746 = ((frost$core$Equatable*) $tmp743)->$class->itable;
while ($tmp746->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp746 = $tmp746->next;
}
$fn748 $tmp747 = $tmp746->methods[1];
frost$core$Bit $tmp749 = $tmp747(((frost$core$Equatable*) $tmp743), ((frost$core$Equatable*) $tmp745));
bool $tmp750 = $tmp749.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp745)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp743)));
if ($tmp750) goto block7; else goto block8;
block7:;
// line 512
org$frostlang$frostc$Pair* $tmp751 = *(&local2);
frost$core$Object** $tmp752 = &$tmp751->second;
frost$core$Object* $tmp753 = *$tmp752;
*(&local1) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp753)->value;
// line 513
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp754 = *(&local1);
frost$core$Int64 $tmp755 = $tmp754.$rawValue;
frost$core$Int64 $tmp756 = (frost$core$Int64) {0};
frost$core$Bit $tmp757 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp756);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block10; else goto block11;
block10:;
goto block9;
block11:;
frost$core$Int64 $tmp759 = (frost$core$Int64) {1};
frost$core$Bit $tmp760 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp762 = (frost$core$Int64) {2};
frost$core$Bit $tmp763 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block12; else goto block14;
block12:;
// line 518
frost$core$MutableString* $tmp765 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp765, &$s766);
goto block9;
block14:;
frost$core$Int64 $tmp767 = (frost$core$Int64) {3};
frost$core$Bit $tmp768 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp767);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block15; else goto block16;
block15:;
// line 521
frost$core$MutableString* $tmp770 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp770, &$s771);
goto block9;
block16:;
frost$core$Int64 $tmp772 = (frost$core$Int64) {4};
frost$core$Bit $tmp773 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block17; else goto block18;
block17:;
// line 524
frost$core$MutableString* $tmp775 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp775, &$s776);
goto block9;
block18:;
frost$core$Int64 $tmp777 = (frost$core$Int64) {5};
frost$core$Bit $tmp778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block19; else goto block20;
block19:;
// line 527
frost$core$MutableString* $tmp780 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp780, &$s781);
goto block9;
block20:;
frost$core$Int64 $tmp782 = (frost$core$Int64) {6};
frost$core$Bit $tmp783 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block21; else goto block22;
block21:;
// line 530
frost$core$MutableString* $tmp785 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp785, &$s786);
goto block9;
block22:;
frost$core$Int64 $tmp787 = (frost$core$Int64) {7};
frost$core$Bit $tmp788 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block23; else goto block24;
block23:;
// line 533
frost$core$MutableString* $tmp790 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp790, &$s791);
goto block9;
block24:;
frost$core$Int64 $tmp792 = (frost$core$Int64) {8};
frost$core$Bit $tmp793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block25; else goto block26;
block25:;
// line 536
frost$core$MutableString* $tmp795 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp795, &$s796);
goto block9;
block26:;
frost$core$Int64 $tmp797 = (frost$core$Int64) {9};
frost$core$Bit $tmp798 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block27; else goto block28;
block27:;
// line 539
frost$core$MutableString* $tmp800 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp800, &$s801);
goto block9;
block28:;
frost$core$Int64 $tmp802 = (frost$core$Int64) {10};
frost$core$Bit $tmp803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block29; else goto block30;
block29:;
// line 542
frost$core$MutableString* $tmp805 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp805, &$s806);
goto block9;
block30:;
frost$core$Int64 $tmp807 = (frost$core$Int64) {11};
frost$core$Bit $tmp808 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp807);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block31; else goto block32;
block31:;
// line 545
frost$core$MutableString* $tmp810 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp810, &$s811);
goto block9;
block32:;
frost$core$Int64 $tmp812 = (frost$core$Int64) {12};
frost$core$Bit $tmp813 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp755, $tmp812);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block33; else goto block34;
block33:;
// line 548
frost$core$MutableString* $tmp815 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp815, &$s816);
goto block9;
block34:;
// line 551
frost$core$Int64 $tmp817 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s818, $tmp817);
abort(); // unreachable
block9:;
goto block8;
block8:;
// line 555
frost$core$MutableString* $tmp819 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp820 = *(&local2);
frost$core$Object** $tmp821 = &$tmp820->first;
frost$core$Object* $tmp822 = *$tmp821;
frost$core$String* $tmp823 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param1, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp822)->value);
frost$core$MutableString$init$frost$core$String($tmp819, $tmp823);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$MutableString* $tmp824 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local3) = $tmp819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// line 556
frost$core$MutableString* $tmp825 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp825, &$s826, &$s827);
// line 557
frost$core$MutableString* $tmp828 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp828, &$s829, &$s830);
// line 558
frost$core$MutableString* $tmp831 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp831, &$s832, &$s833);
// line 559
frost$core$MutableString* $tmp834 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp835 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp836 = *$tmp835;
$fn838 $tmp837 = ($fn838) $tmp836->$class->vtable[2];
frost$core$String* $tmp839 = $tmp837($tmp836, &$s840);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp834, &$s841, $tmp839);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// line 560
frost$core$MutableString* $tmp842 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp843 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp844 = *$tmp843;
$fn846 $tmp845 = ($fn846) $tmp844->$class->vtable[2];
frost$core$String* $tmp847 = $tmp845($tmp844, &$s848);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp842, &$s849, $tmp847);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// line 561
frost$core$MutableString* $tmp850 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp851 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp852 = *$tmp851;
$fn854 $tmp853 = ($fn854) $tmp852->$class->vtable[2];
frost$core$String* $tmp855 = $tmp853($tmp852, &$s856);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp850, &$s857, $tmp855);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
// line 562
frost$core$MutableString* $tmp858 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp859 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp860 = *$tmp859;
$fn862 $tmp861 = ($fn862) $tmp860->$class->vtable[2];
frost$core$String* $tmp863 = $tmp861($tmp860, &$s864);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp858, &$s865, $tmp863);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// line 563
frost$core$MutableString* $tmp866 = *(&local3);
org$frostlang$frostc$frostdoc$Protector** $tmp867 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp868 = *$tmp867;
$fn870 $tmp869 = ($fn870) $tmp868->$class->vtable[2];
frost$core$String* $tmp871 = $tmp869($tmp868, &$s872);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp866, &$s873, $tmp871);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
// line 564
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp874 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp875;
$tmp875 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp875->value = $tmp874;
frost$core$Int64 $tmp876 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp877 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp876);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp878;
$tmp878 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp878->value = $tmp877;
ITable* $tmp879 = ((frost$core$Equatable*) $tmp875)->$class->itable;
while ($tmp879->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp879 = $tmp879->next;
}
$fn881 $tmp880 = $tmp879->methods[1];
frost$core$Bit $tmp882 = $tmp880(((frost$core$Equatable*) $tmp875), ((frost$core$Equatable*) $tmp878));
bool $tmp883 = $tmp882.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp878)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp875)));
if ($tmp883) goto block37; else goto block36;
block37:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp884 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp885;
$tmp885 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp885->value = $tmp884;
frost$core$Int64 $tmp886 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp887 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp886);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp888;
$tmp888 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp888->value = $tmp887;
ITable* $tmp889 = ((frost$core$Equatable*) $tmp885)->$class->itable;
while ($tmp889->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp889 = $tmp889->next;
}
$fn891 $tmp890 = $tmp889->methods[1];
frost$core$Bit $tmp892 = $tmp890(((frost$core$Equatable*) $tmp885), ((frost$core$Equatable*) $tmp888));
bool $tmp893 = $tmp892.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp888)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp885)));
if ($tmp893) goto block35; else goto block36;
block35:;
// line 566
frost$core$MutableString* $tmp894 = *(&local0);
org$frostlang$frostc$Pair* $tmp895 = *(&local2);
frost$core$Object** $tmp896 = &$tmp895->first;
frost$core$Object* $tmp897 = *$tmp896;
org$frostlang$frostc$parser$Token$Kind $tmp898 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp897)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp899;
$tmp899 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp899->value = $tmp898;
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s901, ((frost$core$Object*) $tmp899));
frost$core$String* $tmp902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp900, &$s903);
frost$core$MutableString$append$frost$core$String($tmp894, $tmp902);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
goto block36;
block36:;
// line 568
frost$core$MutableString* $tmp904 = *(&local0);
frost$core$MutableString* $tmp905 = *(&local3);
frost$core$MutableString$append$frost$core$Object($tmp904, ((frost$core$Object*) $tmp905));
// line 569
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp906 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp907;
$tmp907 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp907->value = $tmp906;
frost$core$Int64 $tmp908 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp909 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp908);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp910;
$tmp910 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp910->value = $tmp909;
ITable* $tmp911 = ((frost$core$Equatable*) $tmp907)->$class->itable;
while ($tmp911->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp911 = $tmp911->next;
}
$fn913 $tmp912 = $tmp911->methods[1];
frost$core$Bit $tmp914 = $tmp912(((frost$core$Equatable*) $tmp907), ((frost$core$Equatable*) $tmp910));
bool $tmp915 = $tmp914.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp910)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp907)));
if ($tmp915) goto block40; else goto block39;
block40:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp916 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp917;
$tmp917 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp917->value = $tmp916;
frost$core$Int64 $tmp918 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp919 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp918);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp920;
$tmp920 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp920->value = $tmp919;
ITable* $tmp921 = ((frost$core$Equatable*) $tmp917)->$class->itable;
while ($tmp921->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp921 = $tmp921->next;
}
$fn923 $tmp922 = $tmp921->methods[1];
frost$core$Bit $tmp924 = $tmp922(((frost$core$Equatable*) $tmp917), ((frost$core$Equatable*) $tmp920));
bool $tmp925 = $tmp924.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp920)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp917)));
if ($tmp925) goto block38; else goto block39;
block38:;
// line 571
frost$core$MutableString* $tmp926 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp926, &$s927);
goto block39;
block39:;
frost$core$MutableString* $tmp928 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp715);
org$frostlang$frostc$Pair* $tmp929 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// line 574
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp930 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp931;
$tmp931 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp931->value = $tmp930;
frost$core$Int64 $tmp932 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp933 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp932);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp934;
$tmp934 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp934->value = $tmp933;
ITable* $tmp935 = ((frost$core$Equatable*) $tmp931)->$class->itable;
while ($tmp935->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp935 = $tmp935->next;
}
$fn937 $tmp936 = $tmp935->methods[1];
frost$core$Bit $tmp938 = $tmp936(((frost$core$Equatable*) $tmp931), ((frost$core$Equatable*) $tmp934));
bool $tmp939 = $tmp938.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp934)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp931)));
if ($tmp939) goto block41; else goto block42;
block41:;
// line 575
frost$core$MutableString* $tmp940 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp940, &$s941);
goto block42;
block42:;
// line 577
frost$core$MutableString* $tmp942 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp942, &$s943);
// line 578
frost$core$MutableString* $tmp944 = *(&local0);
frost$core$String* $tmp945 = frost$core$MutableString$finish$R$frost$core$String($tmp944);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$MutableString* $tmp946 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp945;

}
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 582
frost$threads$MessageQueue** $tmp947 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp948 = *$tmp947;
frost$threads$MessageQueue$clear($tmp948);
// line 583
$fn950 $tmp949 = ($fn950) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp951 = $tmp949(((frost$core$Object*) param1));
frost$core$String* $tmp952 = frost$core$String$get_trimmed$R$frost$core$String($tmp951);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$core$String* $tmp953 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local0) = $tmp952;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// line 584
org$frostlang$frostc$parser$Parser** $tmp954 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp955 = *$tmp954;
frost$io$File** $tmp956 = &param0->source;
frost$io$File* $tmp957 = *$tmp956;
frost$core$String* $tmp958 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp955, $tmp957, $tmp958);
// line 585
org$frostlang$frostc$parser$Parser** $tmp959 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp960 = *$tmp959;
org$frostlang$frostc$ASTNode* $tmp961 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp960);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
org$frostlang$frostc$ASTNode* $tmp962 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local1) = $tmp961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
// line 586
org$frostlang$frostc$ASTNode* $tmp963 = *(&local1);
frost$core$Bit $tmp964 = frost$core$Bit$init$builtin_bit($tmp963 != NULL);
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block3; else goto block2;
block3:;
frost$threads$MessageQueue** $tmp966 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp967 = *$tmp966;
frost$core$Int64 $tmp968 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp967);
frost$core$Int64 $tmp969 = (frost$core$Int64) {0};
frost$core$Bit $tmp970 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp968, $tmp969);
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block1; else goto block2;
block1:;
// line 587
frost$core$Bit $tmp972 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp973 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp972);
org$frostlang$frostc$parser$Parser** $tmp974 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp975 = *$tmp974;
$fn977 $tmp976 = ($fn977) param0->$class->vtable[16];
frost$core$String* $tmp978 = $tmp976(param0, $tmp975);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp973, $tmp978);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
// line 588
org$frostlang$frostc$ASTNode* $tmp979 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp980 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local0) = ((frost$core$String*) NULL);
return;
block2:;
// line 591
frost$threads$MessageQueue** $tmp981 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp982 = *$tmp981;
frost$threads$MessageQueue$clear($tmp982);
// line 592
org$frostlang$frostc$parser$Parser** $tmp983 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp984 = *$tmp983;
frost$io$File** $tmp985 = &param0->source;
frost$io$File* $tmp986 = *$tmp985;
frost$core$String* $tmp987 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp984, $tmp986, $tmp987);
// line 593
goto block4;
block4:;
org$frostlang$frostc$parser$Parser** $tmp988 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp989 = *$tmp988;
org$frostlang$frostc$parser$Token $tmp990 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp989);
org$frostlang$frostc$parser$Token$Kind $tmp991 = $tmp990.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp992;
$tmp992 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp992->value = $tmp991;
frost$core$Int64 $tmp993 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp994 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp993);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp995;
$tmp995 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp995->value = $tmp994;
ITable* $tmp996 = ((frost$core$Equatable*) $tmp992)->$class->itable;
while ($tmp996->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp996 = $tmp996->next;
}
$fn998 $tmp997 = $tmp996->methods[1];
frost$core$Bit $tmp999 = $tmp997(((frost$core$Equatable*) $tmp992), ((frost$core$Equatable*) $tmp995));
bool $tmp1000 = $tmp999.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp995)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp992)));
if ($tmp1000) goto block7; else goto block6;
block7:;
frost$threads$MessageQueue** $tmp1001 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1002 = *$tmp1001;
frost$core$Int64 $tmp1003 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1002);
frost$core$Int64 $tmp1004 = (frost$core$Int64) {0};
frost$core$Bit $tmp1005 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1003, $tmp1004);
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block5; else goto block6;
block5:;
// line 594
org$frostlang$frostc$parser$Parser** $tmp1007 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1008 = *$tmp1007;
org$frostlang$frostc$ASTNode* $tmp1009 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q($tmp1008);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
goto block4;
block6:;
// line 596
frost$threads$MessageQueue** $tmp1010 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1011 = *$tmp1010;
frost$core$Int64 $tmp1012 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1011);
frost$core$Int64 $tmp1013 = (frost$core$Int64) {0};
frost$core$Bit $tmp1014 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1012, $tmp1013);
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block8; else goto block9;
block8:;
// line 597
frost$core$Bit $tmp1016 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1017 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1016);
org$frostlang$frostc$parser$Parser** $tmp1018 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1019 = *$tmp1018;
$fn1021 $tmp1020 = ($fn1021) param0->$class->vtable[16];
frost$core$String* $tmp1022 = $tmp1020(param0, $tmp1019);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1017, $tmp1022);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
// line 598
org$frostlang$frostc$ASTNode* $tmp1023 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local0) = ((frost$core$String*) NULL);
return;
block9:;
// line 601
frost$threads$MessageQueue** $tmp1025 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1026 = *$tmp1025;
frost$threads$MessageQueue$clear($tmp1026);
// line 602
org$frostlang$frostc$parser$Parser** $tmp1027 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1028 = *$tmp1027;
frost$io$File** $tmp1029 = &param0->source;
frost$io$File* $tmp1030 = *$tmp1029;
frost$core$String* $tmp1031 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1028, $tmp1030, $tmp1031);
// line 603
goto block10;
block10:;
org$frostlang$frostc$parser$Parser** $tmp1032 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1033 = *$tmp1032;
org$frostlang$frostc$parser$Token $tmp1034 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp1033);
org$frostlang$frostc$parser$Token$Kind $tmp1035 = $tmp1034.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1036;
$tmp1036 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1036->value = $tmp1035;
frost$core$Int64 $tmp1037 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1038 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1037);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1039;
$tmp1039 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1039->value = $tmp1038;
ITable* $tmp1040 = ((frost$core$Equatable*) $tmp1036)->$class->itable;
while ($tmp1040->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1040 = $tmp1040->next;
}
$fn1042 $tmp1041 = $tmp1040->methods[1];
frost$core$Bit $tmp1043 = $tmp1041(((frost$core$Equatable*) $tmp1036), ((frost$core$Equatable*) $tmp1039));
bool $tmp1044 = $tmp1043.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1039)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1036)));
if ($tmp1044) goto block13; else goto block12;
block13:;
frost$threads$MessageQueue** $tmp1045 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1046 = *$tmp1045;
frost$core$Int64 $tmp1047 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1046);
frost$core$Int64 $tmp1048 = (frost$core$Int64) {0};
frost$core$Bit $tmp1049 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1047, $tmp1048);
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block11; else goto block12;
block11:;
// line 604
org$frostlang$frostc$parser$Parser** $tmp1051 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1052 = *$tmp1051;
org$frostlang$frostc$ASTNode* $tmp1053 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q($tmp1052);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
goto block10;
block12:;
// line 606
frost$threads$MessageQueue** $tmp1054 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1055 = *$tmp1054;
frost$core$Int64 $tmp1056 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1055);
frost$core$Int64 $tmp1057 = (frost$core$Int64) {0};
frost$core$Bit $tmp1058 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1056, $tmp1057);
bool $tmp1059 = $tmp1058.value;
if ($tmp1059) goto block14; else goto block15;
block14:;
// line 607
frost$core$Bit $tmp1060 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1061 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1060);
org$frostlang$frostc$parser$Parser** $tmp1062 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1063 = *$tmp1062;
$fn1065 $tmp1064 = ($fn1065) param0->$class->vtable[16];
frost$core$String* $tmp1066 = $tmp1064(param0, $tmp1063);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1061, $tmp1066);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// line 608
org$frostlang$frostc$ASTNode* $tmp1067 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1068 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local0) = ((frost$core$String*) NULL);
return;
block15:;
// line 611
frost$threads$MessageQueue** $tmp1069 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1070 = *$tmp1069;
frost$threads$MessageQueue$clear($tmp1070);
// line 612
org$frostlang$frostc$parser$Parser** $tmp1071 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1072 = *$tmp1071;
frost$io$File** $tmp1073 = &param0->source;
frost$io$File* $tmp1074 = *$tmp1073;
frost$core$String* $tmp1075 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1072, $tmp1074, $tmp1075);
// line 613
goto block16;
block16:;
// line 614
org$frostlang$frostc$parser$Parser** $tmp1076 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1077 = *$tmp1076;
org$frostlang$frostc$parser$Token $tmp1078 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1077);
*(&local2) = $tmp1078;
// line 615
org$frostlang$frostc$parser$Token $tmp1079 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp1080 = $tmp1079.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1081;
$tmp1081 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1081->value = $tmp1080;
frost$core$Int64 $tmp1082 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1083 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1082);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1084;
$tmp1084 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1084->value = $tmp1083;
ITable* $tmp1085 = ((frost$core$Equatable*) $tmp1081)->$class->itable;
while ($tmp1085->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1085 = $tmp1085->next;
}
$fn1087 $tmp1086 = $tmp1085->methods[0];
frost$core$Bit $tmp1088 = $tmp1086(((frost$core$Equatable*) $tmp1081), ((frost$core$Equatable*) $tmp1084));
bool $tmp1089 = $tmp1088.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1084)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1081)));
if ($tmp1089) goto block18; else goto block19;
block18:;
// line 616
goto block17;
block19:;
goto block16;
block17:;
// line 619
frost$core$Bit $tmp1090 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1091 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1090);
org$frostlang$frostc$parser$Parser** $tmp1092 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1093 = *$tmp1092;
$fn1095 $tmp1094 = ($fn1095) param0->$class->vtable[16];
frost$core$String* $tmp1096 = $tmp1094(param0, $tmp1093);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1091, $tmp1096);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
org$frostlang$frostc$ASTNode* $tmp1097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 625
frost$core$RegularExpression* $tmp1099 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1099, &$s1100);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1099, &$s1101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// line 626
$fn1103 $tmp1102 = ($fn1103) param0->$class->vtable[17];
$tmp1102(param0, param1);
// line 627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s1104, &$s1105);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Int64 local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
// line 631
frost$core$Int64 $tmp1106 = (frost$core$Int64) {4};
frost$core$Int64 $tmp1107 = (frost$core$Int64) {1};
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107.value;
int64_t $tmp1110 = $tmp1108 - $tmp1109;
frost$core$Int64 $tmp1111 = (frost$core$Int64) {$tmp1110};
*(&local0) = $tmp1111;
// line 633
frost$core$Int64 $tmp1112 = *(&local0);
frost$core$Int64$wrapper* $tmp1113;
$tmp1113 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1113->value = $tmp1112;
frost$core$String* $tmp1114 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1115, ((frost$core$Object*) $tmp1113));
frost$core$String* $tmp1116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1114, &$s1117);
frost$core$String* $tmp1118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1116, &$s1119);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$core$String* $tmp1120 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
*(&local1) = $tmp1118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
// line 656
frost$core$Int64* $tmp1121 = &param0->listLevel;
frost$core$Int64 $tmp1122 = *$tmp1121;
frost$core$Int64 $tmp1123 = (frost$core$Int64) {0};
int64_t $tmp1124 = $tmp1122.value;
int64_t $tmp1125 = $tmp1123.value;
bool $tmp1126 = $tmp1124 > $tmp1125;
frost$core$Bit $tmp1127 = (frost$core$Bit) {$tmp1126};
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block1; else goto block3;
block1:;
// line 657
frost$core$RegularExpression* $tmp1129 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1130 = *(&local1);
frost$core$String* $tmp1131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1132, $tmp1130);
frost$core$String* $tmp1133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1131, &$s1134);
frost$core$RegularExpression$init$frost$core$String($tmp1129, $tmp1133);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$RegularExpression* $tmp1135 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local2) = $tmp1129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
// line 658
frost$core$RegularExpression* $tmp1136 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$_Closure12* $tmp1137 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown($tmp1137, param0);
frost$core$MutableMethod* $tmp1139 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1139, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1137));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1136, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1139)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$RegularExpression* $tmp1140 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 684
frost$core$RegularExpression* $tmp1141 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1142 = *(&local1);
frost$core$String* $tmp1143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1144, $tmp1142);
frost$core$RegularExpression$init$frost$core$String($tmp1141, $tmp1143);
*(&local3) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$RegularExpression* $tmp1145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local3) = $tmp1141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// line 685
frost$core$RegularExpression* $tmp1146 = *(&local3);
org$frostlang$frostc$frostdoc$Markdown$_Closure14* $tmp1147 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown($tmp1147, param0);
frost$core$MutableMethod* $tmp1149 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1149, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1147));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1146, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1149)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$RegularExpression* $tmp1150 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block2;
block2:;
frost$core$String* $tmp1151 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// line 726
frost$core$Int64* $tmp1152 = &param0->listLevel;
frost$core$Int64 $tmp1153 = *$tmp1152;
frost$core$Int64 $tmp1154 = (frost$core$Int64) {1};
int64_t $tmp1155 = $tmp1153.value;
int64_t $tmp1156 = $tmp1154.value;
int64_t $tmp1157 = $tmp1155 + $tmp1156;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {$tmp1157};
frost$core$Int64* $tmp1159 = &param0->listLevel;
*$tmp1159 = $tmp1158;
// line 729
frost$core$RegularExpression* $tmp1160 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1160, &$s1161);
frost$core$String* $tmp1162 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(param1, $tmp1160, &$s1163);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$String* $tmp1164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local0) = $tmp1162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// line 731
frost$core$RegularExpression* $tmp1165 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1167, &$s1168);
frost$core$String* $tmp1169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1166, &$s1170);
frost$core$Int64 $tmp1171 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1165, $tmp1169, $tmp1171);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$RegularExpression* $tmp1172 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local1) = $tmp1165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
// line 736
frost$core$String* $tmp1173 = *(&local0);
frost$core$RegularExpression* $tmp1174 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure16* $tmp1175 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown($tmp1175, param0);
frost$core$MutableMethod* $tmp1177 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1177, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1175));
frost$core$String* $tmp1178 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String($tmp1173, $tmp1174, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1177)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$String* $tmp1179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local0) = $tmp1178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// line 753
frost$core$Int64* $tmp1180 = &param0->listLevel;
frost$core$Int64 $tmp1181 = *$tmp1180;
frost$core$Int64 $tmp1182 = (frost$core$Int64) {1};
int64_t $tmp1183 = $tmp1181.value;
int64_t $tmp1184 = $tmp1182.value;
int64_t $tmp1185 = $tmp1183 - $tmp1184;
frost$core$Int64 $tmp1186 = (frost$core$Int64) {$tmp1185};
frost$core$Int64* $tmp1187 = &param0->listLevel;
*$tmp1187 = $tmp1186;
// line 754
frost$core$String* $tmp1188 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
frost$core$RegularExpression* $tmp1189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1188;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

// line 759
frost$core$Bit $tmp1191 = frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(param0, &$s1192);
return $tmp1191;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
// line 764
frost$core$Bit $tmp1193 = frost$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1194 = $tmp1193.value;
if ($tmp1194) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1193;
goto block3;
block2:;
frost$core$Bit $tmp1195 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s1196);
*(&local0) = $tmp1195;
goto block3;
block3:;
frost$core$Bit $tmp1197 = *(&local0);
return $tmp1197;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 769
frost$core$RegularExpression* $tmp1198 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1198, &$s1199);
org$frostlang$frostc$frostdoc$Markdown$_Closure18* $tmp1200 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown($tmp1200, param0);
frost$core$MutableMethod* $tmp1202 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1202, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1200));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1198, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1202)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// line 774
frost$core$RegularExpression* $tmp1203 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1203, &$s1204);
org$frostlang$frostc$frostdoc$Markdown$_Closure20* $tmp1205 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown($tmp1205, param0);
frost$core$MutableMethod* $tmp1207 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1207, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1205));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1203, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1207)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// line 781
frost$core$RegularExpression* $tmp1208 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int64 $tmp1209 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1208, &$s1210, $tmp1209);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$RegularExpression* $tmp1211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local0) = $tmp1208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// line 782
frost$core$RegularExpression* $tmp1212 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure22* $tmp1213 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown($tmp1213, param0);
frost$core$MutableMethod* $tmp1215 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1215, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1213));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1212, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1215)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$RegularExpression* $tmp1216 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 793
$fn1218 $tmp1217 = ($fn1218) param0->$class->vtable[24];
$tmp1217(param0, param1);
// line 794
$fn1220 $tmp1219 = ($fn1220) param0->$class->vtable[29];
$tmp1219(param0, param1);
// line 795
$fn1222 $tmp1221 = ($fn1222) param0->$class->vtable[3];
$tmp1221(param0, param1);
// line 797
$fn1224 $tmp1223 = ($fn1224) param0->$class->vtable[25];
$tmp1223(param0, param1);
// line 798
$fn1226 $tmp1225 = ($fn1226) param0->$class->vtable[26];
$tmp1225(param0, param1);
// line 799
$fn1228 $tmp1227 = ($fn1228) param0->$class->vtable[10];
$tmp1227(param0, param1);
// line 805
$fn1230 $tmp1229 = ($fn1230) param0->$class->vtable[24];
$tmp1229(param0, param1);
// line 807
$fn1232 $tmp1231 = ($fn1232) param0->$class->vtable[28];
$tmp1231(param0, param1);
// line 808
$fn1234 $tmp1233 = ($fn1234) param0->$class->vtable[27];
$tmp1233(param0, param1);
// line 810
frost$core$RegularExpression* $tmp1235 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1235, &$s1236);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1235, &$s1237);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String(frost$core$Int64 param0) {

// line 820
frost$core$Int64 $tmp1238 = (frost$core$Int64) {0};
frost$core$Bit $tmp1239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param0, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block1; else goto block3;
block1:;
// line 821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1241));
return &$s1242;
block3:;
// line 1
// line 824
frost$core$Int64 $tmp1243 = (frost$core$Int64) {1};
int64_t $tmp1244 = param0.value;
int64_t $tmp1245 = $tmp1243.value;
int64_t $tmp1246 = $tmp1244 - $tmp1245;
frost$core$Int64 $tmp1247 = (frost$core$Int64) {$tmp1246};
frost$core$String* $tmp1248 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1247);
frost$core$String* $tmp1249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1250, $tmp1248);
frost$core$String* $tmp1251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1249, &$s1252);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
return $tmp1251;
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
frost$collections$Array* $tmp1253 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1253);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$collections$Array* $tmp1254 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local0) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// line 830
frost$core$Int64 $tmp1255 = (frost$core$Int64) {6};
frost$core$String* $tmp1256 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1255);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1257 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local1) = $tmp1256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// line 832
frost$core$RegularExpression* $tmp1258 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1260, &$s1261);
frost$core$String* $tmp1262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1259, &$s1263);
frost$core$String* $tmp1264 = *(&local1);
frost$core$String* $tmp1265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1262, $tmp1264);
frost$core$Int64 $tmp1266 = (frost$core$Int64) {2};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1258, $tmp1265, $tmp1266);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$RegularExpression* $tmp1267 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
*(&local2) = $tmp1258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
// line 840
frost$core$RegularExpression* $tmp1268 = *(&local2);
frost$core$Matcher* $tmp1269 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1268, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Matcher* $tmp1270 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local3) = $tmp1269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// line 841
frost$core$String$Index $tmp1271 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local4) = $tmp1271;
// line 842
goto block1;
block1:;
frost$core$Matcher* $tmp1272 = *(&local3);
frost$core$Bit $tmp1273 = frost$core$Matcher$find$R$frost$core$Bit($tmp1272);
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block2; else goto block3;
block2:;
// line 843
frost$core$String$Index $tmp1275 = *(&local4);
frost$core$String$Index$wrapper* $tmp1276;
$tmp1276 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1276->value = $tmp1275;
frost$core$Matcher* $tmp1277 = *(&local3);
frost$core$String$Index $tmp1278;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1278, $tmp1277);
frost$core$String$Index$wrapper* $tmp1279;
$tmp1279 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1279->value = $tmp1278;
ITable* $tmp1280 = ((frost$core$Comparable*) $tmp1276)->$class->itable;
while ($tmp1280->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1280 = $tmp1280->next;
}
$fn1282 $tmp1281 = $tmp1280->methods[1];
frost$core$Bit $tmp1283 = $tmp1281(((frost$core$Comparable*) $tmp1276), ((frost$core$Comparable*) $tmp1279));
bool $tmp1284 = $tmp1283.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1279)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1276)));
if ($tmp1284) goto block4; else goto block5;
block4:;
// line 844
frost$collections$Array* $tmp1285 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1286 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1287 = (frost$core$Int64) {1};
frost$core$String$Index $tmp1288 = *(&local4);
frost$core$Matcher* $tmp1289 = *(&local3);
frost$core$String$Index $tmp1290;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1290, $tmp1289);
frost$core$Bit $tmp1291 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1292 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1288, $tmp1290, $tmp1291);
frost$core$String* $tmp1293 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1292);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1286, $tmp1287, $tmp1293);
frost$collections$Array$add$frost$collections$Array$T($tmp1285, ((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
goto block5;
block5:;
// line 846
frost$collections$Array* $tmp1294 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1295 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp1297 = *(&local3);
frost$core$String$Index $tmp1298;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1298, $tmp1297);
frost$core$Matcher* $tmp1299 = *(&local3);
frost$core$String$Index $tmp1300;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1300, $tmp1299);
frost$core$Bit $tmp1301 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1302 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1298, $tmp1300, $tmp1301);
frost$core$String* $tmp1303 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1302);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1295, $tmp1296, $tmp1303);
frost$collections$Array$add$frost$collections$Array$T($tmp1294, ((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// line 847
frost$core$Matcher* $tmp1304 = *(&local3);
frost$core$String$Index $tmp1305;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1305, $tmp1304);
*(&local4) = $tmp1305;
goto block1;
block3:;
// line 849
frost$core$String$Index $tmp1306 = *(&local4);
frost$core$String$Index$wrapper* $tmp1307;
$tmp1307 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1307->value = $tmp1306;
frost$core$String$Index $tmp1308 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp1309;
$tmp1309 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1309->value = $tmp1308;
ITable* $tmp1310 = ((frost$core$Comparable*) $tmp1307)->$class->itable;
while ($tmp1310->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1310 = $tmp1310->next;
}
$fn1312 $tmp1311 = $tmp1310->methods[1];
frost$core$Bit $tmp1313 = $tmp1311(((frost$core$Comparable*) $tmp1307), ((frost$core$Comparable*) $tmp1309));
bool $tmp1314 = $tmp1313.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1309)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1307)));
if ($tmp1314) goto block6; else goto block7;
block6:;
// line 850
frost$collections$Array* $tmp1315 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1316 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1317 = (frost$core$Int64) {1};
frost$core$String$Index $tmp1318 = *(&local4);
frost$core$String$Index $tmp1319 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$Bit $tmp1320 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1321 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1318, $tmp1319, $tmp1320);
frost$core$String* $tmp1322 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1321);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1316, $tmp1317, $tmp1322);
frost$collections$Array$add$frost$collections$Array$T($tmp1315, ((frost$core$Object*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
goto block7;
block7:;
// line 853
frost$collections$Array* $tmp1323 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1323)));
frost$core$Matcher* $tmp1324 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$RegularExpression* $tmp1325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1326 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1327 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1323);

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 866
$fn1329 $tmp1328 = ($fn1329) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1330 = $tmp1328(((frost$core$Object*) param1));
$fn1332 $tmp1331 = ($fn1332) param0->$class->vtable[23];
frost$collections$ListView* $tmp1333 = $tmp1331(param0, $tmp1330);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$collections$ListView* $tmp1334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local0) = $tmp1333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// line 867
frost$core$MutableString$clear(param1);
// line 869
frost$collections$ListView* $tmp1335 = *(&local0);
ITable* $tmp1336 = ((frost$collections$Iterable*) $tmp1335)->$class->itable;
while ($tmp1336->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1336 = $tmp1336->next;
}
$fn1338 $tmp1337 = $tmp1336->methods[0];
frost$collections$Iterator* $tmp1339 = $tmp1337(((frost$collections$Iterable*) $tmp1335));
goto block1;
block1:;
ITable* $tmp1340 = $tmp1339->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[0];
frost$core$Bit $tmp1343 = $tmp1341($tmp1339);
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1345 = $tmp1339->$class->itable;
while ($tmp1345->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1345 = $tmp1345->next;
}
$fn1347 $tmp1346 = $tmp1345->methods[1];
frost$core$Object* $tmp1348 = $tmp1346($tmp1339);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1348)));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1349 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1348);
// line 870
*(&local2) = ((frost$core$String*) NULL);
// line 871
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1350 = *(&local1);
frost$core$Int64* $tmp1351 = &$tmp1350->$rawValue;
frost$core$Int64 $tmp1352 = *$tmp1351;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {0};
frost$core$Bit $tmp1354 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1352, $tmp1353);
bool $tmp1355 = $tmp1354.value;
if ($tmp1355) goto block5; else goto block6;
block5:;
frost$core$String** $tmp1356 = (frost$core$String**) ($tmp1350->$data + 0);
frost$core$String* $tmp1357 = *$tmp1356;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
frost$core$String* $tmp1358 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local3) = $tmp1357;
// line 873
frost$core$String* $tmp1359 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$core$String* $tmp1360 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local2) = $tmp1359;
// line 874
frost$core$String* $tmp1361 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1362 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1363 = *$tmp1362;
$fn1365 $tmp1364 = ($fn1365) $tmp1363->$class->vtable[2];
frost$core$String* $tmp1366 = $tmp1364($tmp1363, &$s1367);
frost$core$String* $tmp1368 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1361, &$s1369, $tmp1366);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$String* $tmp1370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local2) = $tmp1368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
// line 875
frost$core$String* $tmp1371 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1372 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1373 = *$tmp1372;
$fn1375 $tmp1374 = ($fn1375) $tmp1373->$class->vtable[2];
frost$core$String* $tmp1376 = $tmp1374($tmp1373, &$s1377);
frost$core$String* $tmp1378 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1371, &$s1379, $tmp1376);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$String* $tmp1380 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local2) = $tmp1378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// line 876
frost$core$String* $tmp1381 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1382 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1383 = *$tmp1382;
$fn1385 $tmp1384 = ($fn1385) $tmp1383->$class->vtable[2];
frost$core$String* $tmp1386 = $tmp1384($tmp1383, &$s1387);
frost$core$String* $tmp1388 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1381, &$s1389, $tmp1386);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
frost$core$String* $tmp1390 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local2) = $tmp1388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
// line 877
frost$core$String* $tmp1391 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1392 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1393 = *$tmp1392;
$fn1395 $tmp1394 = ($fn1395) $tmp1393->$class->vtable[2];
frost$core$String* $tmp1396 = $tmp1394($tmp1393, &$s1397);
frost$core$String* $tmp1398 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1391, &$s1399, $tmp1396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
frost$core$String* $tmp1400 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local2) = $tmp1398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$String* $tmp1401 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
frost$core$Int64 $tmp1402 = (frost$core$Int64) {1};
frost$core$Bit $tmp1403 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1352, $tmp1402);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block7; else goto block4;
block7:;
frost$core$String** $tmp1405 = (frost$core$String**) ($tmp1350->$data + 0);
frost$core$String* $tmp1406 = *$tmp1405;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$String* $tmp1407 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local4) = $tmp1406;
// line 880
frost$core$String* $tmp1408 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$String* $tmp1409 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local2) = $tmp1408;
frost$core$String* $tmp1410 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 883
frost$core$String* $tmp1411 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, $tmp1411);
frost$core$String* $tmp1412 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1348);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1413 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
frost$collections$ListView* $tmp1414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 889
frost$core$RegularExpression* $tmp1415 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1415, &$s1416);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1415, &$s1417);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// line 890
frost$core$RegularExpression* $tmp1418 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1418, &$s1419);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1418, &$s1420);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
// line 893
frost$core$RegularExpression* $tmp1421 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1422 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1423, &$s1424);
frost$core$String* $tmp1425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1422, &$s1426);
frost$core$String* $tmp1427 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1425, &$s1428);
frost$core$RegularExpression$init$frost$core$String($tmp1421, $tmp1427);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$RegularExpression* $tmp1429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local0) = $tmp1421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
// line 898
frost$core$RegularExpression* $tmp1430 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure24* $tmp1431 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown($tmp1431, param0);
frost$core$MutableMethod* $tmp1433 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1433, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1431));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1430, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1433)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$RegularExpression* $tmp1434 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// line 931
frost$core$RegularExpression* $tmp1435 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1437, &$s1438);
frost$core$String* $tmp1439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1436, &$s1440);
frost$core$String* $tmp1441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1439, &$s1442);
frost$core$RegularExpression$init$frost$core$String($tmp1435, $tmp1441);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
frost$core$RegularExpression* $tmp1443 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local0) = $tmp1435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
// line 936
frost$core$RegularExpression* $tmp1444 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure26* $tmp1445 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown($tmp1445, param0);
frost$core$MutableMethod* $tmp1447 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1447, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1445));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1444, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1447)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
// line 968
frost$core$RegularExpression* $tmp1448 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1450, &$s1451);
frost$core$String* $tmp1452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1449, &$s1453);
frost$core$String* $tmp1454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1452, &$s1455);
frost$core$String* $tmp1456 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1454, &$s1457);
frost$core$String* $tmp1458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1456, &$s1459);
frost$core$String* $tmp1460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1458, &$s1461);
frost$core$String* $tmp1462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1460, &$s1463);
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1462, &$s1465);
frost$core$String* $tmp1466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1464, &$s1467);
frost$core$String* $tmp1468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1466, &$s1469);
frost$core$String* $tmp1470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1468, &$s1471);
frost$core$Int64 $tmp1472 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1448, $tmp1470, $tmp1472);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$RegularExpression* $tmp1473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local1) = $tmp1448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
// line 982
frost$core$RegularExpression* $tmp1474 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure28* $tmp1475 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown($tmp1475, param0);
frost$core$MutableMethod* $tmp1477 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1477, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1475));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1474, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1477)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
// line 1024
frost$core$RegularExpression* $tmp1478 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1480, &$s1481);
frost$core$String* $tmp1482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1479, &$s1483);
frost$core$String* $tmp1484 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1482, &$s1485);
frost$core$Int64 $tmp1486 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1478, $tmp1484, $tmp1486);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$RegularExpression* $tmp1487 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local2) = $tmp1478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
// line 1030
frost$core$RegularExpression* $tmp1488 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$_Closure30* $tmp1489 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown($tmp1489, param0);
frost$core$MutableMethod* $tmp1491 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1491, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1489));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1488, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1491)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$RegularExpression* $tmp1492 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1493 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1494 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1072
frost$core$RegularExpression* $tmp1495 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1495, &$s1496);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1495, &$s1497);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
// line 1073
frost$core$RegularExpression* $tmp1498 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1498, &$s1499);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1498, &$s1500);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1079
frost$core$RegularExpression* $tmp1501 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1501, &$s1502);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1501, &$s1503);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
// line 1080
frost$core$RegularExpression* $tmp1504 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1504, &$s1505);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1504, &$s1506);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1084
frost$core$RegularExpression* $tmp1507 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1507, &$s1508);
org$frostlang$frostc$frostdoc$Markdown$_Closure32* $tmp1509 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown($tmp1509, param0);
frost$core$MutableMethod* $tmp1511 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1511, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1509));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1507, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1511)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

// line 83
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1512 = &param0->source;
frost$io$File* $tmp1513 = *$tmp1512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$threads$MessageQueue** $tmp1514 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1515 = *$tmp1514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
org$frostlang$frostc$parser$Parser** $tmp1516 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1517 = *$tmp1516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$MutableMethod** $tmp1518 = &param0->linkResolver;
frost$core$MutableMethod* $tmp1519 = *$tmp1518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
frost$collections$HashMap** $tmp1520 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp1521 = *$tmp1520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
org$frostlang$frostc$frostdoc$Protector** $tmp1522 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1523 = *$tmp1522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
org$frostlang$frostc$frostdoc$Protector** $tmp1524 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1525 = *$tmp1524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
frost$math$Random** $tmp1526 = &param0->random;
frost$math$Random* $tmp1527 = *$tmp1526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
return;

}

