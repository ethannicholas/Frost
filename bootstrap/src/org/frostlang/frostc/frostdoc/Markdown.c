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
typedef void (*$fn467)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn503)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn515)(org$frostlang$frostc$frostdoc$Markdown$_Closure6*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn524)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn528)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn533)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn540)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn551)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn555)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn560)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn566)(frost$math$Random*);
typedef frost$core$Object* (*$fn622)(org$frostlang$frostc$frostdoc$Markdown$_Closure9*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn628)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn659)(frost$collections$ListView*);
typedef frost$core$String* (*$fn680)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn694)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn698)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn703)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn714)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn724)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn738)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn830)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn838)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn846)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn854)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn862)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn873)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn883)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn906)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn916)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn931)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn970)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn991)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1015)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1036)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1060)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1082)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1090)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef void (*$fn1098)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn1133)(org$frostlang$frostc$frostdoc$Markdown$_Closure12*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1143)(org$frostlang$frostc$frostdoc$Markdown$_Closure14*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1171)(org$frostlang$frostc$frostdoc$Markdown$_Closure16*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1196)(org$frostlang$frostc$frostdoc$Markdown$_Closure18*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1201)(org$frostlang$frostc$frostdoc$Markdown$_Closure20*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1209)(org$frostlang$frostc$frostdoc$Markdown$_Closure22*, frost$collections$ListView*);
typedef void (*$fn1213)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1215)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1217)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1219)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1221)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1223)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1225)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1227)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1229)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Bit (*$fn1282)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn1312)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$collections$ListView* (*$fn1330)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1336)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1340)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1345)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1363)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1373)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1383)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1393)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1430)(org$frostlang$frostc$frostdoc$Markdown$_Closure24*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1444)(org$frostlang$frostc$frostdoc$Markdown$_Closure26*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1474)(org$frostlang$frostc$frostdoc$Markdown$_Closure28*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1488)(org$frostlang$frostc$frostdoc$Markdown$_Closure30*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1508)(org$frostlang$frostc$frostdoc$Markdown$_Closure32*, frost$collections$ListView*);

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
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x23", 2, 14074, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 965728039488327577, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static frost$core$String $s1110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static frost$core$String $s1112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static frost$core$String $s1158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static frost$core$String $s1163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static frost$core$String $s1199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static frost$core$String $s1236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static frost$core$String $s1251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -7424420126980993265, NULL };
static frost$core$String $s1260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static frost$core$String $s1261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s1375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static frost$core$String $s1417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static frost$core$String $s1418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static frost$core$String $s1421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static frost$core$String $s1451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static frost$core$String $s1461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static frost$core$String $s1495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static frost$core$String $s1498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static frost$core$String $s1501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s1503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static frost$core$String $s1504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

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
// unreffing REF($1:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.Error>)
// line 100
org$frostlang$frostc$parser$Parser* $tmp6 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue** $tmp7 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp8 = *$tmp7;
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Error$GT($tmp6, $tmp8);
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
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp415, ((frost$collections$CollectionView*) $tmp419));
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
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp459, $tmp460, ((frost$core$Object*) $tmp461));
goto block10;
block11:;
// line 1
// line 348
frost$core$MutableString* $tmp462 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp463 = *(&local2);
frost$core$MutableString$init$frost$core$String($tmp462, $tmp463);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$MutableString* $tmp464 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local4) = $tmp462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing REF($143:frost.core.MutableString)
// line 349
frost$core$MutableString* $tmp465 = *(&local4);
$fn467 $tmp466 = ($fn467) param0->$class->vtable[22];
$tmp466(param0, $tmp465);
// line 350
frost$collections$Array* $tmp468 = *(&local0);
frost$core$Int64 $tmp469 = *(&local1);
frost$core$MutableString* $tmp470 = *(&local4);
frost$core$String* $tmp471 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s472, ((frost$core$Object*) $tmp470));
frost$core$String* $tmp473 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp471, &$s474);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp468, $tmp469, ((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// unreffing REF($167:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// unreffing REF($166:frost.core.String)
frost$core$MutableString* $tmp475 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing mutable
*(&local4) = ((frost$core$MutableString*) NULL);
goto block10;
block10:;
frost$core$String* $tmp476 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing decoded
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp477 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// unreffing paragraph
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block6:;
frost$core$Int64 $tmp478 = *(&local1);
int64_t $tmp479 = $tmp430.value;
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479 - $tmp480;
frost$core$Int64 $tmp482 = (frost$core$Int64) {$tmp481};
frost$core$UInt64 $tmp483 = frost$core$Int64$convert$R$frost$core$UInt64($tmp482);
if ($tmp432) goto block13; else goto block14;
block13:;
uint64_t $tmp484 = $tmp483.value;
uint64_t $tmp485 = $tmp434.value;
bool $tmp486 = $tmp484 >= $tmp485;
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block12; else goto block5;
block14:;
uint64_t $tmp489 = $tmp483.value;
uint64_t $tmp490 = $tmp434.value;
bool $tmp491 = $tmp489 > $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block12; else goto block5;
block12:;
int64_t $tmp494 = $tmp478.value;
int64_t $tmp495 = $tmp433.value;
int64_t $tmp496 = $tmp494 + $tmp495;
frost$core$Int64 $tmp497 = (frost$core$Int64) {$tmp496};
*(&local1) = $tmp497;
goto block4;
block5:;
// line 353
frost$core$Bit $tmp498 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp499 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp498);
frost$collections$Array* $tmp500 = *(&local0);
ITable* $tmp501 = ((frost$collections$CollectionView*) $tmp500)->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[2];
frost$core$String* $tmp504 = $tmp502(((frost$collections$CollectionView*) $tmp500), &$s505);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp499, $tmp504);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// unreffing REF($224:frost.core.String)
frost$collections$Array* $tmp506 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing paragraphs
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 357
frost$core$RegularExpression* $tmp507 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp507, &$s508);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp507, &$s509);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($1:frost.core.RegularExpression)
// line 358
frost$core$RegularExpression* $tmp510 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp510, &$s511);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$RegularExpression* $tmp512 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local0) = $tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
// unreffing REF($8:frost.core.RegularExpression)
// line 359
frost$core$RegularExpression* $tmp513 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure6* $tmp514 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown($tmp514, param0);
frost$core$MutableMethod* $tmp516 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp516, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp514));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp513, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp516)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing REF($25:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// unreffing REF($22:org.frostlang.frostc.frostdoc.Markdown._Closure6)
frost$core$RegularExpression* $tmp517 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing email
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 370
org$frostlang$frostc$frostdoc$Protector** $tmp518 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp519 = *$tmp518;
frost$collections$HashMap** $tmp520 = &$tmp519->decodeMap;
frost$collections$HashMap* $tmp521 = *$tmp520;
ITable* $tmp522 = ((frost$collections$MapView*) $tmp521)->$class->itable;
while ($tmp522->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp522 = $tmp522->next;
}
$fn524 $tmp523 = $tmp522->methods[3];
frost$collections$Iterator* $tmp525 = $tmp523(((frost$collections$MapView*) $tmp521));
goto block1;
block1:;
ITable* $tmp526 = $tmp525->$class->itable;
while ($tmp526->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp526 = $tmp526->next;
}
$fn528 $tmp527 = $tmp526->methods[0];
frost$core$Bit $tmp529 = $tmp527($tmp525);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp531 = $tmp525->$class->itable;
while ($tmp531->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[1];
frost$core$Object* $tmp534 = $tmp532($tmp525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp534)));
frost$core$String* $tmp535 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local0) = ((frost$core$String*) $tmp534);
// line 371
org$frostlang$frostc$frostdoc$Protector** $tmp536 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp537 = *$tmp536;
frost$core$String* $tmp538 = *(&local0);
$fn540 $tmp539 = ($fn540) $tmp537->$class->vtable[3];
frost$core$String* $tmp541 = $tmp539($tmp537, $tmp538);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
frost$core$String* $tmp542 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local1) = $tmp541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
// unreffing REF($31:frost.core.String?)
// line 372
frost$core$String* $tmp543 = *(&local0);
frost$core$String* $tmp544 = *(&local1);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, $tmp543, $tmp544);
frost$core$String* $tmp545 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// unreffing plaintext
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp534);
// unreffing REF($18:frost.collections.Iterator.T)
frost$core$String* $tmp546 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing hash
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// unreffing REF($7:frost.collections.Iterator<frost.collections.MapView.K>)
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Real64 local2;
// line 377
frost$core$MutableString* $tmp547 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp547);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$MutableString* $tmp548 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local0) = $tmp547;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing REF($1:frost.core.MutableString)
// line 378
ITable* $tmp549 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp549->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp549 = $tmp549->next;
}
$fn551 $tmp550 = $tmp549->methods[0];
frost$collections$Iterator* $tmp552 = $tmp550(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp553 = $tmp552->$class->itable;
while ($tmp553->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp553 = $tmp553->next;
}
$fn555 $tmp554 = $tmp553->methods[0];
frost$core$Bit $tmp556 = $tmp554($tmp552);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block3; else goto block2;
block2:;
ITable* $tmp558 = $tmp552->$class->itable;
while ($tmp558->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp558 = $tmp558->next;
}
$fn560 $tmp559 = $tmp558->methods[1];
frost$core$Object* $tmp561 = $tmp559($tmp552);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp561)->value;
// line 380
frost$math$Random** $tmp562 = &param0->random;
frost$math$Random* $tmp563 = *$tmp562;
ITable* $tmp564 = $tmp563->$class->itable;
while ($tmp564->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp564 = $tmp564->next;
}
$fn566 $tmp565 = $tmp564->methods[5];
frost$core$Real64 $tmp567 = $tmp565($tmp563);
*(&local2) = $tmp567;
// line 381
frost$core$Real64 $tmp568 = *(&local2);
frost$core$Real64 $tmp569 = (frost$core$Real64) {0.45};
double $tmp570 = $tmp568.value;
double $tmp571 = $tmp569.value;
bool $tmp572 = $tmp570 < $tmp571;
frost$core$Bit $tmp573 = (frost$core$Bit) {$tmp572};
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block4; else goto block6;
block4:;
// line 382
frost$core$MutableString* $tmp575 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp575, &$s576);
// line 383
frost$core$MutableString* $tmp577 = *(&local0);
frost$core$Char32 $tmp578 = *(&local1);
frost$core$Int32 $tmp579 = frost$core$Char32$convert$R$frost$core$Int32($tmp578);
frost$core$Int32$wrapper* $tmp580;
$tmp580 = (frost$core$Int32$wrapper*) frostObjectAlloc(16, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp580->value = $tmp579;
frost$core$MutableString$append$frost$core$Object($tmp577, ((frost$core$Object*) $tmp580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// unreffing REF($52:frost.core.Object)
// line 384
frost$core$MutableString* $tmp581 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp581, &$s582);
goto block5;
block6:;
// line 386
frost$core$Real64 $tmp583 = *(&local2);
frost$core$Real64 $tmp584 = (frost$core$Real64) {0.9};
double $tmp585 = $tmp583.value;
double $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 < $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block7; else goto block9;
block7:;
// line 387
frost$core$MutableString* $tmp590 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp590, &$s591);
// line 388
frost$core$MutableString* $tmp592 = *(&local0);
frost$core$Char32 $tmp593 = *(&local1);
frost$core$Int32 $tmp594 = frost$core$Char32$convert$R$frost$core$Int32($tmp593);
frost$core$String* $tmp595 = frost$core$Int32$format$frost$core$String$R$frost$core$String($tmp594, &$s596);
frost$core$MutableString$append$frost$core$String($tmp592, $tmp595);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing REF($77:frost.core.String)
// line 389
frost$core$MutableString* $tmp597 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp597, &$s598);
goto block8;
block9:;
// line 1
// line 392
frost$core$MutableString* $tmp599 = *(&local0);
frost$core$Char32 $tmp600 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp599, $tmp600);
goto block8;
block8:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp561);
// unreffing REF($27:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// unreffing REF($17:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 395
frost$core$MutableString* $tmp601 = *(&local0);
frost$core$String* $tmp602 = frost$core$MutableString$convert$R$frost$core$String($tmp601);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
// unreffing REF($102:frost.core.String)
frost$core$MutableString* $tmp603 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp602;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 399
frost$core$RegularExpression* $tmp604 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp605 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s606, &$s607);
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp605, &$s609);
frost$core$String* $tmp610 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp608, &$s611);
frost$core$String* $tmp612 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp610, &$s613);
frost$core$String* $tmp614 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp612, &$s615);
frost$core$String* $tmp616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp614, &$s617);
frost$core$Int64 $tmp618 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp604, $tmp616, $tmp618);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$core$RegularExpression* $tmp619 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local0) = $tmp604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($1:frost.core.RegularExpression)
// line 408
frost$core$RegularExpression* $tmp620 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure9* $tmp621 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown($tmp621, param0);
frost$core$MutableMethod* $tmp623 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp623, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp621));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp620, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp623)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// unreffing REF($43:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($40:org.frostlang.frostc.frostdoc.Markdown._Closure9)
frost$core$RegularExpression* $tmp624 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing p
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* param0) {

frost$core$String* local0 = NULL;
frost$core$Int64 local1;
frost$core$MutableString* local2 = NULL;
// line 423
frost$core$Int64 $tmp625 = (frost$core$Int64) {1};
ITable* $tmp626 = param0->$class->itable;
while ($tmp626->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp626 = $tmp626->next;
}
$fn628 $tmp627 = $tmp626->methods[0];
frost$core$Object* $tmp629 = $tmp627(param0, $tmp625);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp629)));
frost$core$String* $tmp630 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local0) = ((frost$core$String*) $tmp629);
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
// unreffing REF($4:frost.collections.ListView.T)
// line 424
frost$core$String* $tmp631 = *(&local0);
frost$core$Int64 $tmp632 = frost$core$String$get_length$R$frost$core$Int64($tmp631);
*(&local1) = $tmp632;
// line 425
frost$core$MutableString* $tmp633 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp634 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp633, $tmp634);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$MutableString* $tmp635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local2) = $tmp633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing REF($22:frost.core.MutableString)
// line 426
goto block1;
block1:;
// line 427
frost$core$MutableString* $tmp636 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp636, &$s637);
// line 428
frost$core$Int64 $tmp638 = *(&local1);
frost$core$Int64 $tmp639 = (frost$core$Int64) {1};
int64_t $tmp640 = $tmp638.value;
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640 + $tmp641;
frost$core$Int64 $tmp643 = (frost$core$Int64) {$tmp642};
*(&local1) = $tmp643;
goto block2;
block2:;
frost$core$Int64 $tmp644 = *(&local1);
frost$core$Int64 $tmp645 = (frost$core$Int64) {4};
frost$core$Int64 $tmp646 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp644, $tmp645);
frost$core$Int64 $tmp647 = (frost$core$Int64) {0};
int64_t $tmp648 = $tmp646.value;
int64_t $tmp649 = $tmp647.value;
bool $tmp650 = $tmp648 != $tmp649;
frost$core$Bit $tmp651 = (frost$core$Bit) {$tmp650};
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block1; else goto block3;
block3:;
// line 431
frost$core$MutableString* $tmp653 = *(&local2);
frost$core$String* $tmp654 = frost$core$MutableString$convert$R$frost$core$String($tmp653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing REF($62:frost.core.String)
frost$core$MutableString* $tmp655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing replacement
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp656 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
// unreffing lineSoFar
*(&local0) = ((frost$core$String*) NULL);
return $tmp654;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 422
frost$core$RegularExpression* $tmp657 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp657, &$s658);
frost$core$Method* $tmp660 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp660, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Immutable*) NULL));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp657, ((frost$core$MutableMethod*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// unreffing REF($4:frost.core.Method)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

// line 437
frost$core$RegularExpression* $tmp661 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp661, &$s662);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param0, $tmp661, &$s663);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 493
frost$core$RegularExpression* $tmp664 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp665 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s666, &$s667);
frost$core$String* $tmp668 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp665, &$s669);
frost$core$String* $tmp670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp668, &$s671);
frost$core$String* $tmp672 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp670, &$s673);
frost$core$String* $tmp674 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp672, &$s675);
frost$core$Int64 $tmp676 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp664, $tmp674, $tmp676);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$RegularExpression* $tmp677 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local0) = $tmp664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// unreffing REF($1:frost.core.RegularExpression)
// line 501
frost$core$RegularExpression* $tmp678 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp679 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown($tmp679, param0);
frost$core$MutableMethod* $tmp681 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp681, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp679));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp678, $tmp681);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($39:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// unreffing REF($36:org.frostlang.frostc.frostdoc.Markdown.CodeReplacer)
frost$core$RegularExpression* $tmp682 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
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
frost$core$MutableString* $tmp683 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp683, &$s684);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$MutableString* $tmp685 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local0) = $tmp683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($1:frost.core.MutableString)
// line 506
frost$core$Int64 $tmp686 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp687 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp686);
*(&local1) = $tmp687;
// line 507
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp688 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp689 = *$tmp688;
frost$collections$Array** $tmp690 = &$tmp689->tokens;
frost$collections$Array* $tmp691 = *$tmp690;
ITable* $tmp692 = ((frost$collections$Iterable*) $tmp691)->$class->itable;
while ($tmp692->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[0];
frost$collections$Iterator* $tmp695 = $tmp693(((frost$collections$Iterable*) $tmp691));
goto block1;
block1:;
ITable* $tmp696 = $tmp695->$class->itable;
while ($tmp696->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[0];
frost$core$Bit $tmp699 = $tmp697($tmp695);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp701 = $tmp695->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[1];
frost$core$Object* $tmp704 = $tmp702($tmp695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp704)));
org$frostlang$frostc$Pair* $tmp705 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp704);
// line 508
org$frostlang$frostc$Pair* $tmp706 = *(&local2);
frost$core$Object** $tmp707 = &$tmp706->second;
frost$core$Object* $tmp708 = *$tmp707;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp709;
$tmp709 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp709->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp708)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp710 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp711;
$tmp711 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp711->value = $tmp710;
ITable* $tmp712 = ((frost$core$Equatable*) $tmp709)->$class->itable;
while ($tmp712->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp712 = $tmp712->next;
}
$fn714 $tmp713 = $tmp712->methods[1];
frost$core$Bit $tmp715 = $tmp713(((frost$core$Equatable*) $tmp709), ((frost$core$Equatable*) $tmp711));
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block6; else goto block7;
block6:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp717 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp718;
$tmp718 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp718->value = $tmp717;
frost$core$Int64 $tmp719 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp720 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp719);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp721;
$tmp721 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp721->value = $tmp720;
ITable* $tmp722 = ((frost$core$Equatable*) $tmp718)->$class->itable;
while ($tmp722->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp722 = $tmp722->next;
}
$fn724 $tmp723 = $tmp722->methods[1];
frost$core$Bit $tmp725 = $tmp723(((frost$core$Equatable*) $tmp718), ((frost$core$Equatable*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp721)));
// unreffing REF($64:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp718)));
// unreffing REF($60:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp725;
goto block8;
block7:;
*(&local3) = $tmp715;
goto block8;
block8:;
frost$core$Bit $tmp726 = *(&local3);
bool $tmp727 = $tmp726.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp711)));
// unreffing REF($54:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp709)));
// unreffing REF($51:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp727) goto block4; else goto block5;
block4:;
// line 509
frost$core$MutableString* $tmp728 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp728, &$s729);
goto block5;
block5:;
// line 511
org$frostlang$frostc$Pair* $tmp730 = *(&local2);
frost$core$Object** $tmp731 = &$tmp730->second;
frost$core$Object* $tmp732 = *$tmp731;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp733;
$tmp733 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp733->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp732)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp734 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp735;
$tmp735 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp735->value = $tmp734;
ITable* $tmp736 = ((frost$core$Equatable*) $tmp733)->$class->itable;
while ($tmp736->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp736 = $tmp736->next;
}
$fn738 $tmp737 = $tmp736->methods[1];
frost$core$Bit $tmp739 = $tmp737(((frost$core$Equatable*) $tmp733), ((frost$core$Equatable*) $tmp735));
bool $tmp740 = $tmp739.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp735)));
// unreffing REF($99:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp733)));
// unreffing REF($96:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp740) goto block9; else goto block10;
block9:;
// line 512
org$frostlang$frostc$Pair* $tmp741 = *(&local2);
frost$core$Object** $tmp742 = &$tmp741->second;
frost$core$Object* $tmp743 = *$tmp742;
*(&local1) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp743)->value;
// line 513
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp744 = *(&local1);
frost$core$Int64 $tmp745 = $tmp744.$rawValue;
frost$core$Int64 $tmp746 = (frost$core$Int64) {0};
frost$core$Bit $tmp747 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp746);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block12; else goto block13;
block12:;
goto block11;
block13:;
frost$core$Int64 $tmp749 = (frost$core$Int64) {1};
frost$core$Bit $tmp750 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp752 = (frost$core$Int64) {2};
frost$core$Bit $tmp753 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp752);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block14; else goto block16;
block14:;
// line 518
frost$core$MutableString* $tmp755 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp755, &$s756);
goto block11;
block16:;
frost$core$Int64 $tmp757 = (frost$core$Int64) {3};
frost$core$Bit $tmp758 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp757);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block17; else goto block18;
block17:;
// line 521
frost$core$MutableString* $tmp760 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp760, &$s761);
goto block11;
block18:;
frost$core$Int64 $tmp762 = (frost$core$Int64) {4};
frost$core$Bit $tmp763 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block19; else goto block20;
block19:;
// line 524
frost$core$MutableString* $tmp765 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp765, &$s766);
goto block11;
block20:;
frost$core$Int64 $tmp767 = (frost$core$Int64) {5};
frost$core$Bit $tmp768 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp767);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block21; else goto block22;
block21:;
// line 527
frost$core$MutableString* $tmp770 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp770, &$s771);
goto block11;
block22:;
frost$core$Int64 $tmp772 = (frost$core$Int64) {6};
frost$core$Bit $tmp773 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block23; else goto block24;
block23:;
// line 530
frost$core$MutableString* $tmp775 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp775, &$s776);
goto block11;
block24:;
frost$core$Int64 $tmp777 = (frost$core$Int64) {7};
frost$core$Bit $tmp778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block25; else goto block26;
block25:;
// line 533
frost$core$MutableString* $tmp780 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp780, &$s781);
goto block11;
block26:;
frost$core$Int64 $tmp782 = (frost$core$Int64) {8};
frost$core$Bit $tmp783 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block27; else goto block28;
block27:;
// line 536
frost$core$MutableString* $tmp785 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp785, &$s786);
goto block11;
block28:;
frost$core$Int64 $tmp787 = (frost$core$Int64) {9};
frost$core$Bit $tmp788 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block29; else goto block30;
block29:;
// line 539
frost$core$MutableString* $tmp790 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp790, &$s791);
goto block11;
block30:;
frost$core$Int64 $tmp792 = (frost$core$Int64) {10};
frost$core$Bit $tmp793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block31; else goto block32;
block31:;
// line 542
frost$core$MutableString* $tmp795 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp795, &$s796);
goto block11;
block32:;
frost$core$Int64 $tmp797 = (frost$core$Int64) {11};
frost$core$Bit $tmp798 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block33; else goto block34;
block33:;
// line 545
frost$core$MutableString* $tmp800 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp800, &$s801);
goto block11;
block34:;
frost$core$Int64 $tmp802 = (frost$core$Int64) {12};
frost$core$Bit $tmp803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp745, $tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block35; else goto block36;
block35:;
// line 548
frost$core$MutableString* $tmp805 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp805, &$s806);
goto block11;
block36:;
// line 551
frost$core$Bit $tmp807 = frost$core$Bit$init$builtin_bit(false);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp809 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s810, $tmp809);
abort(); // unreachable
block37:;
goto block11;
block11:;
goto block10;
block10:;
// line 555
frost$core$MutableString* $tmp811 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp812 = *(&local2);
frost$core$Object** $tmp813 = &$tmp812->first;
frost$core$Object* $tmp814 = *$tmp813;
frost$core$String* $tmp815 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param1, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp814)->value);
frost$core$MutableString$init$frost$core$String($tmp811, $tmp815);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$MutableString* $tmp816 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local4) = $tmp811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// unreffing REF($233:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($227:frost.core.MutableString)
// line 556
frost$core$MutableString* $tmp817 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp817, &$s818, &$s819);
// line 557
frost$core$MutableString* $tmp820 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp820, &$s821, &$s822);
// line 558
frost$core$MutableString* $tmp823 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp823, &$s824, &$s825);
// line 559
frost$core$MutableString* $tmp826 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp827 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp828 = *$tmp827;
$fn830 $tmp829 = ($fn830) $tmp828->$class->vtable[2];
frost$core$String* $tmp831 = $tmp829($tmp828, &$s832);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp826, &$s833, $tmp831);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($262:frost.core.String)
// line 560
frost$core$MutableString* $tmp834 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp835 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp836 = *$tmp835;
$fn838 $tmp837 = ($fn838) $tmp836->$class->vtable[2];
frost$core$String* $tmp839 = $tmp837($tmp836, &$s840);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp834, &$s841, $tmp839);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($272:frost.core.String)
// line 561
frost$core$MutableString* $tmp842 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp843 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp844 = *$tmp843;
$fn846 $tmp845 = ($fn846) $tmp844->$class->vtable[2];
frost$core$String* $tmp847 = $tmp845($tmp844, &$s848);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp842, &$s849, $tmp847);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing REF($282:frost.core.String)
// line 562
frost$core$MutableString* $tmp850 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp851 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp852 = *$tmp851;
$fn854 $tmp853 = ($fn854) $tmp852->$class->vtable[2];
frost$core$String* $tmp855 = $tmp853($tmp852, &$s856);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp850, &$s857, $tmp855);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
// unreffing REF($292:frost.core.String)
// line 563
frost$core$MutableString* $tmp858 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp859 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp860 = *$tmp859;
$fn862 $tmp861 = ($fn862) $tmp860->$class->vtable[2];
frost$core$String* $tmp863 = $tmp861($tmp860, &$s864);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp858, &$s865, $tmp863);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing REF($302:frost.core.String)
// line 564
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp866 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp867;
$tmp867 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp867->value = $tmp866;
frost$core$Int64 $tmp868 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp869 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp868);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp870;
$tmp870 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp870->value = $tmp869;
ITable* $tmp871 = ((frost$core$Equatable*) $tmp867)->$class->itable;
while ($tmp871->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp871 = $tmp871->next;
}
$fn873 $tmp872 = $tmp871->methods[1];
frost$core$Bit $tmp874 = $tmp872(((frost$core$Equatable*) $tmp867), ((frost$core$Equatable*) $tmp870));
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block41; else goto block42;
block41:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp876 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp877;
$tmp877 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp877->value = $tmp876;
frost$core$Int64 $tmp878 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp879 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp878);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp880;
$tmp880 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp880->value = $tmp879;
ITable* $tmp881 = ((frost$core$Equatable*) $tmp877)->$class->itable;
while ($tmp881->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp881 = $tmp881->next;
}
$fn883 $tmp882 = $tmp881->methods[1];
frost$core$Bit $tmp884 = $tmp882(((frost$core$Equatable*) $tmp877), ((frost$core$Equatable*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp880)));
// unreffing REF($323:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp877)));
// unreffing REF($319:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp884;
goto block43;
block42:;
*(&local5) = $tmp874;
goto block43;
block43:;
frost$core$Bit $tmp885 = *(&local5);
bool $tmp886 = $tmp885.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp870)));
// unreffing REF($313:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp867)));
// unreffing REF($309:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp886) goto block39; else goto block40;
block39:;
// line 566
frost$core$MutableString* $tmp887 = *(&local0);
org$frostlang$frostc$Pair* $tmp888 = *(&local2);
frost$core$Object** $tmp889 = &$tmp888->first;
frost$core$Object* $tmp890 = *$tmp889;
org$frostlang$frostc$parser$Token$Kind $tmp891 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp890)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp892;
$tmp892 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp892->value = $tmp891;
frost$core$String* $tmp893 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s894, ((frost$core$Object*) $tmp892));
frost$core$String* $tmp895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp893, &$s896);
frost$core$MutableString$append$frost$core$String($tmp887, $tmp895);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing REF($355:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing REF($354:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing REF($353:frost.core.Object)
goto block40;
block40:;
// line 568
frost$core$MutableString* $tmp897 = *(&local0);
frost$core$MutableString* $tmp898 = *(&local4);
frost$core$MutableString$append$frost$core$Object($tmp897, ((frost$core$Object*) $tmp898));
// line 569
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp899 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp900;
$tmp900 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp900->value = $tmp899;
frost$core$Int64 $tmp901 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp902 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp901);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp903;
$tmp903 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp903->value = $tmp902;
ITable* $tmp904 = ((frost$core$Equatable*) $tmp900)->$class->itable;
while ($tmp904->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[1];
frost$core$Bit $tmp907 = $tmp905(((frost$core$Equatable*) $tmp900), ((frost$core$Equatable*) $tmp903));
bool $tmp908 = $tmp907.value;
if ($tmp908) goto block46; else goto block47;
block46:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp909 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp910;
$tmp910 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp910->value = $tmp909;
frost$core$Int64 $tmp911 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp912 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp911);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp913;
$tmp913 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp913->value = $tmp912;
ITable* $tmp914 = ((frost$core$Equatable*) $tmp910)->$class->itable;
while ($tmp914->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp914 = $tmp914->next;
}
$fn916 $tmp915 = $tmp914->methods[1];
frost$core$Bit $tmp917 = $tmp915(((frost$core$Equatable*) $tmp910), ((frost$core$Equatable*) $tmp913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp913)));
// unreffing REF($388:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp910)));
// unreffing REF($384:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp917;
goto block48;
block47:;
*(&local6) = $tmp907;
goto block48;
block48:;
frost$core$Bit $tmp918 = *(&local6);
bool $tmp919 = $tmp918.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp903)));
// unreffing REF($378:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp900)));
// unreffing REF($374:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp919) goto block44; else goto block45;
block44:;
// line 571
frost$core$MutableString* $tmp920 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp920, &$s921);
goto block45;
block45:;
frost$core$MutableString* $tmp922 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing s
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp704);
// unreffing REF($37:frost.collections.Iterator.T)
org$frostlang$frostc$Pair* $tmp923 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// unreffing REF($26:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 574
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp924 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp925;
$tmp925 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp925->value = $tmp924;
frost$core$Int64 $tmp926 = (frost$core$Int64) {0};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp928)));
// unreffing REF($437:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp925)));
// unreffing REF($433:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp933) goto block49; else goto block50;
block49:;
// line 575
frost$core$MutableString* $tmp934 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp934, &$s935);
goto block50;
block50:;
// line 577
frost$core$MutableString* $tmp936 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp936, &$s937);
// line 578
frost$core$MutableString* $tmp938 = *(&local0);
frost$core$String* $tmp939 = frost$core$MutableString$finish$R$frost$core$String($tmp938);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
// unreffing REF($457:frost.core.String)
frost$core$MutableString* $tmp940 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp939;

}
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
org$frostlang$frostc$parser$Token local5;
// line 582
frost$threads$MessageQueue** $tmp941 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp942 = *$tmp941;
frost$threads$MessageQueue$clear($tmp942);
// line 583
frost$core$String* $tmp943 = frost$core$MutableString$convert$R$frost$core$String(param1);
frost$core$String* $tmp944 = frost$core$String$get_trimmed$R$frost$core$String($tmp943);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$String* $tmp945 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local0) = $tmp944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing REF($6:frost.core.String)
// line 584
org$frostlang$frostc$parser$Parser** $tmp946 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp947 = *$tmp946;
frost$io$File** $tmp948 = &param0->source;
frost$io$File* $tmp949 = *$tmp948;
frost$core$String* $tmp950 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp947, $tmp949, $tmp950);
// line 585
org$frostlang$frostc$parser$Parser** $tmp951 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp952 = *$tmp951;
org$frostlang$frostc$ASTNode* $tmp953 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp952);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
org$frostlang$frostc$ASTNode* $tmp954 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local1) = $tmp953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing REF($31:org.frostlang.frostc.ASTNode?)
// line 586
org$frostlang$frostc$ASTNode* $tmp955 = *(&local1);
frost$core$Bit $tmp956 = frost$core$Bit$init$builtin_bit($tmp955 != NULL);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block3; else goto block4;
block3:;
frost$threads$MessageQueue** $tmp958 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp959 = *$tmp958;
frost$core$Int64 $tmp960 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp959);
frost$core$Int64 $tmp961 = (frost$core$Int64) {0};
frost$core$Bit $tmp962 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp960, $tmp961);
*(&local2) = $tmp962;
goto block5;
block4:;
*(&local2) = $tmp956;
goto block5;
block5:;
frost$core$Bit $tmp963 = *(&local2);
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block1; else goto block2;
block1:;
// line 587
frost$core$Bit $tmp965 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp966 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp965);
org$frostlang$frostc$parser$Parser** $tmp967 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp968 = *$tmp967;
$fn970 $tmp969 = ($fn970) param0->$class->vtable[16];
frost$core$String* $tmp971 = $tmp969(param0, $tmp968);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp966, $tmp971);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// unreffing REF($67:frost.core.String)
// line 588
org$frostlang$frostc$ASTNode* $tmp972 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp973 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block2:;
// line 591
frost$threads$MessageQueue** $tmp974 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp975 = *$tmp974;
frost$threads$MessageQueue$clear($tmp975);
// line 592
org$frostlang$frostc$parser$Parser** $tmp976 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp977 = *$tmp976;
frost$io$File** $tmp978 = &param0->source;
frost$io$File* $tmp979 = *$tmp978;
frost$core$String* $tmp980 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp977, $tmp979, $tmp980);
// line 593
goto block6;
block6:;
org$frostlang$frostc$parser$Parser** $tmp981 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp982 = *$tmp981;
org$frostlang$frostc$parser$Token $tmp983 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp982);
org$frostlang$frostc$parser$Token$Kind $tmp984 = $tmp983.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp985;
$tmp985 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp985->value = $tmp984;
frost$core$Int64 $tmp986 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp987 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp986);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp988;
$tmp988 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp988->value = $tmp987;
ITable* $tmp989 = ((frost$core$Equatable*) $tmp985)->$class->itable;
while ($tmp989->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp989 = $tmp989->next;
}
$fn991 $tmp990 = $tmp989->methods[1];
frost$core$Bit $tmp992 = $tmp990(((frost$core$Equatable*) $tmp985), ((frost$core$Equatable*) $tmp988));
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block9; else goto block10;
block9:;
frost$threads$MessageQueue** $tmp994 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp995 = *$tmp994;
frost$core$Int64 $tmp996 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp995);
frost$core$Int64 $tmp997 = (frost$core$Int64) {0};
frost$core$Bit $tmp998 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp996, $tmp997);
*(&local3) = $tmp998;
goto block11;
block10:;
*(&local3) = $tmp992;
goto block11;
block11:;
frost$core$Bit $tmp999 = *(&local3);
bool $tmp1000 = $tmp999.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp988)));
// unreffing REF($106:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp985)));
// unreffing REF($102:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1000) goto block7; else goto block8;
block7:;
// line 594
org$frostlang$frostc$parser$Parser** $tmp1001 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1002 = *$tmp1001;
org$frostlang$frostc$ASTNode* $tmp1003 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q($tmp1002);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing REF($133:org.frostlang.frostc.ASTNode?)
goto block6;
block8:;
// line 596
frost$threads$MessageQueue** $tmp1004 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1005 = *$tmp1004;
frost$core$Int64 $tmp1006 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1005);
frost$core$Int64 $tmp1007 = (frost$core$Int64) {0};
frost$core$Bit $tmp1008 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1006, $tmp1007);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block12; else goto block13;
block12:;
// line 597
frost$core$Bit $tmp1010 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1011 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1010);
org$frostlang$frostc$parser$Parser** $tmp1012 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1013 = *$tmp1012;
$fn1015 $tmp1014 = ($fn1015) param0->$class->vtable[16];
frost$core$String* $tmp1016 = $tmp1014(param0, $tmp1013);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1011, $tmp1016);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// unreffing REF($153:frost.core.String)
// line 598
org$frostlang$frostc$ASTNode* $tmp1017 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1018 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block13:;
// line 601
frost$threads$MessageQueue** $tmp1019 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1020 = *$tmp1019;
frost$threads$MessageQueue$clear($tmp1020);
// line 602
org$frostlang$frostc$parser$Parser** $tmp1021 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1022 = *$tmp1021;
frost$io$File** $tmp1023 = &param0->source;
frost$io$File* $tmp1024 = *$tmp1023;
frost$core$String* $tmp1025 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1022, $tmp1024, $tmp1025);
// line 603
goto block14;
block14:;
org$frostlang$frostc$parser$Parser** $tmp1026 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1027 = *$tmp1026;
org$frostlang$frostc$parser$Token $tmp1028 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp1027);
org$frostlang$frostc$parser$Token$Kind $tmp1029 = $tmp1028.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1030;
$tmp1030 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1030->value = $tmp1029;
frost$core$Int64 $tmp1031 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1032 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1031);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1033;
$tmp1033 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1033->value = $tmp1032;
ITable* $tmp1034 = ((frost$core$Equatable*) $tmp1030)->$class->itable;
while ($tmp1034->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1034 = $tmp1034->next;
}
$fn1036 $tmp1035 = $tmp1034->methods[1];
frost$core$Bit $tmp1037 = $tmp1035(((frost$core$Equatable*) $tmp1030), ((frost$core$Equatable*) $tmp1033));
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block17; else goto block18;
block17:;
frost$threads$MessageQueue** $tmp1039 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1040 = *$tmp1039;
frost$core$Int64 $tmp1041 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1040);
frost$core$Int64 $tmp1042 = (frost$core$Int64) {0};
frost$core$Bit $tmp1043 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1041, $tmp1042);
*(&local4) = $tmp1043;
goto block19;
block18:;
*(&local4) = $tmp1037;
goto block19;
block19:;
frost$core$Bit $tmp1044 = *(&local4);
bool $tmp1045 = $tmp1044.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1033)));
// unreffing REF($192:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1030)));
// unreffing REF($188:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1045) goto block15; else goto block16;
block15:;
// line 604
org$frostlang$frostc$parser$Parser** $tmp1046 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1047 = *$tmp1046;
org$frostlang$frostc$ASTNode* $tmp1048 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q($tmp1047);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
// unreffing REF($219:org.frostlang.frostc.ASTNode?)
goto block14;
block16:;
// line 606
frost$threads$MessageQueue** $tmp1049 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1050 = *$tmp1049;
frost$core$Int64 $tmp1051 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1050);
frost$core$Int64 $tmp1052 = (frost$core$Int64) {0};
frost$core$Bit $tmp1053 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1051, $tmp1052);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block20; else goto block21;
block20:;
// line 607
frost$core$Bit $tmp1055 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1056 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1055);
org$frostlang$frostc$parser$Parser** $tmp1057 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1058 = *$tmp1057;
$fn1060 $tmp1059 = ($fn1060) param0->$class->vtable[16];
frost$core$String* $tmp1061 = $tmp1059(param0, $tmp1058);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1056, $tmp1061);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
// unreffing REF($239:frost.core.String)
// line 608
org$frostlang$frostc$ASTNode* $tmp1062 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1063 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block21:;
// line 611
frost$threads$MessageQueue** $tmp1064 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1065 = *$tmp1064;
frost$threads$MessageQueue$clear($tmp1065);
// line 612
org$frostlang$frostc$parser$Parser** $tmp1066 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1067 = *$tmp1066;
frost$io$File** $tmp1068 = &param0->source;
frost$io$File* $tmp1069 = *$tmp1068;
frost$core$String* $tmp1070 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1067, $tmp1069, $tmp1070);
// line 613
goto block22;
block22:;
// line 614
org$frostlang$frostc$parser$Parser** $tmp1071 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1072 = *$tmp1071;
org$frostlang$frostc$parser$Token $tmp1073 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1072);
*(&local5) = $tmp1073;
// line 615
org$frostlang$frostc$parser$Token $tmp1074 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp1075 = $tmp1074.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1076;
$tmp1076 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1076->value = $tmp1075;
frost$core$Int64 $tmp1077 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1078 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1077);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1079;
$tmp1079 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1079->value = $tmp1078;
ITable* $tmp1080 = ((frost$core$Equatable*) $tmp1076)->$class->itable;
while ($tmp1080->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1080 = $tmp1080->next;
}
$fn1082 $tmp1081 = $tmp1080->methods[0];
frost$core$Bit $tmp1083 = $tmp1081(((frost$core$Equatable*) $tmp1076), ((frost$core$Equatable*) $tmp1079));
bool $tmp1084 = $tmp1083.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1079)));
// unreffing REF($282:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1076)));
// unreffing REF($278:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1084) goto block24; else goto block25;
block24:;
// line 616
goto block23;
block25:;
goto block22;
block23:;
// line 619
frost$core$Bit $tmp1085 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1086 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1085);
org$frostlang$frostc$parser$Parser** $tmp1087 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1088 = *$tmp1087;
$fn1090 $tmp1089 = ($fn1090) param0->$class->vtable[16];
frost$core$String* $tmp1091 = $tmp1089(param0, $tmp1088);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1086, $tmp1091);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
// unreffing REF($302:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1093 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 625
frost$core$RegularExpression* $tmp1094 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1094, &$s1095);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1094, &$s1096);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
// unreffing REF($1:frost.core.RegularExpression)
// line 626
$fn1098 $tmp1097 = ($fn1098) param0->$class->vtable[17];
$tmp1097(param0, param1);
// line 627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s1099, &$s1100);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Int64 local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
// line 631
frost$core$Int64 $tmp1101 = (frost$core$Int64) {4};
frost$core$Int64 $tmp1102 = (frost$core$Int64) {1};
int64_t $tmp1103 = $tmp1101.value;
int64_t $tmp1104 = $tmp1102.value;
int64_t $tmp1105 = $tmp1103 - $tmp1104;
frost$core$Int64 $tmp1106 = (frost$core$Int64) {$tmp1105};
*(&local0) = $tmp1106;
// line 633
frost$core$Int64 $tmp1107 = *(&local0);
frost$core$Int64$wrapper* $tmp1108;
$tmp1108 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1108->value = $tmp1107;
frost$core$String* $tmp1109 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1110, ((frost$core$Object*) $tmp1108));
frost$core$String* $tmp1111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1109, &$s1112);
frost$core$String* $tmp1113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1111, &$s1114);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$String* $tmp1115 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local1) = $tmp1113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// unreffing REF($10:frost.core.Object)
// line 656
frost$core$Int64* $tmp1116 = &param0->listLevel;
frost$core$Int64 $tmp1117 = *$tmp1116;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {0};
int64_t $tmp1119 = $tmp1117.value;
int64_t $tmp1120 = $tmp1118.value;
bool $tmp1121 = $tmp1119 > $tmp1120;
frost$core$Bit $tmp1122 = (frost$core$Bit) {$tmp1121};
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block1; else goto block3;
block1:;
// line 657
frost$core$RegularExpression* $tmp1124 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1125 = *(&local1);
frost$core$String* $tmp1126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1127, $tmp1125);
frost$core$String* $tmp1128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1126, &$s1129);
frost$core$RegularExpression$init$frost$core$String($tmp1124, $tmp1128);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$core$RegularExpression* $tmp1130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local2) = $tmp1124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
// unreffing REF($44:frost.core.RegularExpression)
// line 658
frost$core$RegularExpression* $tmp1131 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$_Closure12* $tmp1132 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown($tmp1132, param0);
frost$core$MutableMethod* $tmp1134 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1134, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1132));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1131, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1134)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($70:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($67:org.frostlang.frostc.frostdoc.Markdown._Closure12)
frost$core$RegularExpression* $tmp1135 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// unreffing matchStartOfLine
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 684
frost$core$RegularExpression* $tmp1136 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1137 = *(&local1);
frost$core$String* $tmp1138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1139, $tmp1137);
frost$core$RegularExpression$init$frost$core$String($tmp1136, $tmp1138);
*(&local3) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
frost$core$RegularExpression* $tmp1140 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local3) = $tmp1136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing REF($92:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing REF($90:frost.core.RegularExpression)
// line 685
frost$core$RegularExpression* $tmp1141 = *(&local3);
org$frostlang$frostc$frostdoc$Markdown$_Closure14* $tmp1142 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown($tmp1142, param0);
frost$core$MutableMethod* $tmp1144 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1144, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1142));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1141, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1144)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// unreffing REF($112:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
// unreffing REF($109:org.frostlang.frostc.frostdoc.Markdown._Closure14)
frost$core$RegularExpression* $tmp1145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
// unreffing matchStartOfLine
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block2;
block2:;
frost$core$String* $tmp1146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing wholeList
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// line 726
frost$core$Int64* $tmp1147 = &param0->listLevel;
frost$core$Int64 $tmp1148 = *$tmp1147;
frost$core$Int64 $tmp1149 = (frost$core$Int64) {1};
int64_t $tmp1150 = $tmp1148.value;
int64_t $tmp1151 = $tmp1149.value;
int64_t $tmp1152 = $tmp1150 + $tmp1151;
frost$core$Int64 $tmp1153 = (frost$core$Int64) {$tmp1152};
frost$core$Int64* $tmp1154 = &param0->listLevel;
*$tmp1154 = $tmp1153;
// line 729
frost$core$RegularExpression* $tmp1155 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1155, &$s1156);
frost$core$String* $tmp1157 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(param1, $tmp1155, &$s1158);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$String* $tmp1159 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local0) = $tmp1157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// unreffing REF($11:frost.core.RegularExpression)
// line 731
frost$core$RegularExpression* $tmp1160 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1162, &$s1163);
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1161, &$s1165);
frost$core$Int64 $tmp1166 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1160, $tmp1164, $tmp1166);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$RegularExpression* $tmp1167 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local1) = $tmp1160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// unreffing REF($30:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// unreffing REF($28:frost.core.RegularExpression)
// line 736
frost$core$String* $tmp1168 = *(&local0);
frost$core$RegularExpression* $tmp1169 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure16* $tmp1170 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown($tmp1170, param0);
frost$core$MutableMethod* $tmp1172 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1172, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1170));
frost$core$String* $tmp1173 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String($tmp1168, $tmp1169, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1172)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
frost$core$String* $tmp1174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
*(&local0) = $tmp1173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
// unreffing REF($60:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing REF($55:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
// unreffing REF($52:org.frostlang.frostc.frostdoc.Markdown._Closure16)
// line 753
frost$core$Int64* $tmp1175 = &param0->listLevel;
frost$core$Int64 $tmp1176 = *$tmp1175;
frost$core$Int64 $tmp1177 = (frost$core$Int64) {1};
int64_t $tmp1178 = $tmp1176.value;
int64_t $tmp1179 = $tmp1177.value;
int64_t $tmp1180 = $tmp1178 - $tmp1179;
frost$core$Int64 $tmp1181 = (frost$core$Int64) {$tmp1180};
frost$core$Int64* $tmp1182 = &param0->listLevel;
*$tmp1182 = $tmp1181;
// line 754
frost$core$String* $tmp1183 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$RegularExpression* $tmp1184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
// unreffing p
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// unreffing list
*(&local0) = ((frost$core$String*) NULL);
return $tmp1183;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

// line 759
frost$core$Bit $tmp1186 = frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(param0, &$s1187);
return $tmp1186;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
// line 764
frost$core$Bit $tmp1188 = frost$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1188;
goto block3;
block2:;
frost$core$Bit $tmp1190 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s1191);
*(&local0) = $tmp1190;
goto block3;
block3:;
frost$core$Bit $tmp1192 = *(&local0);
return $tmp1192;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 769
frost$core$RegularExpression* $tmp1193 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1193, &$s1194);
org$frostlang$frostc$frostdoc$Markdown$_Closure18* $tmp1195 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown($tmp1195, param0);
frost$core$MutableMethod* $tmp1197 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1197, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1195));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1193, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1197)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
// unreffing REF($6:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
// unreffing REF($3:org.frostlang.frostc.frostdoc.Markdown._Closure18)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// unreffing REF($1:frost.core.RegularExpression)
// line 774
frost$core$RegularExpression* $tmp1198 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1198, &$s1199);
org$frostlang$frostc$frostdoc$Markdown$_Closure20* $tmp1200 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown($tmp1200, param0);
frost$core$MutableMethod* $tmp1202 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1202, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1200));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1198, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1202)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
// unreffing REF($27:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
// unreffing REF($24:org.frostlang.frostc.frostdoc.Markdown._Closure20)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// unreffing REF($22:frost.core.RegularExpression)
// line 781
frost$core$RegularExpression* $tmp1203 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int64 $tmp1204 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1203, &$s1205, $tmp1204);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$RegularExpression* $tmp1206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local0) = $tmp1203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// unreffing REF($43:frost.core.RegularExpression)
// line 782
frost$core$RegularExpression* $tmp1207 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure22* $tmp1208 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown($tmp1208, param0);
frost$core$MutableMethod* $tmp1210 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1210, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1208));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1207, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1210)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
// unreffing REF($61:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// unreffing REF($58:org.frostlang.frostc.frostdoc.Markdown._Closure22)
frost$core$RegularExpression* $tmp1211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
// unreffing p
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
frost$core$RegularExpression* $tmp1230 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1230, &$s1231);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1230, &$s1232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// unreffing REF($28:frost.core.RegularExpression)
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String(frost$core$Int64 param0) {

// line 820
frost$core$Int64 $tmp1233 = (frost$core$Int64) {0};
frost$core$Bit $tmp1234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param0, $tmp1233);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block1; else goto block3;
block1:;
// line 821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1236));
return &$s1237;
block3:;
// line 1
// line 824
frost$core$Int64 $tmp1238 = (frost$core$Int64) {1};
int64_t $tmp1239 = param0.value;
int64_t $tmp1240 = $tmp1238.value;
int64_t $tmp1241 = $tmp1239 - $tmp1240;
frost$core$Int64 $tmp1242 = (frost$core$Int64) {$tmp1241};
frost$core$String* $tmp1243 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1242);
frost$core$String* $tmp1244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1245, $tmp1243);
frost$core$String* $tmp1246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1244, &$s1247);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing REF($16:frost.core.String)
return $tmp1246;
block2:;
frost$core$Bit $tmp1248 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1250 = (frost$core$Int64) {819};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1251, $tmp1250, &$s1252);
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
frost$collections$Array* $tmp1253 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1253);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$collections$Array* $tmp1254 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local0) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.frostdoc.Markdown.HTMLToken>)
// line 830
frost$core$Int64 $tmp1255 = (frost$core$Int64) {6};
frost$core$String* $tmp1256 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1255);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1257 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local1) = $tmp1256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// unreffing REF($16:frost.core.String)
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
// unreffing REF($32:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// unreffing REF($30:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
// unreffing REF($28:frost.core.RegularExpression)
// line 840
frost$core$RegularExpression* $tmp1268 = *(&local2);
frost$core$Matcher* $tmp1269 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1268, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Matcher* $tmp1270 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local3) = $tmp1269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// unreffing REF($56:frost.core.Matcher)
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
// unreffing REF($82:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1276)));
// unreffing REF($78:frost.core.Comparable<frost.core.String.Index>)
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
// unreffing REF($103:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing REF($96:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
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
// unreffing REF($125:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// unreffing REF($117:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
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
// unreffing REF($145:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1307)));
// unreffing REF($142:frost.core.Comparable<frost.core.String.Index>)
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
// unreffing REF($165:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
// unreffing REF($159:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
goto block7;
block7:;
// line 853
frost$collections$Array* $tmp1323 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1323)));
frost$core$Matcher* $tmp1324 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
// unreffing m
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$RegularExpression* $tmp1325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// unreffing p
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1326 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing nestedTags
*(&local1) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1327 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// unreffing tokens
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
frost$core$String* $tmp1328 = frost$core$MutableString$convert$R$frost$core$String(param1);
$fn1330 $tmp1329 = ($fn1330) param0->$class->vtable[23];
frost$collections$ListView* $tmp1331 = $tmp1329(param0, $tmp1328);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$collections$ListView* $tmp1332 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local0) = $tmp1331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// unreffing REF($3:frost.collections.ListView<org.frostlang.frostc.frostdoc.Markdown.HTMLToken>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// unreffing REF($1:frost.core.String)
// line 867
frost$core$MutableString$clear(param1);
// line 869
frost$collections$ListView* $tmp1333 = *(&local0);
ITable* $tmp1334 = ((frost$collections$Iterable*) $tmp1333)->$class->itable;
while ($tmp1334->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1334 = $tmp1334->next;
}
$fn1336 $tmp1335 = $tmp1334->methods[0];
frost$collections$Iterator* $tmp1337 = $tmp1335(((frost$collections$Iterable*) $tmp1333));
goto block1;
block1:;
ITable* $tmp1338 = $tmp1337->$class->itable;
while ($tmp1338->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1338 = $tmp1338->next;
}
$fn1340 $tmp1339 = $tmp1338->methods[0];
frost$core$Bit $tmp1341 = $tmp1339($tmp1337);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1343 = $tmp1337->$class->itable;
while ($tmp1343->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1343 = $tmp1343->next;
}
$fn1345 $tmp1344 = $tmp1343->methods[1];
frost$core$Object* $tmp1346 = $tmp1344($tmp1337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1346)));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1346);
// line 870
*(&local2) = ((frost$core$String*) NULL);
// line 871
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1348 = *(&local1);
frost$core$Int64* $tmp1349 = &$tmp1348->$rawValue;
frost$core$Int64 $tmp1350 = *$tmp1349;
frost$core$Int64 $tmp1351 = (frost$core$Int64) {0};
frost$core$Bit $tmp1352 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1350, $tmp1351);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block5; else goto block6;
block5:;
frost$core$String** $tmp1354 = (frost$core$String**) ($tmp1348->$data + 0);
frost$core$String* $tmp1355 = *$tmp1354;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$String* $tmp1356 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local3) = $tmp1355;
// line 873
frost$core$String* $tmp1357 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
frost$core$String* $tmp1358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local2) = $tmp1357;
// line 874
frost$core$String* $tmp1359 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1360 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1361 = *$tmp1360;
$fn1363 $tmp1362 = ($fn1363) $tmp1361->$class->vtable[2];
frost$core$String* $tmp1364 = $tmp1362($tmp1361, &$s1365);
frost$core$String* $tmp1366 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1359, &$s1367, $tmp1364);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$String* $tmp1368 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local2) = $tmp1366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
// unreffing REF($76:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
// unreffing REF($75:frost.core.String)
// line 875
frost$core$String* $tmp1369 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1370 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1371 = *$tmp1370;
$fn1373 $tmp1372 = ($fn1373) $tmp1371->$class->vtable[2];
frost$core$String* $tmp1374 = $tmp1372($tmp1371, &$s1375);
frost$core$String* $tmp1376 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1369, &$s1377, $tmp1374);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$String* $tmp1378 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local2) = $tmp1376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
// unreffing REF($94:frost.core.String)
// line 876
frost$core$String* $tmp1379 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1380 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1381 = *$tmp1380;
$fn1383 $tmp1382 = ($fn1383) $tmp1381->$class->vtable[2];
frost$core$String* $tmp1384 = $tmp1382($tmp1381, &$s1385);
frost$core$String* $tmp1386 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1379, &$s1387, $tmp1384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
frost$core$String* $tmp1388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local2) = $tmp1386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
// unreffing REF($114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
// unreffing REF($113:frost.core.String)
// line 877
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
// unreffing REF($133:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
// unreffing REF($132:frost.core.String)
frost$core$String* $tmp1399 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
// unreffing text
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
frost$core$Int64 $tmp1400 = (frost$core$Int64) {1};
frost$core$Bit $tmp1401 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1350, $tmp1400);
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block7; else goto block4;
block7:;
frost$core$String** $tmp1403 = (frost$core$String**) ($tmp1348->$data + 0);
frost$core$String* $tmp1404 = *$tmp1403;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
frost$core$String* $tmp1405 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local4) = $tmp1404;
// line 880
frost$core$String* $tmp1406 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$String* $tmp1407 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local2) = $tmp1406;
frost$core$String* $tmp1408 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
// unreffing text
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 883
frost$core$String* $tmp1409 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, $tmp1409);
frost$core$String* $tmp1410 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
// unreffing value
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1346);
// unreffing REF($35:frost.collections.Iterator.T)
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1411 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// unreffing token
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
// unreffing REF($24:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$ListView* $tmp1412 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// unreffing tokens
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 889
frost$core$RegularExpression* $tmp1413 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1413, &$s1414);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1413, &$s1415);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
// unreffing REF($1:frost.core.RegularExpression)
// line 890
frost$core$RegularExpression* $tmp1416 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1416, &$s1417);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1416, &$s1418);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// unreffing REF($8:frost.core.RegularExpression)
// line 893
frost$core$RegularExpression* $tmp1419 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1421, &$s1422);
frost$core$String* $tmp1423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1420, &$s1424);
frost$core$String* $tmp1425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1423, &$s1426);
frost$core$RegularExpression$init$frost$core$String($tmp1419, $tmp1425);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
frost$core$RegularExpression* $tmp1427 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local0) = $tmp1419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
// unreffing REF($16:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing REF($15:frost.core.RegularExpression)
// line 898
frost$core$RegularExpression* $tmp1428 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure24* $tmp1429 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown($tmp1429, param0);
frost$core$MutableMethod* $tmp1431 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1431, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1429));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1428, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1431)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
// unreffing REF($44:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// unreffing REF($41:org.frostlang.frostc.frostdoc.Markdown._Closure24)
frost$core$RegularExpression* $tmp1432 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
// unreffing imageLink
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// line 931
frost$core$RegularExpression* $tmp1433 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1435, &$s1436);
frost$core$String* $tmp1437 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1434, &$s1438);
frost$core$String* $tmp1439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1437, &$s1440);
frost$core$RegularExpression$init$frost$core$String($tmp1433, $tmp1439);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$RegularExpression* $tmp1441 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
*(&local0) = $tmp1433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// unreffing REF($1:frost.core.RegularExpression)
// line 936
frost$core$RegularExpression* $tmp1442 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure26* $tmp1443 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown($tmp1443, param0);
frost$core$MutableMethod* $tmp1445 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1445, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1443));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1442, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1445)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
// unreffing REF($30:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
// unreffing REF($27:org.frostlang.frostc.frostdoc.Markdown._Closure26)
// line 968
frost$core$RegularExpression* $tmp1446 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1448, &$s1449);
frost$core$String* $tmp1450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1447, &$s1451);
frost$core$String* $tmp1452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1450, &$s1453);
frost$core$String* $tmp1454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1452, &$s1455);
frost$core$String* $tmp1456 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1454, &$s1457);
frost$core$String* $tmp1458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1456, &$s1459);
frost$core$String* $tmp1460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1458, &$s1461);
frost$core$String* $tmp1462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1460, &$s1463);
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1462, &$s1465);
frost$core$String* $tmp1466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1464, &$s1467);
frost$core$String* $tmp1468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1466, &$s1469);
frost$core$Int64 $tmp1470 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1446, $tmp1468, $tmp1470);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
frost$core$RegularExpression* $tmp1471 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local1) = $tmp1446;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
// unreffing REF($54:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
// unreffing REF($53:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
// unreffing REF($52:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing REF($49:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// unreffing REF($48:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
// unreffing REF($43:frost.core.RegularExpression)
// line 982
frost$core$RegularExpression* $tmp1472 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure28* $tmp1473 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown($tmp1473, param0);
frost$core$MutableMethod* $tmp1475 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1475, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1473));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1472, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1475)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
// unreffing REF($105:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
// unreffing REF($102:org.frostlang.frostc.frostdoc.Markdown._Closure28)
// line 1019
frost$core$RegularExpression* $tmp1476 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1478, &$s1479);
frost$core$String* $tmp1480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1477, &$s1481);
frost$core$String* $tmp1482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1480, &$s1483);
frost$core$Int64 $tmp1484 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1476, $tmp1482, $tmp1484);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$core$RegularExpression* $tmp1485 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
*(&local2) = $tmp1476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
// unreffing REF($120:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
// unreffing REF($119:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
// unreffing REF($118:frost.core.RegularExpression)
// line 1025
frost$core$RegularExpression* $tmp1486 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$_Closure30* $tmp1487 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown($tmp1487, param0);
frost$core$MutableMethod* $tmp1489 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1489, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1487));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1486, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1489)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
// unreffing REF($148:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
// unreffing REF($145:org.frostlang.frostc.frostdoc.Markdown._Closure30)
frost$core$RegularExpression* $tmp1490 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
// unreffing referenceShortcut
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1491 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
// unreffing inlineLink
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1492 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
// unreffing internalLink
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1067
frost$core$RegularExpression* $tmp1493 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1493, &$s1494);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1493, &$s1495);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
// unreffing REF($1:frost.core.RegularExpression)
// line 1068
frost$core$RegularExpression* $tmp1496 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1496, &$s1497);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1496, &$s1498);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
// unreffing REF($8:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1074
frost$core$RegularExpression* $tmp1499 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1499, &$s1500);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1499, &$s1501);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
// unreffing REF($1:frost.core.RegularExpression)
// line 1075
frost$core$RegularExpression* $tmp1502 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1502, &$s1503);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1502, &$s1504);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
// unreffing REF($8:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1079
frost$core$RegularExpression* $tmp1505 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1505, &$s1506);
org$frostlang$frostc$frostdoc$Markdown$_Closure32* $tmp1507 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown($tmp1507, param0);
frost$core$MutableMethod* $tmp1509 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1509, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1507));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1505, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1509)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// unreffing REF($6:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
// unreffing REF($3:org.frostlang.frostc.frostdoc.Markdown._Closure32)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

// line 83
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1510 = &param0->source;
frost$io$File* $tmp1511 = *$tmp1510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
frost$threads$MessageQueue** $tmp1512 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1513 = *$tmp1512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
org$frostlang$frostc$parser$Parser** $tmp1514 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1515 = *$tmp1514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
frost$core$MutableMethod** $tmp1516 = &param0->linkResolver;
frost$core$MutableMethod* $tmp1517 = *$tmp1516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$collections$HashMap** $tmp1518 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp1519 = *$tmp1518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
org$frostlang$frostc$frostdoc$Protector** $tmp1520 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1521 = *$tmp1520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
org$frostlang$frostc$frostdoc$Protector** $tmp1522 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1523 = *$tmp1522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$math$Random** $tmp1524 = &param0->random;
frost$math$Random* $tmp1525 = *$tmp1524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
return;

}

