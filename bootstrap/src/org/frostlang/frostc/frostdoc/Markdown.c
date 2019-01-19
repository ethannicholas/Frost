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
org$frostlang$frostc$frostdoc$Markdown$class_type org$frostlang$frostc$frostdoc$Markdown$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$cleanup, org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT, org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString} };

typedef void (*$fn62)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn69)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn72)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn75)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn78)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn93)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn99)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef void (*$fn103)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn109)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn113)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn118)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn133)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn151)(org$frostlang$frostc$frostdoc$Markdown$_Closure2*, frost$collections$ListView*);
typedef void (*$fn155)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn157)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn159)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn161)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn163)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn165)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn167)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$collections$Iterator* (*$fn179)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn183)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn188)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn251)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn262)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn296)(org$frostlang$frostc$frostdoc$Markdown$_Closure4*, frost$collections$ListView*);
typedef frost$core$Int64 (*$fn425)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn453)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn472)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn508)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn520)(org$frostlang$frostc$frostdoc$Markdown$_Closure6*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn529)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn533)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn538)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn545)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn561)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn565)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn570)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn576)(frost$math$Random*);
typedef frost$core$Object* (*$fn632)(org$frostlang$frostc$frostdoc$Markdown$_Closure9*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn638)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn679)(frost$collections$ListView*);
typedef frost$core$String* (*$fn700)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn719)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn723)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn728)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn739)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn749)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn763)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn855)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn863)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn871)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn879)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn887)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn898)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn908)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn931)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn941)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn956)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn995)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1016)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1040)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1061)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1085)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1107)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1115)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef void (*$fn1123)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn1158)(org$frostlang$frostc$frostdoc$Markdown$_Closure12*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1168)(org$frostlang$frostc$frostdoc$Markdown$_Closure14*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1196)(org$frostlang$frostc$frostdoc$Markdown$_Closure16*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1226)(org$frostlang$frostc$frostdoc$Markdown$_Closure18*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1231)(org$frostlang$frostc$frostdoc$Markdown$_Closure20*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1239)(org$frostlang$frostc$frostdoc$Markdown$_Closure22*, frost$collections$ListView*);
typedef void (*$fn1243)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1245)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1247)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1249)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1251)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1253)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1255)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1257)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1259)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Bit (*$fn1312)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn1342)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$collections$ListView* (*$fn1360)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1366)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1370)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1375)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1393)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1403)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1413)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1423)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1460)(org$frostlang$frostc$frostdoc$Markdown$_Closure24*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1474)(org$frostlang$frostc$frostdoc$Markdown$_Closure26*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1504)(org$frostlang$frostc$frostdoc$Markdown$_Closure28*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1518)(org$frostlang$frostc$frostdoc$Markdown$_Closure30*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1538)(org$frostlang$frostc$frostdoc$Markdown$_Closure32*, frost$collections$ListView*);

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
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60\x5f\x3e\x21", 4, 203944687, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, -6003771304831432199, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 199795969, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x5c", 3, 1978177, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29", 4, 145926154, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 33, -4589409330981298645, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f", 10, -7697525032227164949, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 15, 4344893690925401026, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f", 24, -4892301784787365954, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 10, 7324187788974597826, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, -695802876960105267, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 5711149104113814898, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, 1703066247920, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70", 1, 213, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76", 3, 2061124, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x31", 2, 20754, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x32", 2, 20755, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x33", 2, 20756, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x34", 2, 20757, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x35", 2, 20758, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x36", 2, 20759, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -2536067448883908010, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65", 3, 2184428, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 22682056921, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6c", 2, 20409, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, 2280602224762, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, 22741103748248783, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d", 4, 210295037, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 21876880126472849, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, 2175813319029, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x68", 4, 217364527, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x73", 3, 2112631, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x6c", 3, 2060710, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 16803092312, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5e", 2, 14335, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28", 2, 16301, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 156491179351200, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, 4158029666834239703, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 20151576623, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 16796009060, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 1536684806687938687, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3f\x3e", 3, 1516173, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 47502487764265221, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, 4158029666834239703, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 20151576623, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a", 4, 145926777, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x21", 2, 16294, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, -4188240096700658567, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, -2921786165263253076, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 20197438560, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x23", 2, 14074, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 965728039488327577, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, -9204808912793336565, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static frost$core$String $s1125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static frost$core$String $s1137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static frost$core$String $s1139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static frost$core$String $s1190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static frost$core$String $s1212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s1218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static frost$core$String $s1229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static frost$core$String $s1235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static frost$core$String $s1261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static frost$core$String $s1262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static frost$core$String $s1266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static frost$core$String $s1281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s1282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -7424420126980993265, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static frost$core$String $s1291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static frost$core$String $s1293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s1405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s1425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static frost$core$String $s1445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static frost$core$String $s1448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static frost$core$String $s1451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static frost$core$String $s1491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static frost$core$String $s1495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static frost$core$String $s1499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static frost$core$String $s1509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s1513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static frost$core$String $s1525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s1533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static frost$core$String $s1534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s1536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

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
// unreffing REF($1:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 100
org$frostlang$frostc$parser$Parser* $tmp6 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue** $tmp7 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp8 = *$tmp7;
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT($tmp6, $tmp8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$parser$Parser** $tmp9 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$parser$Parser** $tmp11 = &param0->parser;
*$tmp11 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($16:org.frostlang.frostc.parser.Parser)
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
// unreffing REF($32:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.frostdoc.Markdown.LinkDefinition>)
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
// unreffing REF($47:org.frostlang.frostc.frostdoc.Protector)
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
// unreffing REF($61:org.frostlang.frostc.frostdoc.Protector)
// line 114
frost$math$Random* $tmp24 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$math$Random** $tmp25 = &param0->random;
frost$math$Random* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$math$Random** $tmp27 = &param0->random;
*$tmp27 = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($75:frost.math.Random)
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
// unreffing REF($92:frost.io.File)
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
// unreffing REF($117:org.frostlang.frostc.parser.SyntaxHighlighter)
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
// unreffing REF($1:frost.core.MutableString)
// line 131
frost$core$MutableString* $tmp46 = *(&local0);
frost$core$RegularExpression* $tmp47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp47, &$s48);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp46, $tmp47, &$s49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($15:frost.core.RegularExpression)
// line 132
frost$core$MutableString* $tmp50 = *(&local0);
frost$core$RegularExpression* $tmp51 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp51, &$s52);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp50, $tmp51, &$s53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($23:frost.core.RegularExpression)
// line 133
frost$core$MutableString* $tmp54 = *(&local0);
frost$core$RegularExpression* $tmp55 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp55, &$s56);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp54, $tmp55, &$s57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($31:frost.core.RegularExpression)
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
// unreffing REF($46:frost.core.RegularExpression)
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
frost$core$String* $tmp82 = frost$core$MutableString$convert$R$frost$core$String($tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($73:frost.core.String)
frost$core$MutableString* $tmp83 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing text
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp82;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// line 150
frost$collections$ListView* $tmp84 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s85);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$collections$ListView* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($1:frost.collections.ListView<frost.core.Char8>)
// line 151
frost$collections$ListView* $tmp87 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s88);
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$collections$ListView* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local1) = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing REF($13:frost.collections.ListView<frost.core.Char8>)
// line 154
org$frostlang$frostc$frostdoc$Protector** $tmp90 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp91 = *$tmp90;
$fn93 $tmp92 = ($fn93) $tmp91->$class->vtable[2];
frost$core$String* $tmp94 = $tmp92($tmp91, &$s95);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s96, $tmp94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($28:frost.core.String)
// line 157
frost$collections$ListView* $tmp97 = *(&local0);
$fn99 $tmp98 = ($fn99) param0->$class->vtable[4];
$tmp98(param0, param1, $tmp97, &$s100);
// line 158
frost$collections$ListView* $tmp101 = *(&local1);
$fn103 $tmp102 = ($fn103) param0->$class->vtable[4];
$tmp102(param0, param1, $tmp101, &$s104);
frost$collections$ListView* $tmp105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing escapedChars
*(&local1) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp106 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing normalChars
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1, frost$collections$ListView* param2, frost$core$String* param3) {

frost$core$Char8 local0;
frost$core$RegularExpression* local1 = NULL;
// line 162
ITable* $tmp107 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$collections$Iterator* $tmp110 = $tmp108(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp111 = $tmp110->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Bit $tmp114 = $tmp112($tmp110);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block3; else goto block2;
block2:;
ITable* $tmp116 = $tmp110->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[1];
frost$core$Object* $tmp119 = $tmp117($tmp110);
*(&local0) = ((frost$core$Char8$wrapper*) $tmp119)->value;
// line 163
frost$core$RegularExpression* $tmp120 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s122, param3);
frost$core$Char8 $tmp123 = *(&local0);
frost$core$Char8$wrapper* $tmp124;
$tmp124 = (frost$core$Char8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp124->value = $tmp123;
frost$core$String* $tmp125 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp121, ((frost$core$Object*) $tmp124));
frost$core$RegularExpression$init$frost$core$String($tmp120, $tmp125);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$RegularExpression* $tmp126 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local1) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($22:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($21:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($18:frost.core.RegularExpression)
// line 164
frost$core$RegularExpression* $tmp127 = *(&local1);
org$frostlang$frostc$frostdoc$Protector** $tmp128 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp129 = *$tmp128;
frost$core$Char8 $tmp130 = *(&local0);
frost$core$String* $tmp131 = frost$core$Char8$convert$R$frost$core$String($tmp130);
$fn133 $tmp132 = ($fn133) $tmp129->$class->vtable[2];
frost$core$String* $tmp134 = $tmp132($tmp129, $tmp131);
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit(false);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(param1, $tmp127, $tmp134, $tmp135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($48:frost.core.String)
frost$core$RegularExpression* $tmp136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing regex
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
// unreffing REF($14:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 169
frost$core$RegularExpression* $tmp137 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s139, &$s140);
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp138, &$s142);
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp141, &$s144);
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, &$s146);
frost$core$Int64 $tmp147 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp137, $tmp145, $tmp147);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$RegularExpression* $tmp148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local0) = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing REF($1:frost.core.RegularExpression)
// line 177
frost$core$RegularExpression* $tmp149 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure2* $tmp150 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure2$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown($tmp150, param0);
frost$core$MutableMethod* $tmp152 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp152, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp150));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp149, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp152)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($35:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($32:org.frostlang.frostc.frostdoc.Markdown._Closure2)
frost$core$RegularExpression* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing p
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
void org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
// line 209
frost$collections$Array* $tmp168 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp168);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$collections$Array* $tmp169 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local0) = $tmp168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 210
frost$collections$Array* $tmp170 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp170, ((frost$core$Object*) &$s171));
// line 211
frost$collections$Array* $tmp172 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp172, ((frost$core$Object*) &$s173));
// line 212
frost$collections$Array* $tmp174 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp174, ((frost$core$Object*) &$s175));
// line 213
frost$collections$Array* $tmp176 = *(&local0);
ITable* $tmp177 = ((frost$collections$Iterable*) $tmp176)->$class->itable;
while ($tmp177->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[0];
frost$collections$Iterator* $tmp180 = $tmp178(((frost$collections$Iterable*) $tmp176));
goto block1;
block1:;
ITable* $tmp181 = $tmp180->$class->itable;
while ($tmp181->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp181 = $tmp181->next;
}
$fn183 $tmp182 = $tmp181->methods[0];
frost$core$Bit $tmp184 = $tmp182($tmp180);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp186 = $tmp180->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[1];
frost$core$Object* $tmp189 = $tmp187($tmp180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp189)));
frost$core$String* $tmp190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local1) = ((frost$core$String*) $tmp189);
// line 214
frost$core$RegularExpression* $tmp191 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp192 = *(&local1);
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s194, $tmp192);
frost$core$String* $tmp195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp193, &$s196);
frost$core$RegularExpression$init$frost$core$String($tmp191, $tmp195);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp191, &$s197);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($57:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($54:frost.core.RegularExpression)
frost$core$Frost$unref$frost$core$Object$Q($tmp189);
// unreffing REF($45:frost.collections.Iterator.T)
frost$core$String* $tmp198 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing hrDelimiter
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing REF($34:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing hrDelimiters
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
frost$collections$Array* $tmp200 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp200);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$collections$Array* $tmp201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local0) = $tmp200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 228
frost$collections$Array* $tmp202 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp202, ((frost$core$Object*) &$s203));
// line 229
frost$collections$Array* $tmp204 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp204, ((frost$core$Object*) &$s205));
// line 230
frost$collections$Array* $tmp206 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp206, ((frost$core$Object*) &$s207));
// line 231
frost$collections$Array* $tmp208 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp208, ((frost$core$Object*) &$s209));
// line 232
frost$collections$Array* $tmp210 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp210, ((frost$core$Object*) &$s211));
// line 233
frost$collections$Array* $tmp212 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp212, ((frost$core$Object*) &$s213));
// line 234
frost$collections$Array* $tmp214 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp214, ((frost$core$Object*) &$s215));
// line 235
frost$collections$Array* $tmp216 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp216, ((frost$core$Object*) &$s217));
// line 236
frost$collections$Array* $tmp218 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp218, ((frost$core$Object*) &$s219));
// line 237
frost$collections$Array* $tmp220 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp220, ((frost$core$Object*) &$s221));
// line 238
frost$collections$Array* $tmp222 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp222, ((frost$core$Object*) &$s223));
// line 239
frost$collections$Array* $tmp224 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp224, ((frost$core$Object*) &$s225));
// line 240
frost$collections$Array* $tmp226 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp226, ((frost$core$Object*) &$s227));
// line 241
frost$collections$Array* $tmp228 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp228, ((frost$core$Object*) &$s229));
// line 242
frost$collections$Array* $tmp230 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp230, ((frost$core$Object*) &$s231));
// line 243
frost$collections$Array* $tmp232 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp232, ((frost$core$Object*) &$s233));
// line 244
frost$collections$Array* $tmp234 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp234, ((frost$core$Object*) &$s235));
// line 245
frost$collections$Array* $tmp236 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp236, ((frost$core$Object*) &$s237));
// line 246
frost$collections$Array* $tmp238 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp238, ((frost$core$Object*) &$s239));
// line 247
frost$collections$Array* $tmp240 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp240, ((frost$core$Object*) &$s241));
// line 248
frost$collections$Array* $tmp242 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp242);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$collections$Array* $tmp243 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local1) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($115:frost.collections.Array<frost.core.String>)
// line 249
frost$collections$Array* $tmp244 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp244, ((frost$core$Object*) &$s245));
// line 250
frost$collections$Array* $tmp246 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp246, ((frost$core$Object*) &$s247));
// line 252
frost$collections$Array* $tmp248 = *(&local0);
ITable* $tmp249 = ((frost$collections$CollectionView*) $tmp248)->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[2];
frost$core$String* $tmp252 = $tmp250(((frost$collections$CollectionView*) $tmp248), &$s253);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$String* $tmp254 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local2) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($142:frost.core.String)
// line 253
frost$core$String* $tmp255 = *(&local2);
frost$core$String* $tmp256 = frost$core$String$convert$R$frost$core$String($tmp255);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s258);
frost$collections$Array* $tmp259 = *(&local1);
ITable* $tmp260 = ((frost$collections$CollectionView*) $tmp259)->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[2];
frost$core$String* $tmp263 = $tmp261(((frost$collections$CollectionView*) $tmp259), &$s264);
frost$core$String* $tmp265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp257, $tmp263);
frost$core$String* $tmp266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp265, &$s267);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$String* $tmp268 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local3) = $tmp266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($162:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($161:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($160:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($156:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($155:frost.core.String)
// line 255
frost$core$Int64 $tmp269 = (frost$core$Int64) {4};
frost$core$Int64 $tmp270 = (frost$core$Int64) {1};
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271 - $tmp272;
frost$core$Int64 $tmp274 = (frost$core$Int64) {$tmp273};
*(&local4) = $tmp274;
// line 268
frost$core$RegularExpression* $tmp275 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp276 = *(&local2);
frost$core$String* $tmp277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s278, $tmp276);
frost$core$String* $tmp279 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp277, &$s280);
frost$core$String* $tmp281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp279, &$s282);
frost$core$String* $tmp283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp281, &$s284);
frost$core$String* $tmp285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp283, &$s286);
frost$core$String* $tmp287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp285, &$s288);
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp287, &$s290);
frost$core$Int64 $tmp291 = (frost$core$Int64) {1};
frost$core$Int64 $tmp292 = (frost$core$Int64) {2};
frost$core$Int64 $tmp293 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp291, $tmp292);
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp275, $tmp289, $tmp293);
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$RegularExpression* $tmp294 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local5) = $tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing REF($202:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing REF($201:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($200:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($199:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing REF($198:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($197:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing REF($196:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($194:frost.core.RegularExpression)
// line 277
org$frostlang$frostc$frostdoc$Markdown$_Closure4* $tmp295 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure4$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure4$init$org$frostlang$frostc$frostdoc$Markdown($tmp295, param0);
frost$core$MutableMethod* $tmp297 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp297, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp295));
// line 277
*(&local6) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Method*) $tmp297)));
frost$core$Method* $tmp298 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local6) = ((frost$core$Method*) $tmp297);
// line 281
frost$core$RegularExpression* $tmp299 = *(&local5);
frost$core$Method* $tmp300 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp299, ((frost$core$MutableMethod*) $tmp300));
// line 284
frost$core$RegularExpression* $tmp301 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s303, &$s304);
frost$core$String* $tmp305 = *(&local3);
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp302, $tmp305);
frost$core$String* $tmp307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp306, &$s308);
frost$core$String* $tmp309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp307, &$s310);
frost$core$String* $tmp311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp309, &$s312);
frost$core$String* $tmp313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp311, &$s314);
frost$core$String* $tmp315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp313, &$s316);
frost$core$String* $tmp317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp315, &$s318);
frost$core$Int64 $tmp319 = (frost$core$Int64) {1};
frost$core$Int64 $tmp320 = (frost$core$Int64) {2};
frost$core$Int64 $tmp321 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp319, $tmp320);
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp301, $tmp317, $tmp321);
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$RegularExpression* $tmp322 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local7) = $tmp301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing REF($269:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($268:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($267:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing REF($266:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($265:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($264:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($263:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($261:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing REF($260:frost.core.RegularExpression)
// line 293
frost$core$RegularExpression* $tmp323 = *(&local7);
frost$core$Method* $tmp324 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp323, ((frost$core$MutableMethod*) $tmp324));
// line 296
frost$core$RegularExpression* $tmp325 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s327, &$s328);
frost$core$String* $tmp329 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp326, &$s330);
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp329, &$s332);
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s334);
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, &$s336);
frost$core$Int64 $tmp337 = *(&local4);
frost$core$Int64$wrapper* $tmp338;
$tmp338 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp338->value = $tmp337;
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp335, ((frost$core$Object*) $tmp338));
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, &$s341);
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, &$s343);
frost$core$String* $tmp344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, &$s345);
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp344, &$s347);
frost$core$String* $tmp348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, &$s349);
frost$core$String* $tmp350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp348, &$s351);
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp350, &$s353);
frost$core$Int64 $tmp354 = (frost$core$Int64) {2};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp325, $tmp352, $tmp354);
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$RegularExpression* $tmp355 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local8) = $tmp325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($328:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// unreffing REF($327:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing REF($326:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($325:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($324:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($323:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing REF($322:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($321:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// unreffing REF($319:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing REF($318:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($317:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing REF($316:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// unreffing REF($315:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// unreffing REF($314:frost.core.RegularExpression)
// line 310
frost$core$RegularExpression* $tmp356 = *(&local8);
frost$core$Method* $tmp357 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp356, ((frost$core$MutableMethod*) $tmp357));
// line 313
frost$core$RegularExpression* $tmp358 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s360, &$s361);
frost$core$String* $tmp362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp359, &$s363);
frost$core$String* $tmp364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp362, &$s365);
frost$core$String* $tmp366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp364, &$s367);
frost$core$String* $tmp368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp366, &$s369);
frost$core$Int64 $tmp370 = *(&local4);
frost$core$Int64$wrapper* $tmp371;
$tmp371 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp371->value = $tmp370;
frost$core$String* $tmp372 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp368, ((frost$core$Object*) $tmp371));
frost$core$String* $tmp373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp372, &$s374);
frost$core$String* $tmp375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp373, &$s376);
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp375, &$s378);
frost$core$String* $tmp379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp377, &$s380);
frost$core$String* $tmp381 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp379, &$s382);
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp381, &$s384);
frost$core$String* $tmp385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp383, &$s386);
frost$core$String* $tmp387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp385, &$s388);
frost$core$String* $tmp389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp387, &$s390);
frost$core$RegularExpression$init$frost$core$String($tmp358, $tmp389);
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$RegularExpression* $tmp391 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local9) = $tmp358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
// unreffing REF($407:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing REF($406:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing REF($405:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// unreffing REF($404:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// unreffing REF($403:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing REF($402:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
// unreffing REF($401:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing REF($400:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing REF($399:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// unreffing REF($398:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing REF($397:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing REF($395:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($394:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($393:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing REF($392:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing REF($391:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing REF($390:frost.core.RegularExpression)
// line 328
frost$core$RegularExpression* $tmp392 = *(&local9);
frost$core$Method* $tmp393 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp392, ((frost$core$MutableMethod*) $tmp393));
frost$core$RegularExpression* $tmp394 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// unreffing p4
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp395 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing p3
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp396 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// unreffing p2
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$Method* $tmp397 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// unreffing protectHTML
*(&local6) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// unreffing REF($242:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($239:org.frostlang.frostc.frostdoc.Markdown._Closure4)
frost$core$RegularExpression* $tmp398 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// unreffing p1
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp399 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing alternationB
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp400 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// unreffing alternationA
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp401 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing tagsB
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp402 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// unreffing tagsA
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
frost$core$RegularExpression* $tmp403 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp403, &$s404);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp403, &$s405);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($1:frost.core.RegularExpression)
// line 333
frost$core$RegularExpression* $tmp406 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp406, &$s407);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp406, &$s408);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($8:frost.core.RegularExpression)
// line 335
*(&local0) = ((frost$collections$Array*) NULL);
// line 336
frost$core$Int64 $tmp409 = frost$core$MutableString$get_byteLength$R$frost$core$Int64(param1);
frost$core$Int64 $tmp410 = (frost$core$Int64) {0};
frost$core$Bit $tmp411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp409, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block1; else goto block3;
block1:;
// line 337
frost$collections$Array* $tmp413 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp413);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$collections$Array* $tmp414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = $tmp413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// unreffing REF($23:frost.collections.Array<frost.core.String>)
goto block2;
block3:;
// line 1
// line 339
frost$collections$Array* $tmp415 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$String* $tmp416 = frost$core$MutableString$convert$R$frost$core$String(param1);
frost$core$RegularExpression* $tmp417 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp417, &$s418);
frost$collections$Array* $tmp419 = frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT($tmp416, $tmp417);
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp415, ((frost$collections$ListView*) $tmp419));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$collections$Array* $tmp420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local0) = $tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing REF($43:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// unreffing REF($41:frost.core.RegularExpression)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($38:frost.collections.Array<frost.core.String>)
goto block2;
block2:;
// line 341
frost$core$Int64 $tmp421 = (frost$core$Int64) {0};
frost$collections$Array* $tmp422 = *(&local0);
ITable* $tmp423 = ((frost$collections$CollectionView*) $tmp422)->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[0];
frost$core$Int64 $tmp426 = $tmp424(((frost$collections$CollectionView*) $tmp422));
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp428 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp421, $tmp426, $tmp427);
frost$core$Int64 $tmp429 = $tmp428.min;
*(&local1) = $tmp429;
frost$core$Int64 $tmp430 = $tmp428.max;
frost$core$Bit $tmp431 = $tmp428.inclusive;
bool $tmp432 = $tmp431.value;
frost$core$Int64 $tmp433 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp434 = frost$core$Int64$convert$R$frost$core$UInt64($tmp433);
if ($tmp432) goto block7; else goto block8;
block7:;
int64_t $tmp435 = $tmp429.value;
int64_t $tmp436 = $tmp430.value;
bool $tmp437 = $tmp435 <= $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block4; else goto block5;
block8:;
int64_t $tmp440 = $tmp429.value;
int64_t $tmp441 = $tmp430.value;
bool $tmp442 = $tmp440 < $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block4; else goto block5;
block4:;
// line 342
frost$collections$Array* $tmp445 = *(&local0);
frost$core$Int64 $tmp446 = *(&local1);
frost$core$Object* $tmp447 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp445, $tmp446);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp447)));
frost$core$String* $tmp448 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local2) = ((frost$core$String*) $tmp447);
frost$core$Frost$unref$frost$core$Object$Q($tmp447);
// unreffing REF($98:frost.collections.Array.T)
// line 343
org$frostlang$frostc$frostdoc$Protector** $tmp449 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp450 = *$tmp449;
frost$core$String* $tmp451 = *(&local2);
$fn453 $tmp452 = ($fn453) $tmp450->$class->vtable[3];
frost$core$String* $tmp454 = $tmp452($tmp450, $tmp451);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$String* $tmp455 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local3) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($115:frost.core.String?)
// line 344
frost$core$String* $tmp456 = *(&local3);
frost$core$Bit $tmp457 = frost$core$Bit$init$builtin_bit($tmp456 != NULL);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block9; else goto block11;
block9:;
// line 345
frost$collections$Array* $tmp459 = *(&local0);
frost$core$Int64 $tmp460 = *(&local1);
frost$core$String* $tmp461 = *(&local3);
frost$core$Bit $tmp462 = frost$core$Bit$init$builtin_bit($tmp461 != NULL);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp464 = (frost$core$Int64) {345};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s465, $tmp464, &$s466);
abort(); // unreachable
block12:;
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp459, $tmp460, ((frost$core$Object*) $tmp461));
goto block10;
block11:;
// line 1
// line 348
frost$core$MutableString* $tmp467 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp468 = *(&local2);
frost$core$MutableString$init$frost$core$String($tmp467, $tmp468);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$MutableString* $tmp469 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local4) = $tmp467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// unreffing REF($150:frost.core.MutableString)
// line 349
frost$core$MutableString* $tmp470 = *(&local4);
$fn472 $tmp471 = ($fn472) param0->$class->vtable[22];
$tmp471(param0, $tmp470);
// line 350
frost$collections$Array* $tmp473 = *(&local0);
frost$core$Int64 $tmp474 = *(&local1);
frost$core$MutableString* $tmp475 = *(&local4);
frost$core$String* $tmp476 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s477, ((frost$core$Object*) $tmp475));
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp476, &$s479);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp473, $tmp474, ((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing REF($174:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing REF($173:frost.core.String)
frost$core$MutableString* $tmp480 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing mutable
*(&local4) = ((frost$core$MutableString*) NULL);
goto block10;
block10:;
frost$core$String* $tmp481 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// unreffing decoded
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp482 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing paragraph
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block6:;
frost$core$Int64 $tmp483 = *(&local1);
int64_t $tmp484 = $tmp430.value;
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484 - $tmp485;
frost$core$Int64 $tmp487 = (frost$core$Int64) {$tmp486};
frost$core$UInt64 $tmp488 = frost$core$Int64$convert$R$frost$core$UInt64($tmp487);
if ($tmp432) goto block15; else goto block16;
block15:;
uint64_t $tmp489 = $tmp488.value;
uint64_t $tmp490 = $tmp434.value;
bool $tmp491 = $tmp489 >= $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block14; else goto block5;
block16:;
uint64_t $tmp494 = $tmp488.value;
uint64_t $tmp495 = $tmp434.value;
bool $tmp496 = $tmp494 > $tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block14; else goto block5;
block14:;
int64_t $tmp499 = $tmp483.value;
int64_t $tmp500 = $tmp433.value;
int64_t $tmp501 = $tmp499 + $tmp500;
frost$core$Int64 $tmp502 = (frost$core$Int64) {$tmp501};
*(&local1) = $tmp502;
goto block4;
block5:;
// line 353
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp504 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp503);
frost$collections$Array* $tmp505 = *(&local0);
ITable* $tmp506 = ((frost$collections$CollectionView*) $tmp505)->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[2];
frost$core$String* $tmp509 = $tmp507(((frost$collections$CollectionView*) $tmp505), &$s510);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp504, $tmp509);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// unreffing REF($231:frost.core.String)
frost$collections$Array* $tmp511 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// unreffing paragraphs
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 357
frost$core$RegularExpression* $tmp512 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp512, &$s513);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp512, &$s514);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing REF($1:frost.core.RegularExpression)
// line 358
frost$core$RegularExpression* $tmp515 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp515, &$s516);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$RegularExpression* $tmp517 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local0) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// unreffing REF($8:frost.core.RegularExpression)
// line 359
frost$core$RegularExpression* $tmp518 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure6* $tmp519 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown($tmp519, param0);
frost$core$MutableMethod* $tmp521 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp521, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp519));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp518, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp521)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
// unreffing REF($25:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing REF($22:org.frostlang.frostc.frostdoc.Markdown._Closure6)
frost$core$RegularExpression* $tmp522 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing email
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 370
org$frostlang$frostc$frostdoc$Protector** $tmp523 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp524 = *$tmp523;
frost$collections$HashMap** $tmp525 = &$tmp524->decodeMap;
frost$collections$HashMap* $tmp526 = *$tmp525;
ITable* $tmp527 = ((frost$collections$MapView*) $tmp526)->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[3];
frost$collections$Iterator* $tmp530 = $tmp528(((frost$collections$MapView*) $tmp526));
goto block1;
block1:;
ITable* $tmp531 = $tmp530->$class->itable;
while ($tmp531->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[0];
frost$core$Bit $tmp534 = $tmp532($tmp530);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp536 = $tmp530->$class->itable;
while ($tmp536->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp536 = $tmp536->next;
}
$fn538 $tmp537 = $tmp536->methods[1];
frost$core$Object* $tmp539 = $tmp537($tmp530);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp539)));
frost$core$String* $tmp540 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local0) = ((frost$core$String*) $tmp539);
// line 371
org$frostlang$frostc$frostdoc$Protector** $tmp541 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp542 = *$tmp541;
frost$core$String* $tmp543 = *(&local0);
$fn545 $tmp544 = ($fn545) $tmp542->$class->vtable[3];
frost$core$String* $tmp546 = $tmp544($tmp542, $tmp543);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$String* $tmp547 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local1) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing REF($31:frost.core.String?)
// line 372
frost$core$String* $tmp548 = *(&local0);
frost$core$String* $tmp549 = *(&local1);
frost$core$Bit $tmp550 = frost$core$Bit$init$builtin_bit($tmp549 != NULL);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp552 = (frost$core$Int64) {372};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s553, $tmp552, &$s554);
abort(); // unreachable
block4:;
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, $tmp548, $tmp549);
frost$core$String* $tmp555 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing plaintext
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp539);
// unreffing REF($18:frost.collections.Iterator.T)
frost$core$String* $tmp556 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing hash
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// unreffing REF($7:frost.collections.Iterator<frost.collections.MapView.K>)
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Real64 local2;
// line 377
frost$core$MutableString* $tmp557 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp557);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$MutableString* $tmp558 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local0) = $tmp557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing REF($1:frost.core.MutableString)
// line 378
ITable* $tmp559 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp559->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[0];
frost$collections$Iterator* $tmp562 = $tmp560(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp563 = $tmp562->$class->itable;
while ($tmp563->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
frost$core$Bit $tmp566 = $tmp564($tmp562);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block3; else goto block2;
block2:;
ITable* $tmp568 = $tmp562->$class->itable;
while ($tmp568->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[1];
frost$core$Object* $tmp571 = $tmp569($tmp562);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp571)->value;
// line 380
frost$math$Random** $tmp572 = &param0->random;
frost$math$Random* $tmp573 = *$tmp572;
ITable* $tmp574 = $tmp573->$class->itable;
while ($tmp574->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp574 = $tmp574->next;
}
$fn576 $tmp575 = $tmp574->methods[5];
frost$core$Real64 $tmp577 = $tmp575($tmp573);
*(&local2) = $tmp577;
// line 381
frost$core$Real64 $tmp578 = *(&local2);
frost$core$Real64 $tmp579 = (frost$core$Real64) {0.45};
double $tmp580 = $tmp578.value;
double $tmp581 = $tmp579.value;
bool $tmp582 = $tmp580 < $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block4; else goto block6;
block4:;
// line 382
frost$core$MutableString* $tmp585 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp585, &$s586);
// line 383
frost$core$MutableString* $tmp587 = *(&local0);
frost$core$Char32 $tmp588 = *(&local1);
frost$core$Int32 $tmp589 = frost$core$Char32$convert$R$frost$core$Int32($tmp588);
frost$core$Int32$wrapper* $tmp590;
$tmp590 = (frost$core$Int32$wrapper*) frostObjectAlloc(16, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp590->value = $tmp589;
frost$core$MutableString$append$frost$core$Object($tmp587, ((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($52:frost.core.Object)
// line 384
frost$core$MutableString* $tmp591 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp591, &$s592);
goto block5;
block6:;
// line 386
frost$core$Real64 $tmp593 = *(&local2);
frost$core$Real64 $tmp594 = (frost$core$Real64) {0.9};
double $tmp595 = $tmp593.value;
double $tmp596 = $tmp594.value;
bool $tmp597 = $tmp595 < $tmp596;
frost$core$Bit $tmp598 = (frost$core$Bit) {$tmp597};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block7; else goto block9;
block7:;
// line 387
frost$core$MutableString* $tmp600 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp600, &$s601);
// line 388
frost$core$MutableString* $tmp602 = *(&local0);
frost$core$Char32 $tmp603 = *(&local1);
frost$core$Int32 $tmp604 = frost$core$Char32$convert$R$frost$core$Int32($tmp603);
frost$core$String* $tmp605 = frost$core$Int32$format$frost$core$String$R$frost$core$String($tmp604, &$s606);
frost$core$MutableString$append$frost$core$String($tmp602, $tmp605);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// unreffing REF($77:frost.core.String)
// line 389
frost$core$MutableString* $tmp607 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp607, &$s608);
goto block8;
block9:;
// line 1
// line 392
frost$core$MutableString* $tmp609 = *(&local0);
frost$core$Char32 $tmp610 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp609, $tmp610);
goto block8;
block8:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp571);
// unreffing REF($27:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($17:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 395
frost$core$MutableString* $tmp611 = *(&local0);
frost$core$String* $tmp612 = frost$core$MutableString$convert$R$frost$core$String($tmp611);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// unreffing REF($102:frost.core.String)
frost$core$MutableString* $tmp613 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp612;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 399
frost$core$RegularExpression* $tmp614 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s616, &$s617);
frost$core$String* $tmp618 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp615, &$s619);
frost$core$String* $tmp620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp618, &$s621);
frost$core$String* $tmp622 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp620, &$s623);
frost$core$String* $tmp624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp622, &$s625);
frost$core$String* $tmp626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp624, &$s627);
frost$core$Int64 $tmp628 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp614, $tmp626, $tmp628);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$RegularExpression* $tmp629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local0) = $tmp614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing REF($1:frost.core.RegularExpression)
// line 408
frost$core$RegularExpression* $tmp630 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure9* $tmp631 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown($tmp631, param0);
frost$core$MutableMethod* $tmp633 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp633, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp631));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp630, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp633)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing REF($43:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($40:org.frostlang.frostc.frostdoc.Markdown._Closure9)
frost$core$RegularExpression* $tmp634 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing p
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* param0) {

frost$core$String* local0 = NULL;
frost$core$Int64 local1;
frost$core$MutableString* local2 = NULL;
// line 423
frost$core$Int64 $tmp635 = (frost$core$Int64) {1};
ITable* $tmp636 = param0->$class->itable;
while ($tmp636->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp636 = $tmp636->next;
}
$fn638 $tmp637 = $tmp636->methods[0];
frost$core$Object* $tmp639 = $tmp637(param0, $tmp635);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp639)));
frost$core$String* $tmp640 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local0) = ((frost$core$String*) $tmp639);
frost$core$Frost$unref$frost$core$Object$Q($tmp639);
// unreffing REF($4:frost.collections.ListView.T)
// line 424
frost$core$String* $tmp641 = *(&local0);
frost$core$Bit $tmp642 = frost$core$Bit$init$builtin_bit($tmp641 != NULL);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp644 = (frost$core$Int64) {424};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s645, $tmp644, &$s646);
abort(); // unreachable
block1:;
frost$core$Int64 $tmp647 = frost$core$String$get_length$R$frost$core$Int64($tmp641);
*(&local1) = $tmp647;
// line 425
frost$core$MutableString* $tmp648 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp649 = *(&local0);
frost$core$Bit $tmp650 = frost$core$Bit$init$builtin_bit($tmp649 != NULL);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp652 = (frost$core$Int64) {425};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s653, $tmp652, &$s654);
abort(); // unreachable
block3:;
frost$core$MutableString$init$frost$core$String($tmp648, $tmp649);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$MutableString* $tmp655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local2) = $tmp648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing REF($29:frost.core.MutableString)
// line 426
goto block5;
block5:;
// line 427
frost$core$MutableString* $tmp656 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp656, &$s657);
// line 428
frost$core$Int64 $tmp658 = *(&local1);
frost$core$Int64 $tmp659 = (frost$core$Int64) {1};
int64_t $tmp660 = $tmp658.value;
int64_t $tmp661 = $tmp659.value;
int64_t $tmp662 = $tmp660 + $tmp661;
frost$core$Int64 $tmp663 = (frost$core$Int64) {$tmp662};
*(&local1) = $tmp663;
goto block6;
block6:;
frost$core$Int64 $tmp664 = *(&local1);
frost$core$Int64 $tmp665 = (frost$core$Int64) {4};
frost$core$Int64 $tmp666 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp664, $tmp665);
frost$core$Int64 $tmp667 = (frost$core$Int64) {0};
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667.value;
bool $tmp670 = $tmp668 != $tmp669;
frost$core$Bit $tmp671 = (frost$core$Bit) {$tmp670};
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block5; else goto block7;
block7:;
// line 431
frost$core$MutableString* $tmp673 = *(&local2);
frost$core$String* $tmp674 = frost$core$MutableString$convert$R$frost$core$String($tmp673);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing REF($76:frost.core.String)
frost$core$MutableString* $tmp675 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing replacement
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing lineSoFar
*(&local0) = ((frost$core$String*) NULL);
return $tmp674;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 422
frost$core$RegularExpression* $tmp677 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp677, &$s678);
frost$core$Method* $tmp680 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp680, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Immutable*) NULL));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp677, ((frost$core$MutableMethod*) $tmp680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing REF($4:frost.core.Method)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

// line 437
frost$core$RegularExpression* $tmp681 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp681, &$s682);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param0, $tmp681, &$s683);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 493
frost$core$RegularExpression* $tmp684 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s686, &$s687);
frost$core$String* $tmp688 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp685, &$s689);
frost$core$String* $tmp690 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp688, &$s691);
frost$core$String* $tmp692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp690, &$s693);
frost$core$String* $tmp694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp692, &$s695);
frost$core$Int64 $tmp696 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp684, $tmp694, $tmp696);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$RegularExpression* $tmp697 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local0) = $tmp684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($1:frost.core.RegularExpression)
// line 501
frost$core$RegularExpression* $tmp698 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp699 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown($tmp699, param0);
frost$core$MutableMethod* $tmp701 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp701, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp699));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp698, $tmp701);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($39:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing REF($36:org.frostlang.frostc.frostdoc.Markdown.CodeReplacer)
frost$core$RegularExpression* $tmp702 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing p
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, org$frostlang$frostc$parser$Parser* param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$Pair* local2 = NULL;
frost$core$Bit local3;
frost$core$MutableString* local4 = NULL;
frost$core$Bit local5;
frost$core$Bit local6;
// line 505
frost$core$MutableString* $tmp703 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp703, &$s704);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$MutableString* $tmp705 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local0) = $tmp703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing REF($1:frost.core.MutableString)
// line 506
frost$core$Int64 $tmp706 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp707 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp706);
*(&local1) = $tmp707;
// line 507
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp708 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp709 = *$tmp708;
frost$core$Bit $tmp710 = frost$core$Bit$init$builtin_bit($tmp709 != NULL);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp712 = (frost$core$Int64) {507};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s713, $tmp712, &$s714);
abort(); // unreachable
block1:;
frost$collections$Array** $tmp715 = &$tmp709->tokens;
frost$collections$Array* $tmp716 = *$tmp715;
ITable* $tmp717 = ((frost$collections$Iterable*) $tmp716)->$class->itable;
while ($tmp717->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp717 = $tmp717->next;
}
$fn719 $tmp718 = $tmp717->methods[0];
frost$collections$Iterator* $tmp720 = $tmp718(((frost$collections$Iterable*) $tmp716));
goto block3;
block3:;
ITable* $tmp721 = $tmp720->$class->itable;
while ($tmp721->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp721 = $tmp721->next;
}
$fn723 $tmp722 = $tmp721->methods[0];
frost$core$Bit $tmp724 = $tmp722($tmp720);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp726 = $tmp720->$class->itable;
while ($tmp726->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp726 = $tmp726->next;
}
$fn728 $tmp727 = $tmp726->methods[1];
frost$core$Object* $tmp729 = $tmp727($tmp720);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp729)));
org$frostlang$frostc$Pair* $tmp730 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp729);
// line 508
org$frostlang$frostc$Pair* $tmp731 = *(&local2);
frost$core$Object** $tmp732 = &$tmp731->second;
frost$core$Object* $tmp733 = *$tmp732;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp734;
$tmp734 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp734->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp733)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp735 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp736;
$tmp736 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp736->value = $tmp735;
ITable* $tmp737 = ((frost$core$Equatable*) $tmp734)->$class->itable;
while ($tmp737->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp737 = $tmp737->next;
}
$fn739 $tmp738 = $tmp737->methods[1];
frost$core$Bit $tmp740 = $tmp738(((frost$core$Equatable*) $tmp734), ((frost$core$Equatable*) $tmp736));
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block8; else goto block9;
block8:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp742 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp743;
$tmp743 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp743->value = $tmp742;
frost$core$Int64 $tmp744 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp745 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp744);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp746;
$tmp746 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp746->value = $tmp745;
ITable* $tmp747 = ((frost$core$Equatable*) $tmp743)->$class->itable;
while ($tmp747->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp747 = $tmp747->next;
}
$fn749 $tmp748 = $tmp747->methods[1];
frost$core$Bit $tmp750 = $tmp748(((frost$core$Equatable*) $tmp743), ((frost$core$Equatable*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp746)));
// unreffing REF($71:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp743)));
// unreffing REF($67:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp750;
goto block10;
block9:;
*(&local3) = $tmp740;
goto block10;
block10:;
frost$core$Bit $tmp751 = *(&local3);
bool $tmp752 = $tmp751.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp736)));
// unreffing REF($61:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp734)));
// unreffing REF($58:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp752) goto block6; else goto block7;
block6:;
// line 509
frost$core$MutableString* $tmp753 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp753, &$s754);
goto block7;
block7:;
// line 511
org$frostlang$frostc$Pair* $tmp755 = *(&local2);
frost$core$Object** $tmp756 = &$tmp755->second;
frost$core$Object* $tmp757 = *$tmp756;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp758;
$tmp758 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp758->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp757)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp759 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp760;
$tmp760 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp760->value = $tmp759;
ITable* $tmp761 = ((frost$core$Equatable*) $tmp758)->$class->itable;
while ($tmp761->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp761 = $tmp761->next;
}
$fn763 $tmp762 = $tmp761->methods[1];
frost$core$Bit $tmp764 = $tmp762(((frost$core$Equatable*) $tmp758), ((frost$core$Equatable*) $tmp760));
bool $tmp765 = $tmp764.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp760)));
// unreffing REF($106:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp758)));
// unreffing REF($103:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp765) goto block11; else goto block12;
block11:;
// line 512
org$frostlang$frostc$Pair* $tmp766 = *(&local2);
frost$core$Object** $tmp767 = &$tmp766->second;
frost$core$Object* $tmp768 = *$tmp767;
*(&local1) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp768)->value;
// line 513
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp769 = *(&local1);
frost$core$Int64 $tmp770 = $tmp769.$rawValue;
frost$core$Int64 $tmp771 = (frost$core$Int64) {0};
frost$core$Bit $tmp772 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp771);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block14; else goto block15;
block14:;
goto block13;
block15:;
frost$core$Int64 $tmp774 = (frost$core$Int64) {1};
frost$core$Bit $tmp775 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp774);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp777 = (frost$core$Int64) {2};
frost$core$Bit $tmp778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block16; else goto block18;
block16:;
// line 518
frost$core$MutableString* $tmp780 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp780, &$s781);
goto block13;
block18:;
frost$core$Int64 $tmp782 = (frost$core$Int64) {3};
frost$core$Bit $tmp783 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block19; else goto block20;
block19:;
// line 521
frost$core$MutableString* $tmp785 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp785, &$s786);
goto block13;
block20:;
frost$core$Int64 $tmp787 = (frost$core$Int64) {4};
frost$core$Bit $tmp788 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block21; else goto block22;
block21:;
// line 524
frost$core$MutableString* $tmp790 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp790, &$s791);
goto block13;
block22:;
frost$core$Int64 $tmp792 = (frost$core$Int64) {5};
frost$core$Bit $tmp793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block23; else goto block24;
block23:;
// line 527
frost$core$MutableString* $tmp795 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp795, &$s796);
goto block13;
block24:;
frost$core$Int64 $tmp797 = (frost$core$Int64) {6};
frost$core$Bit $tmp798 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block25; else goto block26;
block25:;
// line 530
frost$core$MutableString* $tmp800 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp800, &$s801);
goto block13;
block26:;
frost$core$Int64 $tmp802 = (frost$core$Int64) {7};
frost$core$Bit $tmp803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block27; else goto block28;
block27:;
// line 533
frost$core$MutableString* $tmp805 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp805, &$s806);
goto block13;
block28:;
frost$core$Int64 $tmp807 = (frost$core$Int64) {8};
frost$core$Bit $tmp808 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp807);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block29; else goto block30;
block29:;
// line 536
frost$core$MutableString* $tmp810 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp810, &$s811);
goto block13;
block30:;
frost$core$Int64 $tmp812 = (frost$core$Int64) {9};
frost$core$Bit $tmp813 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp812);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block31; else goto block32;
block31:;
// line 539
frost$core$MutableString* $tmp815 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp815, &$s816);
goto block13;
block32:;
frost$core$Int64 $tmp817 = (frost$core$Int64) {10};
frost$core$Bit $tmp818 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp817);
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block33; else goto block34;
block33:;
// line 542
frost$core$MutableString* $tmp820 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp820, &$s821);
goto block13;
block34:;
frost$core$Int64 $tmp822 = (frost$core$Int64) {11};
frost$core$Bit $tmp823 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp822);
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block35; else goto block36;
block35:;
// line 545
frost$core$MutableString* $tmp825 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp825, &$s826);
goto block13;
block36:;
frost$core$Int64 $tmp827 = (frost$core$Int64) {12};
frost$core$Bit $tmp828 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp770, $tmp827);
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block37; else goto block38;
block37:;
// line 548
frost$core$MutableString* $tmp830 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp830, &$s831);
goto block13;
block38:;
// line 551
frost$core$Bit $tmp832 = frost$core$Bit$init$builtin_bit(false);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp834 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s835, $tmp834);
abort(); // unreachable
block39:;
goto block13;
block13:;
goto block12;
block12:;
// line 555
frost$core$MutableString* $tmp836 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp837 = *(&local2);
frost$core$Object** $tmp838 = &$tmp837->first;
frost$core$Object* $tmp839 = *$tmp838;
frost$core$String* $tmp840 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param1, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp839)->value);
frost$core$MutableString$init$frost$core$String($tmp836, $tmp840);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$MutableString* $tmp841 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local4) = $tmp836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing REF($240:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing REF($234:frost.core.MutableString)
// line 556
frost$core$MutableString* $tmp842 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp842, &$s843, &$s844);
// line 557
frost$core$MutableString* $tmp845 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp845, &$s846, &$s847);
// line 558
frost$core$MutableString* $tmp848 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp848, &$s849, &$s850);
// line 559
frost$core$MutableString* $tmp851 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp852 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp853 = *$tmp852;
$fn855 $tmp854 = ($fn855) $tmp853->$class->vtable[2];
frost$core$String* $tmp856 = $tmp854($tmp853, &$s857);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp851, &$s858, $tmp856);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// unreffing REF($269:frost.core.String)
// line 560
frost$core$MutableString* $tmp859 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp860 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp861 = *$tmp860;
$fn863 $tmp862 = ($fn863) $tmp861->$class->vtable[2];
frost$core$String* $tmp864 = $tmp862($tmp861, &$s865);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp859, &$s866, $tmp864);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// unreffing REF($279:frost.core.String)
// line 561
frost$core$MutableString* $tmp867 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp868 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp869 = *$tmp868;
$fn871 $tmp870 = ($fn871) $tmp869->$class->vtable[2];
frost$core$String* $tmp872 = $tmp870($tmp869, &$s873);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp867, &$s874, $tmp872);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($289:frost.core.String)
// line 562
frost$core$MutableString* $tmp875 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp876 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp877 = *$tmp876;
$fn879 $tmp878 = ($fn879) $tmp877->$class->vtable[2];
frost$core$String* $tmp880 = $tmp878($tmp877, &$s881);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp875, &$s882, $tmp880);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing REF($299:frost.core.String)
// line 563
frost$core$MutableString* $tmp883 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp884 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp885 = *$tmp884;
$fn887 $tmp886 = ($fn887) $tmp885->$class->vtable[2];
frost$core$String* $tmp888 = $tmp886($tmp885, &$s889);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp883, &$s890, $tmp888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing REF($309:frost.core.String)
// line 564
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp891 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp892;
$tmp892 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp892->value = $tmp891;
frost$core$Int64 $tmp893 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp894 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp893);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp895;
$tmp895 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp895->value = $tmp894;
ITable* $tmp896 = ((frost$core$Equatable*) $tmp892)->$class->itable;
while ($tmp896->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[1];
frost$core$Bit $tmp899 = $tmp897(((frost$core$Equatable*) $tmp892), ((frost$core$Equatable*) $tmp895));
bool $tmp900 = $tmp899.value;
if ($tmp900) goto block43; else goto block44;
block43:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp901 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp902;
$tmp902 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp902->value = $tmp901;
frost$core$Int64 $tmp903 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp904 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp903);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp905;
$tmp905 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp905->value = $tmp904;
ITable* $tmp906 = ((frost$core$Equatable*) $tmp902)->$class->itable;
while ($tmp906->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp906 = $tmp906->next;
}
$fn908 $tmp907 = $tmp906->methods[1];
frost$core$Bit $tmp909 = $tmp907(((frost$core$Equatable*) $tmp902), ((frost$core$Equatable*) $tmp905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp905)));
// unreffing REF($330:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp902)));
// unreffing REF($326:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp909;
goto block45;
block44:;
*(&local5) = $tmp899;
goto block45;
block45:;
frost$core$Bit $tmp910 = *(&local5);
bool $tmp911 = $tmp910.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp895)));
// unreffing REF($320:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp892)));
// unreffing REF($316:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp911) goto block41; else goto block42;
block41:;
// line 566
frost$core$MutableString* $tmp912 = *(&local0);
org$frostlang$frostc$Pair* $tmp913 = *(&local2);
frost$core$Object** $tmp914 = &$tmp913->first;
frost$core$Object* $tmp915 = *$tmp914;
org$frostlang$frostc$parser$Token$Kind $tmp916 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp915)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp917;
$tmp917 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp917->value = $tmp916;
frost$core$String* $tmp918 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s919, ((frost$core$Object*) $tmp917));
frost$core$String* $tmp920 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp918, &$s921);
frost$core$MutableString$append$frost$core$String($tmp912, $tmp920);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing REF($362:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
// unreffing REF($361:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing REF($360:frost.core.Object)
goto block42;
block42:;
// line 568
frost$core$MutableString* $tmp922 = *(&local0);
frost$core$MutableString* $tmp923 = *(&local4);
frost$core$MutableString$append$frost$core$Object($tmp922, ((frost$core$Object*) $tmp923));
// line 569
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp924 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp925;
$tmp925 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp925->value = $tmp924;
frost$core$Int64 $tmp926 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp927 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp926);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp928;
$tmp928 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp928->value = $tmp927;
ITable* $tmp929 = ((frost$core$Equatable*) $tmp925)->$class->itable;
while ($tmp929->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp929 = $tmp929->next;
}
$fn931 $tmp930 = $tmp929->methods[1];
frost$core$Bit $tmp932 = $tmp930(((frost$core$Equatable*) $tmp925), ((frost$core$Equatable*) $tmp928));
bool $tmp933 = $tmp932.value;
if ($tmp933) goto block48; else goto block49;
block48:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp934 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp935;
$tmp935 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp935->value = $tmp934;
frost$core$Int64 $tmp936 = (frost$core$Int64) {2};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp938)));
// unreffing REF($395:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp935)));
// unreffing REF($391:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp942;
goto block50;
block49:;
*(&local6) = $tmp932;
goto block50;
block50:;
frost$core$Bit $tmp943 = *(&local6);
bool $tmp944 = $tmp943.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp928)));
// unreffing REF($385:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp925)));
// unreffing REF($381:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp944) goto block46; else goto block47;
block46:;
// line 571
frost$core$MutableString* $tmp945 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp945, &$s946);
goto block47;
block47:;
frost$core$MutableString* $tmp947 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
// unreffing s
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp729);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$Pair* $tmp948 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing REF($33:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 574
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp949 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp950;
$tmp950 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp950->value = $tmp949;
frost$core$Int64 $tmp951 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp952 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp951);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp953;
$tmp953 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp953->value = $tmp952;
ITable* $tmp954 = ((frost$core$Equatable*) $tmp950)->$class->itable;
while ($tmp954->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp954 = $tmp954->next;
}
$fn956 $tmp955 = $tmp954->methods[1];
frost$core$Bit $tmp957 = $tmp955(((frost$core$Equatable*) $tmp950), ((frost$core$Equatable*) $tmp953));
bool $tmp958 = $tmp957.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp953)));
// unreffing REF($444:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp950)));
// unreffing REF($440:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp958) goto block51; else goto block52;
block51:;
// line 575
frost$core$MutableString* $tmp959 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp959, &$s960);
goto block52;
block52:;
// line 577
frost$core$MutableString* $tmp961 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp961, &$s962);
// line 578
frost$core$MutableString* $tmp963 = *(&local0);
frost$core$String* $tmp964 = frost$core$MutableString$finish$R$frost$core$String($tmp963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// unreffing REF($464:frost.core.String)
frost$core$MutableString* $tmp965 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp964;

}
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
org$frostlang$frostc$parser$Token local5;
// line 582
frost$threads$MessageQueue** $tmp966 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp967 = *$tmp966;
frost$threads$MessageQueue$clear($tmp967);
// line 583
frost$core$String* $tmp968 = frost$core$MutableString$convert$R$frost$core$String(param1);
frost$core$String* $tmp969 = frost$core$String$get_trimmed$R$frost$core$String($tmp968);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$String* $tmp970 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local0) = $tmp969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// unreffing REF($6:frost.core.String)
// line 584
org$frostlang$frostc$parser$Parser** $tmp971 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp972 = *$tmp971;
frost$io$File** $tmp973 = &param0->source;
frost$io$File* $tmp974 = *$tmp973;
frost$core$String* $tmp975 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp972, $tmp974, $tmp975);
// line 585
org$frostlang$frostc$parser$Parser** $tmp976 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp977 = *$tmp976;
org$frostlang$frostc$ASTNode* $tmp978 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp977);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
org$frostlang$frostc$ASTNode* $tmp979 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local1) = $tmp978;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
// unreffing REF($31:org.frostlang.frostc.ASTNode?)
// line 586
org$frostlang$frostc$ASTNode* $tmp980 = *(&local1);
frost$core$Bit $tmp981 = frost$core$Bit$init$builtin_bit($tmp980 != NULL);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block3; else goto block4;
block3:;
frost$threads$MessageQueue** $tmp983 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp984 = *$tmp983;
frost$core$Int64 $tmp985 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp984);
frost$core$Int64 $tmp986 = (frost$core$Int64) {0};
frost$core$Bit $tmp987 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp985, $tmp986);
*(&local2) = $tmp987;
goto block5;
block4:;
*(&local2) = $tmp981;
goto block5;
block5:;
frost$core$Bit $tmp988 = *(&local2);
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block1; else goto block2;
block1:;
// line 587
frost$core$Bit $tmp990 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp991 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp990);
org$frostlang$frostc$parser$Parser** $tmp992 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp993 = *$tmp992;
$fn995 $tmp994 = ($fn995) param0->$class->vtable[16];
frost$core$String* $tmp996 = $tmp994(param0, $tmp993);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp991, $tmp996);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing REF($67:frost.core.String)
// line 588
org$frostlang$frostc$ASTNode* $tmp997 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp998 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block2:;
// line 591
frost$threads$MessageQueue** $tmp999 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1000 = *$tmp999;
frost$threads$MessageQueue$clear($tmp1000);
// line 592
org$frostlang$frostc$parser$Parser** $tmp1001 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1002 = *$tmp1001;
frost$io$File** $tmp1003 = &param0->source;
frost$io$File* $tmp1004 = *$tmp1003;
frost$core$String* $tmp1005 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1002, $tmp1004, $tmp1005);
// line 593
goto block6;
block6:;
org$frostlang$frostc$parser$Parser** $tmp1006 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1007 = *$tmp1006;
org$frostlang$frostc$parser$Token $tmp1008 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp1007);
org$frostlang$frostc$parser$Token$Kind $tmp1009 = $tmp1008.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1010;
$tmp1010 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1010->value = $tmp1009;
frost$core$Int64 $tmp1011 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1012 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1011);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1013;
$tmp1013 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1013->value = $tmp1012;
ITable* $tmp1014 = ((frost$core$Equatable*) $tmp1010)->$class->itable;
while ($tmp1014->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1014 = $tmp1014->next;
}
$fn1016 $tmp1015 = $tmp1014->methods[1];
frost$core$Bit $tmp1017 = $tmp1015(((frost$core$Equatable*) $tmp1010), ((frost$core$Equatable*) $tmp1013));
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block9; else goto block10;
block9:;
frost$threads$MessageQueue** $tmp1019 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1020 = *$tmp1019;
frost$core$Int64 $tmp1021 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1020);
frost$core$Int64 $tmp1022 = (frost$core$Int64) {0};
frost$core$Bit $tmp1023 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1021, $tmp1022);
*(&local3) = $tmp1023;
goto block11;
block10:;
*(&local3) = $tmp1017;
goto block11;
block11:;
frost$core$Bit $tmp1024 = *(&local3);
bool $tmp1025 = $tmp1024.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1013)));
// unreffing REF($106:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1010)));
// unreffing REF($102:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1025) goto block7; else goto block8;
block7:;
// line 594
org$frostlang$frostc$parser$Parser** $tmp1026 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1027 = *$tmp1026;
org$frostlang$frostc$ASTNode* $tmp1028 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q($tmp1027);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing REF($133:org.frostlang.frostc.ASTNode?)
goto block6;
block8:;
// line 596
frost$threads$MessageQueue** $tmp1029 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1030 = *$tmp1029;
frost$core$Int64 $tmp1031 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1030);
frost$core$Int64 $tmp1032 = (frost$core$Int64) {0};
frost$core$Bit $tmp1033 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1031, $tmp1032);
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block12; else goto block13;
block12:;
// line 597
frost$core$Bit $tmp1035 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1036 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1035);
org$frostlang$frostc$parser$Parser** $tmp1037 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1038 = *$tmp1037;
$fn1040 $tmp1039 = ($fn1040) param0->$class->vtable[16];
frost$core$String* $tmp1041 = $tmp1039(param0, $tmp1038);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1036, $tmp1041);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing REF($153:frost.core.String)
// line 598
org$frostlang$frostc$ASTNode* $tmp1042 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1043 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block13:;
// line 601
frost$threads$MessageQueue** $tmp1044 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1045 = *$tmp1044;
frost$threads$MessageQueue$clear($tmp1045);
// line 602
org$frostlang$frostc$parser$Parser** $tmp1046 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1047 = *$tmp1046;
frost$io$File** $tmp1048 = &param0->source;
frost$io$File* $tmp1049 = *$tmp1048;
frost$core$String* $tmp1050 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1047, $tmp1049, $tmp1050);
// line 603
goto block14;
block14:;
org$frostlang$frostc$parser$Parser** $tmp1051 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1052 = *$tmp1051;
org$frostlang$frostc$parser$Token $tmp1053 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp1052);
org$frostlang$frostc$parser$Token$Kind $tmp1054 = $tmp1053.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1055;
$tmp1055 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1055->value = $tmp1054;
frost$core$Int64 $tmp1056 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1057 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1056);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1058;
$tmp1058 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1058->value = $tmp1057;
ITable* $tmp1059 = ((frost$core$Equatable*) $tmp1055)->$class->itable;
while ($tmp1059->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[1];
frost$core$Bit $tmp1062 = $tmp1060(((frost$core$Equatable*) $tmp1055), ((frost$core$Equatable*) $tmp1058));
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block17; else goto block18;
block17:;
frost$threads$MessageQueue** $tmp1064 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1065 = *$tmp1064;
frost$core$Int64 $tmp1066 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1065);
frost$core$Int64 $tmp1067 = (frost$core$Int64) {0};
frost$core$Bit $tmp1068 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1066, $tmp1067);
*(&local4) = $tmp1068;
goto block19;
block18:;
*(&local4) = $tmp1062;
goto block19;
block19:;
frost$core$Bit $tmp1069 = *(&local4);
bool $tmp1070 = $tmp1069.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1058)));
// unreffing REF($192:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1055)));
// unreffing REF($188:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1070) goto block15; else goto block16;
block15:;
// line 604
org$frostlang$frostc$parser$Parser** $tmp1071 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1072 = *$tmp1071;
org$frostlang$frostc$ASTNode* $tmp1073 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q($tmp1072);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
// unreffing REF($219:org.frostlang.frostc.ASTNode?)
goto block14;
block16:;
// line 606
frost$threads$MessageQueue** $tmp1074 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1075 = *$tmp1074;
frost$core$Int64 $tmp1076 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1075);
frost$core$Int64 $tmp1077 = (frost$core$Int64) {0};
frost$core$Bit $tmp1078 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1076, $tmp1077);
bool $tmp1079 = $tmp1078.value;
if ($tmp1079) goto block20; else goto block21;
block20:;
// line 607
frost$core$Bit $tmp1080 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1081 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1080);
org$frostlang$frostc$parser$Parser** $tmp1082 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1083 = *$tmp1082;
$fn1085 $tmp1084 = ($fn1085) param0->$class->vtable[16];
frost$core$String* $tmp1086 = $tmp1084(param0, $tmp1083);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1081, $tmp1086);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing REF($239:frost.core.String)
// line 608
org$frostlang$frostc$ASTNode* $tmp1087 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1088 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block21:;
// line 611
frost$threads$MessageQueue** $tmp1089 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1090 = *$tmp1089;
frost$threads$MessageQueue$clear($tmp1090);
// line 612
org$frostlang$frostc$parser$Parser** $tmp1091 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1092 = *$tmp1091;
frost$io$File** $tmp1093 = &param0->source;
frost$io$File* $tmp1094 = *$tmp1093;
frost$core$String* $tmp1095 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1092, $tmp1094, $tmp1095);
// line 613
goto block22;
block22:;
// line 614
org$frostlang$frostc$parser$Parser** $tmp1096 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1097 = *$tmp1096;
org$frostlang$frostc$parser$Token $tmp1098 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1097);
*(&local5) = $tmp1098;
// line 615
org$frostlang$frostc$parser$Token $tmp1099 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp1100 = $tmp1099.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1101;
$tmp1101 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1101->value = $tmp1100;
frost$core$Int64 $tmp1102 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1103 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1102);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1104;
$tmp1104 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1104->value = $tmp1103;
ITable* $tmp1105 = ((frost$core$Equatable*) $tmp1101)->$class->itable;
while ($tmp1105->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1105 = $tmp1105->next;
}
$fn1107 $tmp1106 = $tmp1105->methods[0];
frost$core$Bit $tmp1108 = $tmp1106(((frost$core$Equatable*) $tmp1101), ((frost$core$Equatable*) $tmp1104));
bool $tmp1109 = $tmp1108.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1104)));
// unreffing REF($282:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1101)));
// unreffing REF($278:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1109) goto block24; else goto block25;
block24:;
// line 616
goto block23;
block25:;
goto block22;
block23:;
// line 619
frost$core$Bit $tmp1110 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1111 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1110);
org$frostlang$frostc$parser$Parser** $tmp1112 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1113 = *$tmp1112;
$fn1115 $tmp1114 = ($fn1115) param0->$class->vtable[16];
frost$core$String* $tmp1116 = $tmp1114(param0, $tmp1113);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1111, $tmp1116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
// unreffing REF($302:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1117 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1118 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 625
frost$core$RegularExpression* $tmp1119 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1119, &$s1120);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1119, &$s1121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
// unreffing REF($1:frost.core.RegularExpression)
// line 626
$fn1123 $tmp1122 = ($fn1123) param0->$class->vtable[17];
$tmp1122(param0, param1);
// line 627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s1124, &$s1125);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Int64 local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
// line 631
frost$core$Int64 $tmp1126 = (frost$core$Int64) {4};
frost$core$Int64 $tmp1127 = (frost$core$Int64) {1};
int64_t $tmp1128 = $tmp1126.value;
int64_t $tmp1129 = $tmp1127.value;
int64_t $tmp1130 = $tmp1128 - $tmp1129;
frost$core$Int64 $tmp1131 = (frost$core$Int64) {$tmp1130};
*(&local0) = $tmp1131;
// line 633
frost$core$Int64 $tmp1132 = *(&local0);
frost$core$Int64$wrapper* $tmp1133;
$tmp1133 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1133->value = $tmp1132;
frost$core$String* $tmp1134 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1135, ((frost$core$Object*) $tmp1133));
frost$core$String* $tmp1136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1134, &$s1137);
frost$core$String* $tmp1138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1136, &$s1139);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
frost$core$String* $tmp1140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local1) = $tmp1138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
// unreffing REF($10:frost.core.Object)
// line 656
frost$core$Int64* $tmp1141 = &param0->listLevel;
frost$core$Int64 $tmp1142 = *$tmp1141;
frost$core$Int64 $tmp1143 = (frost$core$Int64) {0};
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143.value;
bool $tmp1146 = $tmp1144 > $tmp1145;
frost$core$Bit $tmp1147 = (frost$core$Bit) {$tmp1146};
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block1; else goto block3;
block1:;
// line 657
frost$core$RegularExpression* $tmp1149 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1150 = *(&local1);
frost$core$String* $tmp1151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1152, $tmp1150);
frost$core$String* $tmp1153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1151, &$s1154);
frost$core$RegularExpression$init$frost$core$String($tmp1149, $tmp1153);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$RegularExpression* $tmp1155 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local2) = $tmp1149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing REF($44:frost.core.RegularExpression)
// line 658
frost$core$RegularExpression* $tmp1156 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$_Closure12* $tmp1157 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown($tmp1157, param0);
frost$core$MutableMethod* $tmp1159 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1159, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1157));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1156, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1159)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing REF($70:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing REF($67:org.frostlang.frostc.frostdoc.Markdown._Closure12)
frost$core$RegularExpression* $tmp1160 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// unreffing matchStartOfLine
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 684
frost$core$RegularExpression* $tmp1161 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1162 = *(&local1);
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1164, $tmp1162);
frost$core$RegularExpression$init$frost$core$String($tmp1161, $tmp1163);
*(&local3) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$RegularExpression* $tmp1165 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local3) = $tmp1161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
// unreffing REF($92:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// unreffing REF($90:frost.core.RegularExpression)
// line 685
frost$core$RegularExpression* $tmp1166 = *(&local3);
org$frostlang$frostc$frostdoc$Markdown$_Closure14* $tmp1167 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown($tmp1167, param0);
frost$core$MutableMethod* $tmp1169 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1169, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1167));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1166, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1169)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
// unreffing REF($112:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// unreffing REF($109:org.frostlang.frostc.frostdoc.Markdown._Closure14)
frost$core$RegularExpression* $tmp1170 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
// unreffing matchStartOfLine
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block2;
block2:;
frost$core$String* $tmp1171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
// unreffing wholeList
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// line 726
frost$core$Int64* $tmp1172 = &param0->listLevel;
frost$core$Int64 $tmp1173 = *$tmp1172;
frost$core$Int64 $tmp1174 = (frost$core$Int64) {1};
int64_t $tmp1175 = $tmp1173.value;
int64_t $tmp1176 = $tmp1174.value;
int64_t $tmp1177 = $tmp1175 + $tmp1176;
frost$core$Int64 $tmp1178 = (frost$core$Int64) {$tmp1177};
frost$core$Int64* $tmp1179 = &param0->listLevel;
*$tmp1179 = $tmp1178;
// line 729
frost$core$RegularExpression* $tmp1180 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1180, &$s1181);
frost$core$String* $tmp1182 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(param1, $tmp1180, &$s1183);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$String* $tmp1184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local0) = $tmp1182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing REF($11:frost.core.RegularExpression)
// line 731
frost$core$RegularExpression* $tmp1185 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1187, &$s1188);
frost$core$String* $tmp1189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1186, &$s1190);
frost$core$Int64 $tmp1191 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1185, $tmp1189, $tmp1191);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$RegularExpression* $tmp1192 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local1) = $tmp1185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
// unreffing REF($30:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// unreffing REF($28:frost.core.RegularExpression)
// line 736
frost$core$String* $tmp1193 = *(&local0);
frost$core$RegularExpression* $tmp1194 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure16* $tmp1195 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown($tmp1195, param0);
frost$core$MutableMethod* $tmp1197 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1197, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1195));
frost$core$String* $tmp1198 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String($tmp1193, $tmp1194, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1197)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$String* $tmp1199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
*(&local0) = $tmp1198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// unreffing REF($60:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
// unreffing REF($55:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
// unreffing REF($52:org.frostlang.frostc.frostdoc.Markdown._Closure16)
// line 753
frost$core$Int64* $tmp1200 = &param0->listLevel;
frost$core$Int64 $tmp1201 = *$tmp1200;
frost$core$Int64 $tmp1202 = (frost$core$Int64) {1};
int64_t $tmp1203 = $tmp1201.value;
int64_t $tmp1204 = $tmp1202.value;
int64_t $tmp1205 = $tmp1203 - $tmp1204;
frost$core$Int64 $tmp1206 = (frost$core$Int64) {$tmp1205};
frost$core$Int64* $tmp1207 = &param0->listLevel;
*$tmp1207 = $tmp1206;
// line 754
frost$core$String* $tmp1208 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$RegularExpression* $tmp1209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
// unreffing p
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
// unreffing list
*(&local0) = ((frost$core$String*) NULL);
return $tmp1208;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

// line 759
frost$core$Bit $tmp1211 = frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(param0, &$s1212);
return $tmp1211;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
// line 764
frost$core$Bit $tmp1213 = frost$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1213;
goto block3;
block2:;
frost$core$Bit $tmp1215 = frost$core$Bit$init$builtin_bit(param0 != NULL);
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1217 = (frost$core$Int64) {764};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1218, $tmp1217, &$s1219);
abort(); // unreachable
block4:;
frost$core$Bit $tmp1220 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s1221);
*(&local0) = $tmp1220;
goto block3;
block3:;
frost$core$Bit $tmp1222 = *(&local0);
return $tmp1222;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 769
frost$core$RegularExpression* $tmp1223 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1223, &$s1224);
org$frostlang$frostc$frostdoc$Markdown$_Closure18* $tmp1225 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown($tmp1225, param0);
frost$core$MutableMethod* $tmp1227 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1227, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1225));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1223, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1227)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
// unreffing REF($6:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// unreffing REF($3:org.frostlang.frostc.frostdoc.Markdown._Closure18)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
// unreffing REF($1:frost.core.RegularExpression)
// line 774
frost$core$RegularExpression* $tmp1228 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1228, &$s1229);
org$frostlang$frostc$frostdoc$Markdown$_Closure20* $tmp1230 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown($tmp1230, param0);
frost$core$MutableMethod* $tmp1232 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1232, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1230));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1228, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1232)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// unreffing REF($27:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// unreffing REF($24:org.frostlang.frostc.frostdoc.Markdown._Closure20)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
// unreffing REF($22:frost.core.RegularExpression)
// line 781
frost$core$RegularExpression* $tmp1233 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int64 $tmp1234 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1233, &$s1235, $tmp1234);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
frost$core$RegularExpression* $tmp1236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local0) = $tmp1233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
// unreffing REF($43:frost.core.RegularExpression)
// line 782
frost$core$RegularExpression* $tmp1237 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure22* $tmp1238 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown($tmp1238, param0);
frost$core$MutableMethod* $tmp1240 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1240, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1238));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1237, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1240)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
// unreffing REF($61:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
// unreffing REF($58:org.frostlang.frostc.frostdoc.Markdown._Closure22)
frost$core$RegularExpression* $tmp1241 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
// unreffing p
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
frost$core$RegularExpression* $tmp1260 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1260, &$s1261);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1260, &$s1262);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
// unreffing REF($28:frost.core.RegularExpression)
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String(frost$core$Int64 param0) {

// line 820
frost$core$Int64 $tmp1263 = (frost$core$Int64) {0};
frost$core$Bit $tmp1264 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param0, $tmp1263);
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block1; else goto block3;
block1:;
// line 821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1266));
return &$s1267;
block3:;
// line 1
// line 824
frost$core$Int64 $tmp1268 = (frost$core$Int64) {1};
int64_t $tmp1269 = param0.value;
int64_t $tmp1270 = $tmp1268.value;
int64_t $tmp1271 = $tmp1269 - $tmp1270;
frost$core$Int64 $tmp1272 = (frost$core$Int64) {$tmp1271};
frost$core$String* $tmp1273 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1272);
frost$core$String* $tmp1274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1275, $tmp1273);
frost$core$String* $tmp1276 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1274, &$s1277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
// unreffing REF($16:frost.core.String)
return $tmp1276;
block2:;
frost$core$Bit $tmp1278 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1280 = (frost$core$Int64) {819};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1281, $tmp1280, &$s1282);
abort(); // unreachable
block4:;
abort(); // unreachable

}
frost$collections$ListView* org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$String$Index local4;
// line 829
frost$collections$Array* $tmp1283 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1283);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$collections$Array* $tmp1284 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local0) = $tmp1283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.frostdoc.Markdown.HTMLToken>)
// line 830
frost$core$Int64 $tmp1285 = (frost$core$Int64) {6};
frost$core$String* $tmp1286 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1285);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$String* $tmp1287 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local1) = $tmp1286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing REF($16:frost.core.String)
// line 832
frost$core$RegularExpression* $tmp1288 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1290, &$s1291);
frost$core$String* $tmp1292 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1289, &$s1293);
frost$core$String* $tmp1294 = *(&local1);
frost$core$String* $tmp1295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1292, $tmp1294);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {2};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1288, $tmp1295, $tmp1296);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$RegularExpression* $tmp1297 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local2) = $tmp1288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// unreffing REF($32:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
// unreffing REF($30:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
// unreffing REF($28:frost.core.RegularExpression)
// line 840
frost$core$RegularExpression* $tmp1298 = *(&local2);
frost$core$Matcher* $tmp1299 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1298, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Matcher* $tmp1300 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local3) = $tmp1299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing REF($56:frost.core.Matcher)
// line 841
frost$core$String$Index $tmp1301 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local4) = $tmp1301;
// line 842
goto block1;
block1:;
frost$core$Matcher* $tmp1302 = *(&local3);
frost$core$Bit $tmp1303 = frost$core$Matcher$find$R$frost$core$Bit($tmp1302);
bool $tmp1304 = $tmp1303.value;
if ($tmp1304) goto block2; else goto block3;
block2:;
// line 843
frost$core$String$Index $tmp1305 = *(&local4);
frost$core$String$Index$wrapper* $tmp1306;
$tmp1306 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1306->value = $tmp1305;
frost$core$Matcher* $tmp1307 = *(&local3);
frost$core$String$Index $tmp1308;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1308, $tmp1307);
frost$core$String$Index$wrapper* $tmp1309;
$tmp1309 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1309->value = $tmp1308;
ITable* $tmp1310 = ((frost$core$Comparable*) $tmp1306)->$class->itable;
while ($tmp1310->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1310 = $tmp1310->next;
}
$fn1312 $tmp1311 = $tmp1310->methods[1];
frost$core$Bit $tmp1313 = $tmp1311(((frost$core$Comparable*) $tmp1306), ((frost$core$Comparable*) $tmp1309));
bool $tmp1314 = $tmp1313.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1309)));
// unreffing REF($82:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1306)));
// unreffing REF($78:frost.core.Comparable<frost.core.String.Index>)
if ($tmp1314) goto block4; else goto block5;
block4:;
// line 844
frost$collections$Array* $tmp1315 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1316 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1317 = (frost$core$Int64) {1};
frost$core$String$Index $tmp1318 = *(&local4);
frost$core$Matcher* $tmp1319 = *(&local3);
frost$core$String$Index $tmp1320;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1320, $tmp1319);
frost$core$Bit $tmp1321 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1322 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1318, $tmp1320, $tmp1321);
frost$core$String* $tmp1323 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1322);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1316, $tmp1317, $tmp1323);
frost$collections$Array$add$frost$collections$Array$T($tmp1315, ((frost$core$Object*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
// unreffing REF($103:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
// unreffing REF($96:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
goto block5;
block5:;
// line 846
frost$collections$Array* $tmp1324 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1325 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1326 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp1327 = *(&local3);
frost$core$String$Index $tmp1328;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1328, $tmp1327);
frost$core$Matcher* $tmp1329 = *(&local3);
frost$core$String$Index $tmp1330;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1330, $tmp1329);
frost$core$Bit $tmp1331 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1332 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1328, $tmp1330, $tmp1331);
frost$core$String* $tmp1333 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1332);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1325, $tmp1326, $tmp1333);
frost$collections$Array$add$frost$collections$Array$T($tmp1324, ((frost$core$Object*) $tmp1325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
// unreffing REF($125:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// unreffing REF($117:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
// line 847
frost$core$Matcher* $tmp1334 = *(&local3);
frost$core$String$Index $tmp1335;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1335, $tmp1334);
*(&local4) = $tmp1335;
goto block1;
block3:;
// line 849
frost$core$String$Index $tmp1336 = *(&local4);
frost$core$String$Index$wrapper* $tmp1337;
$tmp1337 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1337->value = $tmp1336;
frost$core$String$Index $tmp1338 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp1339;
$tmp1339 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1339->value = $tmp1338;
ITable* $tmp1340 = ((frost$core$Comparable*) $tmp1337)->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[1];
frost$core$Bit $tmp1343 = $tmp1341(((frost$core$Comparable*) $tmp1337), ((frost$core$Comparable*) $tmp1339));
bool $tmp1344 = $tmp1343.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1339)));
// unreffing REF($145:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1337)));
// unreffing REF($142:frost.core.Comparable<frost.core.String.Index>)
if ($tmp1344) goto block6; else goto block7;
block6:;
// line 850
frost$collections$Array* $tmp1345 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1346 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1347 = (frost$core$Int64) {1};
frost$core$String$Index $tmp1348 = *(&local4);
frost$core$String$Index $tmp1349 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$Bit $tmp1350 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1351 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1348, $tmp1349, $tmp1350);
frost$core$String* $tmp1352 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1351);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1346, $tmp1347, $tmp1352);
frost$collections$Array$add$frost$collections$Array$T($tmp1345, ((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
// unreffing REF($165:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
// unreffing REF($159:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
goto block7;
block7:;
// line 853
frost$collections$Array* $tmp1353 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1353)));
frost$core$Matcher* $tmp1354 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// unreffing m
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$RegularExpression* $tmp1355 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// unreffing p
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1356 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
// unreffing nestedTags
*(&local1) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1357 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
// unreffing tokens
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1353);

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 866
frost$core$String* $tmp1358 = frost$core$MutableString$convert$R$frost$core$String(param1);
$fn1360 $tmp1359 = ($fn1360) param0->$class->vtable[23];
frost$collections$ListView* $tmp1361 = $tmp1359(param0, $tmp1358);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$collections$ListView* $tmp1362 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local0) = $tmp1361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
// unreffing REF($3:frost.collections.ListView<org.frostlang.frostc.frostdoc.Markdown.HTMLToken>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// unreffing REF($1:frost.core.String)
// line 867
frost$core$MutableString$clear(param1);
// line 869
frost$collections$ListView* $tmp1363 = *(&local0);
ITable* $tmp1364 = ((frost$collections$Iterable*) $tmp1363)->$class->itable;
while ($tmp1364->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1364 = $tmp1364->next;
}
$fn1366 $tmp1365 = $tmp1364->methods[0];
frost$collections$Iterator* $tmp1367 = $tmp1365(((frost$collections$Iterable*) $tmp1363));
goto block1;
block1:;
ITable* $tmp1368 = $tmp1367->$class->itable;
while ($tmp1368->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1368 = $tmp1368->next;
}
$fn1370 $tmp1369 = $tmp1368->methods[0];
frost$core$Bit $tmp1371 = $tmp1369($tmp1367);
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1373 = $tmp1367->$class->itable;
while ($tmp1373->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[1];
frost$core$Object* $tmp1376 = $tmp1374($tmp1367);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1376)));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1377 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1376);
// line 870
*(&local2) = ((frost$core$String*) NULL);
// line 871
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1378 = *(&local1);
frost$core$Int64* $tmp1379 = &$tmp1378->$rawValue;
frost$core$Int64 $tmp1380 = *$tmp1379;
frost$core$Int64 $tmp1381 = (frost$core$Int64) {0};
frost$core$Bit $tmp1382 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1380, $tmp1381);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block5; else goto block6;
block5:;
frost$core$String** $tmp1384 = (frost$core$String**) ($tmp1378->$data + 0);
frost$core$String* $tmp1385 = *$tmp1384;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
frost$core$String* $tmp1386 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local3) = $tmp1385;
// line 873
frost$core$String* $tmp1387 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
frost$core$String* $tmp1388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local2) = $tmp1387;
// line 874
frost$core$String* $tmp1389 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1390 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1391 = *$tmp1390;
$fn1393 $tmp1392 = ($fn1393) $tmp1391->$class->vtable[2];
frost$core$String* $tmp1394 = $tmp1392($tmp1391, &$s1395);
frost$core$String* $tmp1396 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1389, &$s1397, $tmp1394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$String* $tmp1398 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local2) = $tmp1396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// unreffing REF($76:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
// unreffing REF($75:frost.core.String)
// line 875
frost$core$String* $tmp1399 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1400 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1401 = *$tmp1400;
$fn1403 $tmp1402 = ($fn1403) $tmp1401->$class->vtable[2];
frost$core$String* $tmp1404 = $tmp1402($tmp1401, &$s1405);
frost$core$String* $tmp1406 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1399, &$s1407, $tmp1404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$String* $tmp1408 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local2) = $tmp1406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
// unreffing REF($94:frost.core.String)
// line 876
frost$core$String* $tmp1409 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1410 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1411 = *$tmp1410;
$fn1413 $tmp1412 = ($fn1413) $tmp1411->$class->vtable[2];
frost$core$String* $tmp1414 = $tmp1412($tmp1411, &$s1415);
frost$core$String* $tmp1416 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1409, &$s1417, $tmp1414);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$String* $tmp1418 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local2) = $tmp1416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// unreffing REF($114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
// unreffing REF($113:frost.core.String)
// line 877
frost$core$String* $tmp1419 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1420 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1421 = *$tmp1420;
$fn1423 $tmp1422 = ($fn1423) $tmp1421->$class->vtable[2];
frost$core$String* $tmp1424 = $tmp1422($tmp1421, &$s1425);
frost$core$String* $tmp1426 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1419, &$s1427, $tmp1424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$String* $tmp1428 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
*(&local2) = $tmp1426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
// unreffing REF($133:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
// unreffing REF($132:frost.core.String)
frost$core$String* $tmp1429 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// unreffing text
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
frost$core$Int64 $tmp1430 = (frost$core$Int64) {1};
frost$core$Bit $tmp1431 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1380, $tmp1430);
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block7; else goto block4;
block7:;
frost$core$String** $tmp1433 = (frost$core$String**) ($tmp1378->$data + 0);
frost$core$String* $tmp1434 = *$tmp1433;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$String* $tmp1435 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local4) = $tmp1434;
// line 880
frost$core$String* $tmp1436 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$String* $tmp1437 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local2) = $tmp1436;
frost$core$String* $tmp1438 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
// unreffing text
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 883
frost$core$String* $tmp1439 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, $tmp1439);
frost$core$String* $tmp1440 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
// unreffing value
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1376);
// unreffing REF($35:frost.collections.Iterator.T)
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1441 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
// unreffing token
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
// unreffing REF($24:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$ListView* $tmp1442 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
// unreffing tokens
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 889
frost$core$RegularExpression* $tmp1443 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1443, &$s1444);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1443, &$s1445);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
// unreffing REF($1:frost.core.RegularExpression)
// line 890
frost$core$RegularExpression* $tmp1446 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1446, &$s1447);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1446, &$s1448);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
// unreffing REF($8:frost.core.RegularExpression)
// line 893
frost$core$RegularExpression* $tmp1449 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1451, &$s1452);
frost$core$String* $tmp1453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1450, &$s1454);
frost$core$String* $tmp1455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1453, &$s1456);
frost$core$RegularExpression$init$frost$core$String($tmp1449, $tmp1455);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$RegularExpression* $tmp1457 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local0) = $tmp1449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
// unreffing REF($16:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
// unreffing REF($15:frost.core.RegularExpression)
// line 898
frost$core$RegularExpression* $tmp1458 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure24* $tmp1459 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown($tmp1459, param0);
frost$core$MutableMethod* $tmp1461 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1461, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1459));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1458, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1461)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
// unreffing REF($44:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
// unreffing REF($41:org.frostlang.frostc.frostdoc.Markdown._Closure24)
frost$core$RegularExpression* $tmp1462 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
// unreffing imageLink
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// line 931
frost$core$RegularExpression* $tmp1463 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1465, &$s1466);
frost$core$String* $tmp1467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1464, &$s1468);
frost$core$String* $tmp1469 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1467, &$s1470);
frost$core$RegularExpression$init$frost$core$String($tmp1463, $tmp1469);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$core$RegularExpression* $tmp1471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local0) = $tmp1463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
// unreffing REF($1:frost.core.RegularExpression)
// line 936
frost$core$RegularExpression* $tmp1472 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure26* $tmp1473 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown($tmp1473, param0);
frost$core$MutableMethod* $tmp1475 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1475, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1473));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1472, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1475)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
// unreffing REF($30:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
// unreffing REF($27:org.frostlang.frostc.frostdoc.Markdown._Closure26)
// line 968
frost$core$RegularExpression* $tmp1476 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1478, &$s1479);
frost$core$String* $tmp1480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1477, &$s1481);
frost$core$String* $tmp1482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1480, &$s1483);
frost$core$String* $tmp1484 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1482, &$s1485);
frost$core$String* $tmp1486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1484, &$s1487);
frost$core$String* $tmp1488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1486, &$s1489);
frost$core$String* $tmp1490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1488, &$s1491);
frost$core$String* $tmp1492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1490, &$s1493);
frost$core$String* $tmp1494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1492, &$s1495);
frost$core$String* $tmp1496 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1494, &$s1497);
frost$core$String* $tmp1498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1496, &$s1499);
frost$core$Int64 $tmp1500 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1476, $tmp1498, $tmp1500);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$core$RegularExpression* $tmp1501 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local1) = $tmp1476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
// unreffing REF($54:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
// unreffing REF($53:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
// unreffing REF($52:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
// unreffing REF($49:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
// unreffing REF($48:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
// unreffing REF($43:frost.core.RegularExpression)
// line 982
frost$core$RegularExpression* $tmp1502 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure28* $tmp1503 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown($tmp1503, param0);
frost$core$MutableMethod* $tmp1505 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1505, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1503));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1502, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1505)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
// unreffing REF($105:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
// unreffing REF($102:org.frostlang.frostc.frostdoc.Markdown._Closure28)
// line 1024
frost$core$RegularExpression* $tmp1506 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1508, &$s1509);
frost$core$String* $tmp1510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1507, &$s1511);
frost$core$String* $tmp1512 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1510, &$s1513);
frost$core$Int64 $tmp1514 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1506, $tmp1512, $tmp1514);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
frost$core$RegularExpression* $tmp1515 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local2) = $tmp1506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
// unreffing REF($120:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
// unreffing REF($119:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
// unreffing REF($118:frost.core.RegularExpression)
// line 1030
frost$core$RegularExpression* $tmp1516 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$_Closure30* $tmp1517 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown($tmp1517, param0);
frost$core$MutableMethod* $tmp1519 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1519, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1517));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1516, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1519)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
// unreffing REF($148:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
// unreffing REF($145:org.frostlang.frostc.frostdoc.Markdown._Closure30)
frost$core$RegularExpression* $tmp1520 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
// unreffing referenceShortcut
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
// unreffing inlineLink
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1522 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
// unreffing internalLink
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1072
frost$core$RegularExpression* $tmp1523 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1523, &$s1524);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1523, &$s1525);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
// unreffing REF($1:frost.core.RegularExpression)
// line 1073
frost$core$RegularExpression* $tmp1526 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1526, &$s1527);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1526, &$s1528);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
// unreffing REF($8:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1079
frost$core$RegularExpression* $tmp1529 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1529, &$s1530);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1529, &$s1531);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
// unreffing REF($1:frost.core.RegularExpression)
// line 1080
frost$core$RegularExpression* $tmp1532 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1532, &$s1533);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1532, &$s1534);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
// unreffing REF($8:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1084
frost$core$RegularExpression* $tmp1535 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1535, &$s1536);
org$frostlang$frostc$frostdoc$Markdown$_Closure32* $tmp1537 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown($tmp1537, param0);
frost$core$MutableMethod* $tmp1539 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1539, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1537));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1535, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1539)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
// unreffing REF($6:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
// unreffing REF($3:org.frostlang.frostc.frostdoc.Markdown._Closure32)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

// line 83
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1540 = &param0->source;
frost$io$File* $tmp1541 = *$tmp1540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$threads$MessageQueue** $tmp1542 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1543 = *$tmp1542;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
org$frostlang$frostc$parser$Parser** $tmp1544 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1545 = *$tmp1544;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
frost$core$MutableMethod** $tmp1546 = &param0->linkResolver;
frost$core$MutableMethod* $tmp1547 = *$tmp1546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$collections$HashMap** $tmp1548 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp1549 = *$tmp1548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
org$frostlang$frostc$frostdoc$Protector** $tmp1550 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1551 = *$tmp1550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
org$frostlang$frostc$frostdoc$Protector** $tmp1552 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1553 = *$tmp1552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
frost$math$Random** $tmp1554 = &param0->random;
frost$math$Random* $tmp1555 = *$tmp1554;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
return;

}

