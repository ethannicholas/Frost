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
typedef void (*$fn479)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn515)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn527)(org$frostlang$frostc$frostdoc$Markdown$_Closure6*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn536)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn540)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn545)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn552)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn568)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn572)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn577)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn583)(frost$math$Random*);
typedef frost$core$String* (*$fn620)(frost$core$Object*);
typedef frost$core$Object* (*$fn641)(org$frostlang$frostc$frostdoc$Markdown$_Closure9*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn647)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn684)(frost$core$Object*);
typedef frost$core$String* (*$fn690)(frost$collections$ListView*);
typedef frost$core$String* (*$fn711)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn730)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn734)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn739)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn750)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn760)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn774)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn866)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn874)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn882)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn890)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn898)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn909)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn919)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn942)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn952)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn967)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn980)(frost$core$Object*);
typedef frost$core$String* (*$fn1008)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1029)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1053)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1074)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1098)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1120)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1128)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef void (*$fn1136)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn1171)(org$frostlang$frostc$frostdoc$Markdown$_Closure12*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1181)(org$frostlang$frostc$frostdoc$Markdown$_Closure14*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1209)(org$frostlang$frostc$frostdoc$Markdown$_Closure16*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1239)(org$frostlang$frostc$frostdoc$Markdown$_Closure18*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1244)(org$frostlang$frostc$frostdoc$Markdown$_Closure20*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1252)(org$frostlang$frostc$frostdoc$Markdown$_Closure22*, frost$collections$ListView*);
typedef void (*$fn1256)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1258)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1260)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1262)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1264)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1266)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1268)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1270)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1272)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Bit (*$fn1325)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn1355)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$String* (*$fn1372)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn1375)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1381)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1385)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1390)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1408)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1418)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1428)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1438)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1475)(org$frostlang$frostc$frostdoc$Markdown$_Closure24*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1489)(org$frostlang$frostc$frostdoc$Markdown$_Closure26*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1519)(org$frostlang$frostc$frostdoc$Markdown$_Closure28*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1533)(org$frostlang$frostc$frostdoc$Markdown$_Closure30*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1553)(org$frostlang$frostc$frostdoc$Markdown$_Closure32*, frost$collections$ListView*);

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
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x23", 2, 14074, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 965728039488327577, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, -9204808912793336565, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s869 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s877 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static frost$core$String $s1137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static frost$core$String $s1201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static frost$core$String $s1225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static frost$core$String $s1242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static frost$core$String $s1274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static frost$core$String $s1275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static frost$core$String $s1279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -7424420126980993265, NULL };
static frost$core$String $s1303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static frost$core$String $s1304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s1410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s1420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x60", 1, 197, NULL };
static frost$core$String $s1430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s1459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static frost$core$String $s1460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static frost$core$String $s1462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static frost$core$String $s1496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static frost$core$String $s1502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static frost$core$String $s1508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static frost$core$String $s1510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static frost$core$String $s1514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static frost$core$String $s1524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static frost$core$String $s1526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static frost$core$String $s1540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static frost$core$String $s1542 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static frost$core$String $s1543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static frost$core$String $s1545 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static frost$core$String $s1546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s1548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s1551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

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
$fn83 $tmp82 = ($fn83) ((frost$core$Object*) $tmp81)->$class->vtable[0];
frost$core$String* $tmp84 = $tmp82(((frost$core$Object*) $tmp81));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($75:frost.core.String)
frost$core$MutableString* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing text
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
// unreffing REF($1:frost.collections.ListView<frost.core.Char8>)
// line 151
frost$collections$ListView* $tmp89 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s90);
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$collections$ListView* $tmp91 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local1) = $tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($13:frost.collections.ListView<frost.core.Char8>)
// line 154
org$frostlang$frostc$frostdoc$Protector** $tmp92 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp93 = *$tmp92;
$fn95 $tmp94 = ($fn95) $tmp93->$class->vtable[2];
frost$core$String* $tmp96 = $tmp94($tmp93, &$s97);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s98, $tmp96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($28:frost.core.String)
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
// unreffing escapedChars
*(&local1) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing normalChars
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
// unreffing REF($22:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($21:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($18:frost.core.RegularExpression)
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
// unreffing REF($52:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($48:frost.core.Object)
frost$core$RegularExpression* $tmp141 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing regex
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
// unreffing REF($14:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
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
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($1:frost.core.RegularExpression)
// line 177
frost$core$RegularExpression* $tmp154 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure2* $tmp155 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure2$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown($tmp155, param0);
frost$core$MutableMethod* $tmp157 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp157, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp155));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp154, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp157)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing REF($35:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing REF($32:org.frostlang.frostc.frostdoc.Markdown._Closure2)
frost$core$RegularExpression* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing p
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
// unreffing REF($1:frost.collections.Array<frost.core.String>)
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
// unreffing REF($57:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($54:frost.core.RegularExpression)
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
// unreffing REF($45:frost.collections.Iterator.T)
frost$core$String* $tmp203 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing hrDelimiter
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($34:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
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
frost$collections$Array* $tmp205 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp205);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$collections$Array* $tmp206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local0) = $tmp205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
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
// unreffing REF($115:frost.collections.Array<frost.core.String>)
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
// unreffing REF($142:frost.core.String)
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
// unreffing REF($162:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($161:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($160:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing REF($156:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($155:frost.core.String)
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
// unreffing REF($202:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing REF($201:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing REF($200:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($199:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing REF($198:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing REF($197:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing REF($196:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($194:frost.core.RegularExpression)
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
// unreffing REF($269:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing REF($268:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($267:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing REF($266:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($265:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($264:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing REF($263:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($261:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($260:frost.core.RegularExpression)
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
// unreffing REF($329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing REF($328:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// unreffing REF($327:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($326:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($325:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($324:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing REF($323:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($322:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing REF($321:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($319:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($318:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($317:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($316:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($315:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing REF($314:frost.core.RegularExpression)
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
// unreffing REF($407:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
// unreffing REF($406:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($405:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// unreffing REF($404:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing REF($403:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// unreffing REF($402:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// unreffing REF($401:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing REF($400:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing REF($399:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
// unreffing REF($398:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing REF($397:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing REF($395:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing REF($394:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing REF($393:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing REF($392:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($391:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing REF($390:frost.core.RegularExpression)
// line 328
frost$core$RegularExpression* $tmp397 = *(&local9);
frost$core$Method* $tmp398 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp397, ((frost$core$MutableMethod*) $tmp398));
frost$core$RegularExpression* $tmp399 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing p4
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp400 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// unreffing p3
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp401 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing p2
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$Method* $tmp402 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// unreffing protectHTML
*(&local6) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($242:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// unreffing REF($239:org.frostlang.frostc.frostdoc.Markdown._Closure4)
frost$core$RegularExpression* $tmp403 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing p1
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp404 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing alternationB
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp405 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// unreffing alternationA
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp406 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing tagsB
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
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
frost$core$RegularExpression* $tmp408 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp408, &$s409);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp408, &$s410);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing REF($1:frost.core.RegularExpression)
// line 333
frost$core$RegularExpression* $tmp411 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp411, &$s412);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp411, &$s413);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($8:frost.core.RegularExpression)
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
// unreffing REF($23:frost.collections.Array<frost.core.String>)
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
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp420, ((frost$collections$ListView*) $tmp426));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$collections$Array* $tmp427 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local0) = $tmp420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing REF($45:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// unreffing REF($43:frost.core.RegularExpression)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
// unreffing REF($42:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// unreffing REF($38:frost.collections.Array<frost.core.String>)
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
// unreffing REF($100:frost.collections.Array.T)
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
// unreffing REF($117:frost.core.String?)
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
frost$core$Bit $tmp469 = frost$core$Bit$init$builtin_bit($tmp468 != NULL);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp471 = (frost$core$Int64) {345};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s472, $tmp471, &$s473);
abort(); // unreachable
block12:;
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp466, $tmp467, ((frost$core$Object*) $tmp468));
goto block10;
block11:;
// line 1
// line 348
frost$core$MutableString* $tmp474 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp475 = *(&local2);
frost$core$MutableString$init$frost$core$String($tmp474, $tmp475);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$MutableString* $tmp476 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local4) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($152:frost.core.MutableString)
// line 349
frost$core$MutableString* $tmp477 = *(&local4);
$fn479 $tmp478 = ($fn479) param0->$class->vtable[22];
$tmp478(param0, $tmp477);
// line 350
frost$collections$Array* $tmp480 = *(&local0);
frost$core$Int64 $tmp481 = *(&local1);
frost$core$MutableString* $tmp482 = *(&local4);
frost$core$String* $tmp483 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s484, ((frost$core$Object*) $tmp482));
frost$core$String* $tmp485 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp483, &$s486);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp480, $tmp481, ((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing REF($176:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// unreffing REF($175:frost.core.String)
frost$core$MutableString* $tmp487 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing mutable
*(&local4) = ((frost$core$MutableString*) NULL);
goto block10;
block10:;
frost$core$String* $tmp488 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing decoded
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp489 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// unreffing paragraph
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block6:;
frost$core$Int64 $tmp490 = *(&local1);
int64_t $tmp491 = $tmp437.value;
int64_t $tmp492 = $tmp490.value;
int64_t $tmp493 = $tmp491 - $tmp492;
frost$core$Int64 $tmp494 = (frost$core$Int64) {$tmp493};
frost$core$UInt64 $tmp495 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp494);
if ($tmp439) goto block15; else goto block16;
block15:;
uint64_t $tmp496 = $tmp495.value;
uint64_t $tmp497 = $tmp441.value;
bool $tmp498 = $tmp496 >= $tmp497;
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block14; else goto block5;
block16:;
uint64_t $tmp501 = $tmp495.value;
uint64_t $tmp502 = $tmp441.value;
bool $tmp503 = $tmp501 > $tmp502;
frost$core$Bit $tmp504 = (frost$core$Bit) {$tmp503};
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block14; else goto block5;
block14:;
int64_t $tmp506 = $tmp490.value;
int64_t $tmp507 = $tmp440.value;
int64_t $tmp508 = $tmp506 + $tmp507;
frost$core$Int64 $tmp509 = (frost$core$Int64) {$tmp508};
*(&local1) = $tmp509;
goto block4;
block5:;
// line 353
frost$core$Bit $tmp510 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp511 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp510);
frost$collections$Array* $tmp512 = *(&local0);
ITable* $tmp513 = ((frost$collections$CollectionView*) $tmp512)->$class->itable;
while ($tmp513->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp513 = $tmp513->next;
}
$fn515 $tmp514 = $tmp513->methods[2];
frost$core$String* $tmp516 = $tmp514(((frost$collections$CollectionView*) $tmp512), &$s517);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp511, $tmp516);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing REF($233:frost.core.String)
frost$collections$Array* $tmp518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing paragraphs
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 357
frost$core$RegularExpression* $tmp519 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp519, &$s520);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp519, &$s521);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing REF($1:frost.core.RegularExpression)
// line 358
frost$core$RegularExpression* $tmp522 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp522, &$s523);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$RegularExpression* $tmp524 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local0) = $tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($8:frost.core.RegularExpression)
// line 359
frost$core$RegularExpression* $tmp525 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure6* $tmp526 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown($tmp526, param0);
frost$core$MutableMethod* $tmp528 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp528, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp526));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp525, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp528)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing REF($25:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing REF($22:org.frostlang.frostc.frostdoc.Markdown._Closure6)
frost$core$RegularExpression* $tmp529 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// unreffing email
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 370
org$frostlang$frostc$frostdoc$Protector** $tmp530 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp531 = *$tmp530;
frost$collections$HashMap** $tmp532 = &$tmp531->decodeMap;
frost$collections$HashMap* $tmp533 = *$tmp532;
ITable* $tmp534 = ((frost$collections$MapView*) $tmp533)->$class->itable;
while ($tmp534->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp534 = $tmp534->next;
}
$fn536 $tmp535 = $tmp534->methods[3];
frost$collections$Iterator* $tmp537 = $tmp535(((frost$collections$MapView*) $tmp533));
goto block1;
block1:;
ITable* $tmp538 = $tmp537->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[0];
frost$core$Bit $tmp541 = $tmp539($tmp537);
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp543 = $tmp537->$class->itable;
while ($tmp543->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp543 = $tmp543->next;
}
$fn545 $tmp544 = $tmp543->methods[1];
frost$core$Object* $tmp546 = $tmp544($tmp537);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp546)));
frost$core$String* $tmp547 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local0) = ((frost$core$String*) $tmp546);
// line 371
org$frostlang$frostc$frostdoc$Protector** $tmp548 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp549 = *$tmp548;
frost$core$String* $tmp550 = *(&local0);
$fn552 $tmp551 = ($fn552) $tmp549->$class->vtable[3];
frost$core$String* $tmp553 = $tmp551($tmp549, $tmp550);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$core$String* $tmp554 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local1) = $tmp553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
// unreffing REF($31:frost.core.String?)
// line 372
frost$core$String* $tmp555 = *(&local0);
frost$core$String* $tmp556 = *(&local1);
frost$core$Bit $tmp557 = frost$core$Bit$init$builtin_bit($tmp556 != NULL);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp559 = (frost$core$Int64) {372};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s560, $tmp559, &$s561);
abort(); // unreachable
block4:;
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, $tmp555, $tmp556);
frost$core$String* $tmp562 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing plaintext
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp546);
// unreffing REF($18:frost.collections.Iterator.T)
frost$core$String* $tmp563 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// unreffing hash
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// unreffing REF($7:frost.collections.Iterator<frost.collections.MapView.K>)
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Real64 local2;
// line 377
frost$core$MutableString* $tmp564 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp564);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$MutableString* $tmp565 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local0) = $tmp564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing REF($1:frost.core.MutableString)
// line 378
ITable* $tmp566 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp566->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp566 = $tmp566->next;
}
$fn568 $tmp567 = $tmp566->methods[0];
frost$collections$Iterator* $tmp569 = $tmp567(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp570 = $tmp569->$class->itable;
while ($tmp570->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp570 = $tmp570->next;
}
$fn572 $tmp571 = $tmp570->methods[0];
frost$core$Bit $tmp573 = $tmp571($tmp569);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block3; else goto block2;
block2:;
ITable* $tmp575 = $tmp569->$class->itable;
while ($tmp575->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp575 = $tmp575->next;
}
$fn577 $tmp576 = $tmp575->methods[1];
frost$core$Object* $tmp578 = $tmp576($tmp569);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp578)->value;
// line 380
frost$math$Random** $tmp579 = &param0->random;
frost$math$Random* $tmp580 = *$tmp579;
ITable* $tmp581 = $tmp580->$class->itable;
while ($tmp581->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp581 = $tmp581->next;
}
$fn583 $tmp582 = $tmp581->methods[5];
frost$core$Real64 $tmp584 = $tmp582($tmp580);
*(&local2) = $tmp584;
// line 381
frost$core$Real64 $tmp585 = *(&local2);
frost$core$Real64 $tmp586 = (frost$core$Real64) {0.45};
double $tmp587 = $tmp585.value;
double $tmp588 = $tmp586.value;
bool $tmp589 = $tmp587 < $tmp588;
frost$core$Bit $tmp590 = (frost$core$Bit) {$tmp589};
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block4; else goto block6;
block4:;
// line 382
frost$core$MutableString* $tmp592 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp592, &$s593);
// line 383
frost$core$MutableString* $tmp594 = *(&local0);
frost$core$Char32 $tmp595 = *(&local1);
frost$core$Int32 $tmp596 = frost$core$Char32$get_asInt32$R$frost$core$Int32($tmp595);
frost$core$Int32$wrapper* $tmp597;
$tmp597 = (frost$core$Int32$wrapper*) frostObjectAlloc(16, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp597->value = $tmp596;
frost$core$MutableString$append$frost$core$Object($tmp594, ((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// unreffing REF($52:frost.core.Object)
// line 384
frost$core$MutableString* $tmp598 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp598, &$s599);
goto block5;
block6:;
// line 386
frost$core$Real64 $tmp600 = *(&local2);
frost$core$Real64 $tmp601 = (frost$core$Real64) {0.9};
double $tmp602 = $tmp600.value;
double $tmp603 = $tmp601.value;
bool $tmp604 = $tmp602 < $tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block7; else goto block9;
block7:;
// line 387
frost$core$MutableString* $tmp607 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp607, &$s608);
// line 388
frost$core$MutableString* $tmp609 = *(&local0);
frost$core$Char32 $tmp610 = *(&local1);
frost$core$Int32 $tmp611 = frost$core$Char32$get_asInt32$R$frost$core$Int32($tmp610);
frost$core$String* $tmp612 = frost$core$Int32$format$frost$core$String$R$frost$core$String($tmp611, &$s613);
frost$core$MutableString$append$frost$core$String($tmp609, $tmp612);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// unreffing REF($77:frost.core.String)
// line 389
frost$core$MutableString* $tmp614 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp614, &$s615);
goto block8;
block9:;
// line 1
// line 392
frost$core$MutableString* $tmp616 = *(&local0);
frost$core$Char32 $tmp617 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp616, $tmp617);
goto block8;
block8:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
// unreffing REF($27:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing REF($17:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 395
frost$core$MutableString* $tmp618 = *(&local0);
$fn620 $tmp619 = ($fn620) ((frost$core$Object*) $tmp618)->$class->vtable[0];
frost$core$String* $tmp621 = $tmp619(((frost$core$Object*) $tmp618));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($104:frost.core.String)
frost$core$MutableString* $tmp622 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp621;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 399
frost$core$RegularExpression* $tmp623 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s625, &$s626);
frost$core$String* $tmp627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp624, &$s628);
frost$core$String* $tmp629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp627, &$s630);
frost$core$String* $tmp631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp629, &$s632);
frost$core$String* $tmp633 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp631, &$s634);
frost$core$String* $tmp635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp633, &$s636);
frost$core$Int64 $tmp637 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp623, $tmp635, $tmp637);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$RegularExpression* $tmp638 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local0) = $tmp623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// unreffing REF($1:frost.core.RegularExpression)
// line 408
frost$core$RegularExpression* $tmp639 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure9* $tmp640 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown($tmp640, param0);
frost$core$MutableMethod* $tmp642 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp642, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp640));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp639, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp642)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// unreffing REF($43:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
// unreffing REF($40:org.frostlang.frostc.frostdoc.Markdown._Closure9)
frost$core$RegularExpression* $tmp643 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
// unreffing p
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* param0) {

frost$core$String* local0 = NULL;
frost$core$Int64 local1;
frost$core$MutableString* local2 = NULL;
// line 423
frost$core$Int64 $tmp644 = (frost$core$Int64) {1};
ITable* $tmp645 = param0->$class->itable;
while ($tmp645->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[0];
frost$core$Object* $tmp648 = $tmp646(param0, $tmp644);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp648)));
frost$core$String* $tmp649 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local0) = ((frost$core$String*) $tmp648);
frost$core$Frost$unref$frost$core$Object$Q($tmp648);
// unreffing REF($4:frost.collections.ListView.T)
// line 424
frost$core$String* $tmp650 = *(&local0);
frost$core$Bit $tmp651 = frost$core$Bit$init$builtin_bit($tmp650 != NULL);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp653 = (frost$core$Int64) {424};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s654, $tmp653, &$s655);
abort(); // unreachable
block1:;
frost$core$Int64 $tmp656 = frost$core$String$get_length$R$frost$core$Int64($tmp650);
*(&local1) = $tmp656;
// line 425
frost$core$MutableString* $tmp657 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp658 = *(&local0);
frost$core$Bit $tmp659 = frost$core$Bit$init$builtin_bit($tmp658 != NULL);
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp661 = (frost$core$Int64) {425};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s662, $tmp661, &$s663);
abort(); // unreachable
block3:;
frost$core$MutableString$init$frost$core$String($tmp657, $tmp658);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$MutableString* $tmp664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local2) = $tmp657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// unreffing REF($29:frost.core.MutableString)
// line 426
goto block5;
block5:;
// line 427
frost$core$MutableString* $tmp665 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp665, &$s666);
// line 428
frost$core$Int64 $tmp667 = *(&local1);
frost$core$Int64 $tmp668 = (frost$core$Int64) {1};
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668.value;
int64_t $tmp671 = $tmp669 + $tmp670;
frost$core$Int64 $tmp672 = (frost$core$Int64) {$tmp671};
*(&local1) = $tmp672;
goto block6;
block6:;
frost$core$Int64 $tmp673 = *(&local1);
frost$core$Int64 $tmp674 = (frost$core$Int64) {4};
frost$core$Int64 $tmp675 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp673, $tmp674);
frost$core$Int64 $tmp676 = (frost$core$Int64) {0};
int64_t $tmp677 = $tmp675.value;
int64_t $tmp678 = $tmp676.value;
bool $tmp679 = $tmp677 != $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block5; else goto block7;
block7:;
// line 431
frost$core$MutableString* $tmp682 = *(&local2);
$fn684 $tmp683 = ($fn684) ((frost$core$Object*) $tmp682)->$class->vtable[0];
frost$core$String* $tmp685 = $tmp683(((frost$core$Object*) $tmp682));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// unreffing REF($78:frost.core.String)
frost$core$MutableString* $tmp686 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing replacement
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp687 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// unreffing lineSoFar
*(&local0) = ((frost$core$String*) NULL);
return $tmp685;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 422
frost$core$RegularExpression* $tmp688 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp688, &$s689);
frost$core$Method* $tmp691 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp691, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Immutable*) NULL));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp688, ((frost$core$MutableMethod*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// unreffing REF($4:frost.core.Method)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

// line 437
frost$core$RegularExpression* $tmp692 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp692, &$s693);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param0, $tmp692, &$s694);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 493
frost$core$RegularExpression* $tmp695 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s697, &$s698);
frost$core$String* $tmp699 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp696, &$s700);
frost$core$String* $tmp701 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp699, &$s702);
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp701, &$s704);
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp703, &$s706);
frost$core$Int64 $tmp707 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp695, $tmp705, $tmp707);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$RegularExpression* $tmp708 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local0) = $tmp695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// unreffing REF($1:frost.core.RegularExpression)
// line 501
frost$core$RegularExpression* $tmp709 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp710 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown($tmp710, param0);
frost$core$MutableMethod* $tmp712 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp712, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp710));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp709, $tmp712);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
// unreffing REF($39:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// unreffing REF($36:org.frostlang.frostc.frostdoc.Markdown.CodeReplacer)
frost$core$RegularExpression* $tmp713 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
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
frost$core$MutableString* $tmp714 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp714, &$s715);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$MutableString* $tmp716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local0) = $tmp714;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// unreffing REF($1:frost.core.MutableString)
// line 506
frost$core$Int64 $tmp717 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp718 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp717);
*(&local1) = $tmp718;
// line 507
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp719 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp720 = *$tmp719;
frost$core$Bit $tmp721 = frost$core$Bit$init$builtin_bit($tmp720 != NULL);
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp723 = (frost$core$Int64) {507};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s724, $tmp723, &$s725);
abort(); // unreachable
block1:;
frost$collections$Array** $tmp726 = &$tmp720->tokens;
frost$collections$Array* $tmp727 = *$tmp726;
ITable* $tmp728 = ((frost$collections$Iterable*) $tmp727)->$class->itable;
while ($tmp728->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp728 = $tmp728->next;
}
$fn730 $tmp729 = $tmp728->methods[0];
frost$collections$Iterator* $tmp731 = $tmp729(((frost$collections$Iterable*) $tmp727));
goto block3;
block3:;
ITable* $tmp732 = $tmp731->$class->itable;
while ($tmp732->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp732 = $tmp732->next;
}
$fn734 $tmp733 = $tmp732->methods[0];
frost$core$Bit $tmp735 = $tmp733($tmp731);
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp737 = $tmp731->$class->itable;
while ($tmp737->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp737 = $tmp737->next;
}
$fn739 $tmp738 = $tmp737->methods[1];
frost$core$Object* $tmp740 = $tmp738($tmp731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp740)));
org$frostlang$frostc$Pair* $tmp741 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp740);
// line 508
org$frostlang$frostc$Pair* $tmp742 = *(&local2);
frost$core$Object** $tmp743 = &$tmp742->second;
frost$core$Object* $tmp744 = *$tmp743;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp745;
$tmp745 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp745->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp744)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp746 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp747;
$tmp747 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp747->value = $tmp746;
ITable* $tmp748 = ((frost$core$Equatable*) $tmp745)->$class->itable;
while ($tmp748->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp748 = $tmp748->next;
}
$fn750 $tmp749 = $tmp748->methods[1];
frost$core$Bit $tmp751 = $tmp749(((frost$core$Equatable*) $tmp745), ((frost$core$Equatable*) $tmp747));
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block8; else goto block9;
block8:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp753 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp754;
$tmp754 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp754->value = $tmp753;
frost$core$Int64 $tmp755 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp756 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp755);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp757;
$tmp757 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp757->value = $tmp756;
ITable* $tmp758 = ((frost$core$Equatable*) $tmp754)->$class->itable;
while ($tmp758->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[1];
frost$core$Bit $tmp761 = $tmp759(((frost$core$Equatable*) $tmp754), ((frost$core$Equatable*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp757)));
// unreffing REF($71:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp754)));
// unreffing REF($67:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp761;
goto block10;
block9:;
*(&local3) = $tmp751;
goto block10;
block10:;
frost$core$Bit $tmp762 = *(&local3);
bool $tmp763 = $tmp762.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp747)));
// unreffing REF($61:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp745)));
// unreffing REF($58:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp763) goto block6; else goto block7;
block6:;
// line 509
frost$core$MutableString* $tmp764 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp764, &$s765);
goto block7;
block7:;
// line 511
org$frostlang$frostc$Pair* $tmp766 = *(&local2);
frost$core$Object** $tmp767 = &$tmp766->second;
frost$core$Object* $tmp768 = *$tmp767;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp769;
$tmp769 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp769->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp768)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp770 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp771;
$tmp771 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp771->value = $tmp770;
ITable* $tmp772 = ((frost$core$Equatable*) $tmp769)->$class->itable;
while ($tmp772->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp772 = $tmp772->next;
}
$fn774 $tmp773 = $tmp772->methods[1];
frost$core$Bit $tmp775 = $tmp773(((frost$core$Equatable*) $tmp769), ((frost$core$Equatable*) $tmp771));
bool $tmp776 = $tmp775.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp771)));
// unreffing REF($106:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp769)));
// unreffing REF($103:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp776) goto block11; else goto block12;
block11:;
// line 512
org$frostlang$frostc$Pair* $tmp777 = *(&local2);
frost$core$Object** $tmp778 = &$tmp777->second;
frost$core$Object* $tmp779 = *$tmp778;
*(&local1) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp779)->value;
// line 513
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp780 = *(&local1);
frost$core$Int64 $tmp781 = $tmp780.$rawValue;
frost$core$Int64 $tmp782 = (frost$core$Int64) {0};
frost$core$Bit $tmp783 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block14; else goto block15;
block14:;
goto block13;
block15:;
frost$core$Int64 $tmp785 = (frost$core$Int64) {1};
frost$core$Bit $tmp786 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp785);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp788 = (frost$core$Int64) {2};
frost$core$Bit $tmp789 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp788);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block16; else goto block18;
block16:;
// line 518
frost$core$MutableString* $tmp791 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp791, &$s792);
goto block13;
block18:;
frost$core$Int64 $tmp793 = (frost$core$Int64) {3};
frost$core$Bit $tmp794 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp793);
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block19; else goto block20;
block19:;
// line 521
frost$core$MutableString* $tmp796 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp796, &$s797);
goto block13;
block20:;
frost$core$Int64 $tmp798 = (frost$core$Int64) {4};
frost$core$Bit $tmp799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp798);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block21; else goto block22;
block21:;
// line 524
frost$core$MutableString* $tmp801 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp801, &$s802);
goto block13;
block22:;
frost$core$Int64 $tmp803 = (frost$core$Int64) {5};
frost$core$Bit $tmp804 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp803);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block23; else goto block24;
block23:;
// line 527
frost$core$MutableString* $tmp806 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp806, &$s807);
goto block13;
block24:;
frost$core$Int64 $tmp808 = (frost$core$Int64) {6};
frost$core$Bit $tmp809 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp808);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block25; else goto block26;
block25:;
// line 530
frost$core$MutableString* $tmp811 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp811, &$s812);
goto block13;
block26:;
frost$core$Int64 $tmp813 = (frost$core$Int64) {7};
frost$core$Bit $tmp814 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp813);
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block27; else goto block28;
block27:;
// line 533
frost$core$MutableString* $tmp816 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp816, &$s817);
goto block13;
block28:;
frost$core$Int64 $tmp818 = (frost$core$Int64) {8};
frost$core$Bit $tmp819 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp818);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block29; else goto block30;
block29:;
// line 536
frost$core$MutableString* $tmp821 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp821, &$s822);
goto block13;
block30:;
frost$core$Int64 $tmp823 = (frost$core$Int64) {9};
frost$core$Bit $tmp824 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp823);
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block31; else goto block32;
block31:;
// line 539
frost$core$MutableString* $tmp826 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp826, &$s827);
goto block13;
block32:;
frost$core$Int64 $tmp828 = (frost$core$Int64) {10};
frost$core$Bit $tmp829 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp828);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block33; else goto block34;
block33:;
// line 542
frost$core$MutableString* $tmp831 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp831, &$s832);
goto block13;
block34:;
frost$core$Int64 $tmp833 = (frost$core$Int64) {11};
frost$core$Bit $tmp834 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp833);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block35; else goto block36;
block35:;
// line 545
frost$core$MutableString* $tmp836 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp836, &$s837);
goto block13;
block36:;
frost$core$Int64 $tmp838 = (frost$core$Int64) {12};
frost$core$Bit $tmp839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp781, $tmp838);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block37; else goto block38;
block37:;
// line 548
frost$core$MutableString* $tmp841 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp841, &$s842);
goto block13;
block38:;
// line 551
frost$core$Bit $tmp843 = frost$core$Bit$init$builtin_bit(false);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp845 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s846, $tmp845);
abort(); // unreachable
block39:;
goto block13;
block13:;
goto block12;
block12:;
// line 555
frost$core$MutableString* $tmp847 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp848 = *(&local2);
frost$core$Object** $tmp849 = &$tmp848->first;
frost$core$Object* $tmp850 = *$tmp849;
frost$core$String* $tmp851 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param1, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp850)->value);
frost$core$MutableString$init$frost$core$String($tmp847, $tmp851);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$MutableString* $tmp852 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local4) = $tmp847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// unreffing REF($240:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing REF($234:frost.core.MutableString)
// line 556
frost$core$MutableString* $tmp853 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp853, &$s854, &$s855);
// line 557
frost$core$MutableString* $tmp856 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp856, &$s857, &$s858);
// line 558
frost$core$MutableString* $tmp859 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp859, &$s860, &$s861);
// line 559
frost$core$MutableString* $tmp862 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp863 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp864 = *$tmp863;
$fn866 $tmp865 = ($fn866) $tmp864->$class->vtable[2];
frost$core$String* $tmp867 = $tmp865($tmp864, &$s868);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp862, &$s869, $tmp867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing REF($269:frost.core.String)
// line 560
frost$core$MutableString* $tmp870 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp871 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp872 = *$tmp871;
$fn874 $tmp873 = ($fn874) $tmp872->$class->vtable[2];
frost$core$String* $tmp875 = $tmp873($tmp872, &$s876);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp870, &$s877, $tmp875);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
// unreffing REF($279:frost.core.String)
// line 561
frost$core$MutableString* $tmp878 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp879 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp880 = *$tmp879;
$fn882 $tmp881 = ($fn882) $tmp880->$class->vtable[2];
frost$core$String* $tmp883 = $tmp881($tmp880, &$s884);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp878, &$s885, $tmp883);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($289:frost.core.String)
// line 562
frost$core$MutableString* $tmp886 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp887 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp888 = *$tmp887;
$fn890 $tmp889 = ($fn890) $tmp888->$class->vtable[2];
frost$core$String* $tmp891 = $tmp889($tmp888, &$s892);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp886, &$s893, $tmp891);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing REF($299:frost.core.String)
// line 563
frost$core$MutableString* $tmp894 = *(&local4);
org$frostlang$frostc$frostdoc$Protector** $tmp895 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp896 = *$tmp895;
$fn898 $tmp897 = ($fn898) $tmp896->$class->vtable[2];
frost$core$String* $tmp899 = $tmp897($tmp896, &$s900);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp894, &$s901, $tmp899);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing REF($309:frost.core.String)
// line 564
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp902 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp903;
$tmp903 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp903->value = $tmp902;
frost$core$Int64 $tmp904 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp905 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp904);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp906;
$tmp906 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp906->value = $tmp905;
ITable* $tmp907 = ((frost$core$Equatable*) $tmp903)->$class->itable;
while ($tmp907->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp907 = $tmp907->next;
}
$fn909 $tmp908 = $tmp907->methods[1];
frost$core$Bit $tmp910 = $tmp908(((frost$core$Equatable*) $tmp903), ((frost$core$Equatable*) $tmp906));
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block43; else goto block44;
block43:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp912 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp913;
$tmp913 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp913->value = $tmp912;
frost$core$Int64 $tmp914 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp915 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp914);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp916;
$tmp916 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp916->value = $tmp915;
ITable* $tmp917 = ((frost$core$Equatable*) $tmp913)->$class->itable;
while ($tmp917->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp917 = $tmp917->next;
}
$fn919 $tmp918 = $tmp917->methods[1];
frost$core$Bit $tmp920 = $tmp918(((frost$core$Equatable*) $tmp913), ((frost$core$Equatable*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp916)));
// unreffing REF($330:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp913)));
// unreffing REF($326:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp920;
goto block45;
block44:;
*(&local5) = $tmp910;
goto block45;
block45:;
frost$core$Bit $tmp921 = *(&local5);
bool $tmp922 = $tmp921.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp906)));
// unreffing REF($320:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp903)));
// unreffing REF($316:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp922) goto block41; else goto block42;
block41:;
// line 566
frost$core$MutableString* $tmp923 = *(&local0);
org$frostlang$frostc$Pair* $tmp924 = *(&local2);
frost$core$Object** $tmp925 = &$tmp924->first;
frost$core$Object* $tmp926 = *$tmp925;
org$frostlang$frostc$parser$Token$Kind $tmp927 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp926)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp928;
$tmp928 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp928->value = $tmp927;
frost$core$String* $tmp929 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s930, ((frost$core$Object*) $tmp928));
frost$core$String* $tmp931 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp929, &$s932);
frost$core$MutableString$append$frost$core$String($tmp923, $tmp931);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// unreffing REF($362:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing REF($361:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing REF($360:frost.core.Object)
goto block42;
block42:;
// line 568
frost$core$MutableString* $tmp933 = *(&local0);
frost$core$MutableString* $tmp934 = *(&local4);
frost$core$MutableString$append$frost$core$Object($tmp933, ((frost$core$Object*) $tmp934));
// line 569
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp935 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp936;
$tmp936 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp936->value = $tmp935;
frost$core$Int64 $tmp937 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp938 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp937);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp939;
$tmp939 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp939->value = $tmp938;
ITable* $tmp940 = ((frost$core$Equatable*) $tmp936)->$class->itable;
while ($tmp940->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp940 = $tmp940->next;
}
$fn942 $tmp941 = $tmp940->methods[1];
frost$core$Bit $tmp943 = $tmp941(((frost$core$Equatable*) $tmp936), ((frost$core$Equatable*) $tmp939));
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block48; else goto block49;
block48:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp945 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp946;
$tmp946 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp946->value = $tmp945;
frost$core$Int64 $tmp947 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp948 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp947);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp949;
$tmp949 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp949->value = $tmp948;
ITable* $tmp950 = ((frost$core$Equatable*) $tmp946)->$class->itable;
while ($tmp950->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp950 = $tmp950->next;
}
$fn952 $tmp951 = $tmp950->methods[1];
frost$core$Bit $tmp953 = $tmp951(((frost$core$Equatable*) $tmp946), ((frost$core$Equatable*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp949)));
// unreffing REF($395:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp946)));
// unreffing REF($391:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp953;
goto block50;
block49:;
*(&local6) = $tmp943;
goto block50;
block50:;
frost$core$Bit $tmp954 = *(&local6);
bool $tmp955 = $tmp954.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp939)));
// unreffing REF($385:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp936)));
// unreffing REF($381:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp955) goto block46; else goto block47;
block46:;
// line 571
frost$core$MutableString* $tmp956 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp956, &$s957);
goto block47;
block47:;
frost$core$MutableString* $tmp958 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing s
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp740);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$Pair* $tmp959 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// unreffing REF($33:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 574
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp960 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp961;
$tmp961 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp961->value = $tmp960;
frost$core$Int64 $tmp962 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp963 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp962);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp964;
$tmp964 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp964->value = $tmp963;
ITable* $tmp965 = ((frost$core$Equatable*) $tmp961)->$class->itable;
while ($tmp965->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp965 = $tmp965->next;
}
$fn967 $tmp966 = $tmp965->methods[1];
frost$core$Bit $tmp968 = $tmp966(((frost$core$Equatable*) $tmp961), ((frost$core$Equatable*) $tmp964));
bool $tmp969 = $tmp968.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp964)));
// unreffing REF($444:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp961)));
// unreffing REF($440:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp969) goto block51; else goto block52;
block51:;
// line 575
frost$core$MutableString* $tmp970 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp970, &$s971);
goto block52;
block52:;
// line 577
frost$core$MutableString* $tmp972 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp972, &$s973);
// line 578
frost$core$MutableString* $tmp974 = *(&local0);
frost$core$String* $tmp975 = frost$core$MutableString$finish$R$frost$core$String($tmp974);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
// unreffing REF($464:frost.core.String)
frost$core$MutableString* $tmp976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp975;

}
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
org$frostlang$frostc$parser$Token local5;
// line 582
frost$threads$MessageQueue** $tmp977 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp978 = *$tmp977;
frost$threads$MessageQueue$clear($tmp978);
// line 583
$fn980 $tmp979 = ($fn980) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp981 = $tmp979(((frost$core$Object*) param1));
frost$core$String* $tmp982 = frost$core$String$get_trimmed$R$frost$core$String($tmp981);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$String* $tmp983 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local0) = $tmp982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing REF($8:frost.core.String)
// line 584
org$frostlang$frostc$parser$Parser** $tmp984 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp985 = *$tmp984;
frost$io$File** $tmp986 = &param0->source;
frost$io$File* $tmp987 = *$tmp986;
frost$core$String* $tmp988 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp985, $tmp987, $tmp988);
// line 585
org$frostlang$frostc$parser$Parser** $tmp989 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp990 = *$tmp989;
org$frostlang$frostc$ASTNode* $tmp991 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp990);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
org$frostlang$frostc$ASTNode* $tmp992 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local1) = $tmp991;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
// unreffing REF($33:org.frostlang.frostc.ASTNode?)
// line 586
org$frostlang$frostc$ASTNode* $tmp993 = *(&local1);
frost$core$Bit $tmp994 = frost$core$Bit$init$builtin_bit($tmp993 != NULL);
bool $tmp995 = $tmp994.value;
if ($tmp995) goto block3; else goto block4;
block3:;
frost$threads$MessageQueue** $tmp996 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp997 = *$tmp996;
frost$core$Int64 $tmp998 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp997);
frost$core$Int64 $tmp999 = (frost$core$Int64) {0};
frost$core$Bit $tmp1000 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp998, $tmp999);
*(&local2) = $tmp1000;
goto block5;
block4:;
*(&local2) = $tmp994;
goto block5;
block5:;
frost$core$Bit $tmp1001 = *(&local2);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block1; else goto block2;
block1:;
// line 587
frost$core$Bit $tmp1003 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1004 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1003);
org$frostlang$frostc$parser$Parser** $tmp1005 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1006 = *$tmp1005;
$fn1008 $tmp1007 = ($fn1008) param0->$class->vtable[16];
frost$core$String* $tmp1009 = $tmp1007(param0, $tmp1006);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1004, $tmp1009);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing REF($69:frost.core.String)
// line 588
org$frostlang$frostc$ASTNode* $tmp1010 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1011 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block2:;
// line 591
frost$threads$MessageQueue** $tmp1012 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1013 = *$tmp1012;
frost$threads$MessageQueue$clear($tmp1013);
// line 592
org$frostlang$frostc$parser$Parser** $tmp1014 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1015 = *$tmp1014;
frost$io$File** $tmp1016 = &param0->source;
frost$io$File* $tmp1017 = *$tmp1016;
frost$core$String* $tmp1018 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1015, $tmp1017, $tmp1018);
// line 593
goto block6;
block6:;
org$frostlang$frostc$parser$Parser** $tmp1019 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1020 = *$tmp1019;
org$frostlang$frostc$parser$Token $tmp1021 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp1020);
org$frostlang$frostc$parser$Token$Kind $tmp1022 = $tmp1021.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1023;
$tmp1023 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1023->value = $tmp1022;
frost$core$Int64 $tmp1024 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1025 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1024);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1026;
$tmp1026 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1026->value = $tmp1025;
ITable* $tmp1027 = ((frost$core$Equatable*) $tmp1023)->$class->itable;
while ($tmp1027->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1027 = $tmp1027->next;
}
$fn1029 $tmp1028 = $tmp1027->methods[1];
frost$core$Bit $tmp1030 = $tmp1028(((frost$core$Equatable*) $tmp1023), ((frost$core$Equatable*) $tmp1026));
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block9; else goto block10;
block9:;
frost$threads$MessageQueue** $tmp1032 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1033 = *$tmp1032;
frost$core$Int64 $tmp1034 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1033);
frost$core$Int64 $tmp1035 = (frost$core$Int64) {0};
frost$core$Bit $tmp1036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1034, $tmp1035);
*(&local3) = $tmp1036;
goto block11;
block10:;
*(&local3) = $tmp1030;
goto block11;
block11:;
frost$core$Bit $tmp1037 = *(&local3);
bool $tmp1038 = $tmp1037.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1026)));
// unreffing REF($108:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1023)));
// unreffing REF($104:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1038) goto block7; else goto block8;
block7:;
// line 594
org$frostlang$frostc$parser$Parser** $tmp1039 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1040 = *$tmp1039;
org$frostlang$frostc$ASTNode* $tmp1041 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q($tmp1040);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing REF($135:org.frostlang.frostc.ASTNode?)
goto block6;
block8:;
// line 596
frost$threads$MessageQueue** $tmp1042 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1043 = *$tmp1042;
frost$core$Int64 $tmp1044 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1043);
frost$core$Int64 $tmp1045 = (frost$core$Int64) {0};
frost$core$Bit $tmp1046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1044, $tmp1045);
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block12; else goto block13;
block12:;
// line 597
frost$core$Bit $tmp1048 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1049 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1048);
org$frostlang$frostc$parser$Parser** $tmp1050 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1051 = *$tmp1050;
$fn1053 $tmp1052 = ($fn1053) param0->$class->vtable[16];
frost$core$String* $tmp1054 = $tmp1052(param0, $tmp1051);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1049, $tmp1054);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing REF($155:frost.core.String)
// line 598
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1056 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block13:;
// line 601
frost$threads$MessageQueue** $tmp1057 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1058 = *$tmp1057;
frost$threads$MessageQueue$clear($tmp1058);
// line 602
org$frostlang$frostc$parser$Parser** $tmp1059 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1060 = *$tmp1059;
frost$io$File** $tmp1061 = &param0->source;
frost$io$File* $tmp1062 = *$tmp1061;
frost$core$String* $tmp1063 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1060, $tmp1062, $tmp1063);
// line 603
goto block14;
block14:;
org$frostlang$frostc$parser$Parser** $tmp1064 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1065 = *$tmp1064;
org$frostlang$frostc$parser$Token $tmp1066 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token($tmp1065);
org$frostlang$frostc$parser$Token$Kind $tmp1067 = $tmp1066.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1068;
$tmp1068 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1068->value = $tmp1067;
frost$core$Int64 $tmp1069 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1070 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1069);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1071;
$tmp1071 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1071->value = $tmp1070;
ITable* $tmp1072 = ((frost$core$Equatable*) $tmp1068)->$class->itable;
while ($tmp1072->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1072 = $tmp1072->next;
}
$fn1074 $tmp1073 = $tmp1072->methods[1];
frost$core$Bit $tmp1075 = $tmp1073(((frost$core$Equatable*) $tmp1068), ((frost$core$Equatable*) $tmp1071));
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block17; else goto block18;
block17:;
frost$threads$MessageQueue** $tmp1077 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1078 = *$tmp1077;
frost$core$Int64 $tmp1079 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1078);
frost$core$Int64 $tmp1080 = (frost$core$Int64) {0};
frost$core$Bit $tmp1081 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1079, $tmp1080);
*(&local4) = $tmp1081;
goto block19;
block18:;
*(&local4) = $tmp1075;
goto block19;
block19:;
frost$core$Bit $tmp1082 = *(&local4);
bool $tmp1083 = $tmp1082.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1071)));
// unreffing REF($194:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1068)));
// unreffing REF($190:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1083) goto block15; else goto block16;
block15:;
// line 604
org$frostlang$frostc$parser$Parser** $tmp1084 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1085 = *$tmp1084;
org$frostlang$frostc$ASTNode* $tmp1086 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q($tmp1085);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing REF($221:org.frostlang.frostc.ASTNode?)
goto block14;
block16:;
// line 606
frost$threads$MessageQueue** $tmp1087 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1088 = *$tmp1087;
frost$core$Int64 $tmp1089 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1088);
frost$core$Int64 $tmp1090 = (frost$core$Int64) {0};
frost$core$Bit $tmp1091 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1089, $tmp1090);
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block20; else goto block21;
block20:;
// line 607
frost$core$Bit $tmp1093 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1094 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1093);
org$frostlang$frostc$parser$Parser** $tmp1095 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1096 = *$tmp1095;
$fn1098 $tmp1097 = ($fn1098) param0->$class->vtable[16];
frost$core$String* $tmp1099 = $tmp1097(param0, $tmp1096);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1094, $tmp1099);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// unreffing REF($241:frost.core.String)
// line 608
org$frostlang$frostc$ASTNode* $tmp1100 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;
block21:;
// line 611
frost$threads$MessageQueue** $tmp1102 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1103 = *$tmp1102;
frost$threads$MessageQueue$clear($tmp1103);
// line 612
org$frostlang$frostc$parser$Parser** $tmp1104 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1105 = *$tmp1104;
frost$io$File** $tmp1106 = &param0->source;
frost$io$File* $tmp1107 = *$tmp1106;
frost$core$String* $tmp1108 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp1105, $tmp1107, $tmp1108);
// line 613
goto block22;
block22:;
// line 614
org$frostlang$frostc$parser$Parser** $tmp1109 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1110 = *$tmp1109;
org$frostlang$frostc$parser$Token $tmp1111 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1110);
*(&local5) = $tmp1111;
// line 615
org$frostlang$frostc$parser$Token $tmp1112 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp1113 = $tmp1112.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1114;
$tmp1114 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1114->value = $tmp1113;
frost$core$Int64 $tmp1115 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp1116 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1115);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1117;
$tmp1117 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1117->value = $tmp1116;
ITable* $tmp1118 = ((frost$core$Equatable*) $tmp1114)->$class->itable;
while ($tmp1118->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1118 = $tmp1118->next;
}
$fn1120 $tmp1119 = $tmp1118->methods[0];
frost$core$Bit $tmp1121 = $tmp1119(((frost$core$Equatable*) $tmp1114), ((frost$core$Equatable*) $tmp1117));
bool $tmp1122 = $tmp1121.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1117)));
// unreffing REF($284:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1114)));
// unreffing REF($280:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp1122) goto block24; else goto block25;
block24:;
// line 616
goto block23;
block25:;
goto block22;
block23:;
// line 619
frost$core$Bit $tmp1123 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1124 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1123);
org$frostlang$frostc$parser$Parser** $tmp1125 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1126 = *$tmp1125;
$fn1128 $tmp1127 = ($fn1128) param0->$class->vtable[16];
frost$core$String* $tmp1129 = $tmp1127(param0, $tmp1126);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1124, $tmp1129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
// unreffing REF($304:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1130 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
// unreffing file
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 625
frost$core$RegularExpression* $tmp1132 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1132, &$s1133);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1132, &$s1134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($1:frost.core.RegularExpression)
// line 626
$fn1136 $tmp1135 = ($fn1136) param0->$class->vtable[17];
$tmp1135(param0, param1);
// line 627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s1137, &$s1138);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Int64 local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
// line 631
frost$core$Int64 $tmp1139 = (frost$core$Int64) {4};
frost$core$Int64 $tmp1140 = (frost$core$Int64) {1};
int64_t $tmp1141 = $tmp1139.value;
int64_t $tmp1142 = $tmp1140.value;
int64_t $tmp1143 = $tmp1141 - $tmp1142;
frost$core$Int64 $tmp1144 = (frost$core$Int64) {$tmp1143};
*(&local0) = $tmp1144;
// line 633
frost$core$Int64 $tmp1145 = *(&local0);
frost$core$Int64$wrapper* $tmp1146;
$tmp1146 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1146->value = $tmp1145;
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1148, ((frost$core$Object*) $tmp1146));
frost$core$String* $tmp1149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1147, &$s1150);
frost$core$String* $tmp1151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1149, &$s1152);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$String* $tmp1153 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local1) = $tmp1151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing REF($10:frost.core.Object)
// line 656
frost$core$Int64* $tmp1154 = &param0->listLevel;
frost$core$Int64 $tmp1155 = *$tmp1154;
frost$core$Int64 $tmp1156 = (frost$core$Int64) {0};
int64_t $tmp1157 = $tmp1155.value;
int64_t $tmp1158 = $tmp1156.value;
bool $tmp1159 = $tmp1157 > $tmp1158;
frost$core$Bit $tmp1160 = (frost$core$Bit) {$tmp1159};
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block1; else goto block3;
block1:;
// line 657
frost$core$RegularExpression* $tmp1162 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1163 = *(&local1);
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1165, $tmp1163);
frost$core$String* $tmp1166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1164, &$s1167);
frost$core$RegularExpression$init$frost$core$String($tmp1162, $tmp1166);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$RegularExpression* $tmp1168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local2) = $tmp1162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
// unreffing REF($44:frost.core.RegularExpression)
// line 658
frost$core$RegularExpression* $tmp1169 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$_Closure12* $tmp1170 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown($tmp1170, param0);
frost$core$MutableMethod* $tmp1172 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1172, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1170));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1169, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1172)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing REF($70:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
// unreffing REF($67:org.frostlang.frostc.frostdoc.Markdown._Closure12)
frost$core$RegularExpression* $tmp1173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
// unreffing matchStartOfLine
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 684
frost$core$RegularExpression* $tmp1174 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1175 = *(&local1);
frost$core$String* $tmp1176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1177, $tmp1175);
frost$core$RegularExpression$init$frost$core$String($tmp1174, $tmp1176);
*(&local3) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$RegularExpression* $tmp1178 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local3) = $tmp1174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing REF($92:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
// unreffing REF($90:frost.core.RegularExpression)
// line 685
frost$core$RegularExpression* $tmp1179 = *(&local3);
org$frostlang$frostc$frostdoc$Markdown$_Closure14* $tmp1180 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown($tmp1180, param0);
frost$core$MutableMethod* $tmp1182 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1182, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1180));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1179, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1182)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
// unreffing REF($112:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing REF($109:org.frostlang.frostc.frostdoc.Markdown._Closure14)
frost$core$RegularExpression* $tmp1183 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
// unreffing matchStartOfLine
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block2;
block2:;
frost$core$String* $tmp1184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
// unreffing wholeList
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// line 726
frost$core$Int64* $tmp1185 = &param0->listLevel;
frost$core$Int64 $tmp1186 = *$tmp1185;
frost$core$Int64 $tmp1187 = (frost$core$Int64) {1};
int64_t $tmp1188 = $tmp1186.value;
int64_t $tmp1189 = $tmp1187.value;
int64_t $tmp1190 = $tmp1188 + $tmp1189;
frost$core$Int64 $tmp1191 = (frost$core$Int64) {$tmp1190};
frost$core$Int64* $tmp1192 = &param0->listLevel;
*$tmp1192 = $tmp1191;
// line 729
frost$core$RegularExpression* $tmp1193 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1193, &$s1194);
frost$core$String* $tmp1195 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(param1, $tmp1193, &$s1196);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$String* $tmp1197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local0) = $tmp1195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// unreffing REF($11:frost.core.RegularExpression)
// line 731
frost$core$RegularExpression* $tmp1198 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1200, &$s1201);
frost$core$String* $tmp1202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1199, &$s1203);
frost$core$Int64 $tmp1204 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1198, $tmp1202, $tmp1204);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$RegularExpression* $tmp1205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local1) = $tmp1198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
// unreffing REF($30:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// unreffing REF($28:frost.core.RegularExpression)
// line 736
frost$core$String* $tmp1206 = *(&local0);
frost$core$RegularExpression* $tmp1207 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure16* $tmp1208 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown($tmp1208, param0);
frost$core$MutableMethod* $tmp1210 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1210, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1208));
frost$core$String* $tmp1211 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String($tmp1206, $tmp1207, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1210)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
frost$core$String* $tmp1212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local0) = $tmp1211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
// unreffing REF($60:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
// unreffing REF($55:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// unreffing REF($52:org.frostlang.frostc.frostdoc.Markdown._Closure16)
// line 753
frost$core$Int64* $tmp1213 = &param0->listLevel;
frost$core$Int64 $tmp1214 = *$tmp1213;
frost$core$Int64 $tmp1215 = (frost$core$Int64) {1};
int64_t $tmp1216 = $tmp1214.value;
int64_t $tmp1217 = $tmp1215.value;
int64_t $tmp1218 = $tmp1216 - $tmp1217;
frost$core$Int64 $tmp1219 = (frost$core$Int64) {$tmp1218};
frost$core$Int64* $tmp1220 = &param0->listLevel;
*$tmp1220 = $tmp1219;
// line 754
frost$core$String* $tmp1221 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$RegularExpression* $tmp1222 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
// unreffing p
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
// unreffing list
*(&local0) = ((frost$core$String*) NULL);
return $tmp1221;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

// line 759
frost$core$Bit $tmp1224 = frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(param0, &$s1225);
return $tmp1224;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
// line 764
frost$core$Bit $tmp1226 = frost$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1226;
goto block3;
block2:;
frost$core$Bit $tmp1228 = frost$core$Bit$init$builtin_bit(param0 != NULL);
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1230 = (frost$core$Int64) {764};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1231, $tmp1230, &$s1232);
abort(); // unreachable
block4:;
frost$core$Bit $tmp1233 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s1234);
*(&local0) = $tmp1233;
goto block3;
block3:;
frost$core$Bit $tmp1235 = *(&local0);
return $tmp1235;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 769
frost$core$RegularExpression* $tmp1236 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1236, &$s1237);
org$frostlang$frostc$frostdoc$Markdown$_Closure18* $tmp1238 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown($tmp1238, param0);
frost$core$MutableMethod* $tmp1240 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1240, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1238));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1236, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1240)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
// unreffing REF($6:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
// unreffing REF($3:org.frostlang.frostc.frostdoc.Markdown._Closure18)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// unreffing REF($1:frost.core.RegularExpression)
// line 774
frost$core$RegularExpression* $tmp1241 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1241, &$s1242);
org$frostlang$frostc$frostdoc$Markdown$_Closure20* $tmp1243 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown($tmp1243, param0);
frost$core$MutableMethod* $tmp1245 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1245, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1243));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1241, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
// unreffing REF($27:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing REF($24:org.frostlang.frostc.frostdoc.Markdown._Closure20)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
// unreffing REF($22:frost.core.RegularExpression)
// line 781
frost$core$RegularExpression* $tmp1246 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int64 $tmp1247 = (frost$core$Int64) {1};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1246, &$s1248, $tmp1247);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$RegularExpression* $tmp1249 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local0) = $tmp1246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// unreffing REF($43:frost.core.RegularExpression)
// line 782
frost$core$RegularExpression* $tmp1250 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure22* $tmp1251 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown($tmp1251, param0);
frost$core$MutableMethod* $tmp1253 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1253, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1251));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1250, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1253)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing REF($61:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// unreffing REF($58:org.frostlang.frostc.frostdoc.Markdown._Closure22)
frost$core$RegularExpression* $tmp1254 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
// unreffing p
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 793
$fn1256 $tmp1255 = ($fn1256) param0->$class->vtable[24];
$tmp1255(param0, param1);
// line 794
$fn1258 $tmp1257 = ($fn1258) param0->$class->vtable[29];
$tmp1257(param0, param1);
// line 795
$fn1260 $tmp1259 = ($fn1260) param0->$class->vtable[3];
$tmp1259(param0, param1);
// line 797
$fn1262 $tmp1261 = ($fn1262) param0->$class->vtable[25];
$tmp1261(param0, param1);
// line 798
$fn1264 $tmp1263 = ($fn1264) param0->$class->vtable[26];
$tmp1263(param0, param1);
// line 799
$fn1266 $tmp1265 = ($fn1266) param0->$class->vtable[10];
$tmp1265(param0, param1);
// line 805
$fn1268 $tmp1267 = ($fn1268) param0->$class->vtable[24];
$tmp1267(param0, param1);
// line 807
$fn1270 $tmp1269 = ($fn1270) param0->$class->vtable[28];
$tmp1269(param0, param1);
// line 808
$fn1272 $tmp1271 = ($fn1272) param0->$class->vtable[27];
$tmp1271(param0, param1);
// line 810
frost$core$RegularExpression* $tmp1273 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1273, &$s1274);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1273, &$s1275);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
// unreffing REF($28:frost.core.RegularExpression)
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String(frost$core$Int64 param0) {

// line 820
frost$core$Int64 $tmp1276 = (frost$core$Int64) {0};
frost$core$Bit $tmp1277 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param0, $tmp1276);
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block1; else goto block3;
block1:;
// line 821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1279));
return &$s1280;
block3:;
// line 1
// line 824
frost$core$Int64 $tmp1281 = (frost$core$Int64) {1};
int64_t $tmp1282 = param0.value;
int64_t $tmp1283 = $tmp1281.value;
int64_t $tmp1284 = $tmp1282 - $tmp1283;
frost$core$Int64 $tmp1285 = (frost$core$Int64) {$tmp1284};
frost$core$String* $tmp1286 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1285);
frost$core$String* $tmp1287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1288, $tmp1286);
frost$core$String* $tmp1289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1287, &$s1290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing REF($16:frost.core.String)
return $tmp1289;
block2:;
frost$core$Bit $tmp1291 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1293 = (frost$core$Int64) {819};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1294, $tmp1293, &$s1295);
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
frost$collections$Array* $tmp1296 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1296);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
frost$collections$Array* $tmp1297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local0) = $tmp1296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.frostdoc.Markdown.HTMLToken>)
// line 830
frost$core$Int64 $tmp1298 = (frost$core$Int64) {6};
frost$core$String* $tmp1299 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1298);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$String* $tmp1300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local1) = $tmp1299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing REF($16:frost.core.String)
// line 832
frost$core$RegularExpression* $tmp1301 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1303, &$s1304);
frost$core$String* $tmp1305 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1302, &$s1306);
frost$core$String* $tmp1307 = *(&local1);
frost$core$String* $tmp1308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1305, $tmp1307);
frost$core$Int64 $tmp1309 = (frost$core$Int64) {2};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1301, $tmp1308, $tmp1309);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$core$RegularExpression* $tmp1310 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local2) = $tmp1301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing REF($32:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
// unreffing REF($30:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
// unreffing REF($28:frost.core.RegularExpression)
// line 840
frost$core$RegularExpression* $tmp1311 = *(&local2);
frost$core$Matcher* $tmp1312 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1311, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$Matcher* $tmp1313 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local3) = $tmp1312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// unreffing REF($56:frost.core.Matcher)
// line 841
frost$core$String$Index $tmp1314 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local4) = $tmp1314;
// line 842
goto block1;
block1:;
frost$core$Matcher* $tmp1315 = *(&local3);
frost$core$Bit $tmp1316 = frost$core$Matcher$find$R$frost$core$Bit($tmp1315);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block2; else goto block3;
block2:;
// line 843
frost$core$String$Index $tmp1318 = *(&local4);
frost$core$String$Index$wrapper* $tmp1319;
$tmp1319 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1319->value = $tmp1318;
frost$core$Matcher* $tmp1320 = *(&local3);
frost$core$String$Index $tmp1321;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1321, $tmp1320);
frost$core$String$Index$wrapper* $tmp1322;
$tmp1322 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1322->value = $tmp1321;
ITable* $tmp1323 = ((frost$core$Comparable*) $tmp1319)->$class->itable;
while ($tmp1323->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1323 = $tmp1323->next;
}
$fn1325 $tmp1324 = $tmp1323->methods[1];
frost$core$Bit $tmp1326 = $tmp1324(((frost$core$Comparable*) $tmp1319), ((frost$core$Comparable*) $tmp1322));
bool $tmp1327 = $tmp1326.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1322)));
// unreffing REF($82:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1319)));
// unreffing REF($78:frost.core.Comparable<frost.core.String.Index>)
if ($tmp1327) goto block4; else goto block5;
block4:;
// line 844
frost$collections$Array* $tmp1328 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1329 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1330 = (frost$core$Int64) {1};
frost$core$String$Index $tmp1331 = *(&local4);
frost$core$Matcher* $tmp1332 = *(&local3);
frost$core$String$Index $tmp1333;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1333, $tmp1332);
frost$core$Bit $tmp1334 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1335 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1331, $tmp1333, $tmp1334);
frost$core$String* $tmp1336 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1335);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1329, $tmp1330, $tmp1336);
frost$collections$Array$add$frost$collections$Array$T($tmp1328, ((frost$core$Object*) $tmp1329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// unreffing REF($103:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing REF($96:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
goto block5;
block5:;
// line 846
frost$collections$Array* $tmp1337 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1338 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1339 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp1340 = *(&local3);
frost$core$String$Index $tmp1341;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1341, $tmp1340);
frost$core$Matcher* $tmp1342 = *(&local3);
frost$core$String$Index $tmp1343;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1343, $tmp1342);
frost$core$Bit $tmp1344 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1345 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1341, $tmp1343, $tmp1344);
frost$core$String* $tmp1346 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1345);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1338, $tmp1339, $tmp1346);
frost$collections$Array$add$frost$collections$Array$T($tmp1337, ((frost$core$Object*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
// unreffing REF($125:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing REF($117:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
// line 847
frost$core$Matcher* $tmp1347 = *(&local3);
frost$core$String$Index $tmp1348;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1348, $tmp1347);
*(&local4) = $tmp1348;
goto block1;
block3:;
// line 849
frost$core$String$Index $tmp1349 = *(&local4);
frost$core$String$Index$wrapper* $tmp1350;
$tmp1350 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1350->value = $tmp1349;
frost$core$String$Index $tmp1351 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp1352;
$tmp1352 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1352->value = $tmp1351;
ITable* $tmp1353 = ((frost$core$Comparable*) $tmp1350)->$class->itable;
while ($tmp1353->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1353 = $tmp1353->next;
}
$fn1355 $tmp1354 = $tmp1353->methods[1];
frost$core$Bit $tmp1356 = $tmp1354(((frost$core$Comparable*) $tmp1350), ((frost$core$Comparable*) $tmp1352));
bool $tmp1357 = $tmp1356.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1352)));
// unreffing REF($145:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1350)));
// unreffing REF($142:frost.core.Comparable<frost.core.String.Index>)
if ($tmp1357) goto block6; else goto block7;
block6:;
// line 850
frost$collections$Array* $tmp1358 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1359 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1360 = (frost$core$Int64) {1};
frost$core$String$Index $tmp1361 = *(&local4);
frost$core$String$Index $tmp1362 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$Bit $tmp1363 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1364 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1361, $tmp1362, $tmp1363);
frost$core$String* $tmp1365 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1364);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1359, $tmp1360, $tmp1365);
frost$collections$Array$add$frost$collections$Array$T($tmp1358, ((frost$core$Object*) $tmp1359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
// unreffing REF($165:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
// unreffing REF($159:org.frostlang.frostc.frostdoc.Markdown.HTMLToken)
goto block7;
block7:;
// line 853
frost$collections$Array* $tmp1366 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1366)));
frost$core$Matcher* $tmp1367 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
// unreffing m
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$RegularExpression* $tmp1368 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
// unreffing p
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1369 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
// unreffing nestedTags
*(&local1) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1370 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// unreffing tokens
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1366);

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 866
$fn1372 $tmp1371 = ($fn1372) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1373 = $tmp1371(((frost$core$Object*) param1));
$fn1375 $tmp1374 = ($fn1375) param0->$class->vtable[23];
frost$collections$ListView* $tmp1376 = $tmp1374(param0, $tmp1373);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$collections$ListView* $tmp1377 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local0) = $tmp1376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing REF($5:frost.collections.ListView<org.frostlang.frostc.frostdoc.Markdown.HTMLToken>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// unreffing REF($3:frost.core.String)
// line 867
frost$core$MutableString$clear(param1);
// line 869
frost$collections$ListView* $tmp1378 = *(&local0);
ITable* $tmp1379 = ((frost$collections$Iterable*) $tmp1378)->$class->itable;
while ($tmp1379->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1379 = $tmp1379->next;
}
$fn1381 $tmp1380 = $tmp1379->methods[0];
frost$collections$Iterator* $tmp1382 = $tmp1380(((frost$collections$Iterable*) $tmp1378));
goto block1;
block1:;
ITable* $tmp1383 = $tmp1382->$class->itable;
while ($tmp1383->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1383 = $tmp1383->next;
}
$fn1385 $tmp1384 = $tmp1383->methods[0];
frost$core$Bit $tmp1386 = $tmp1384($tmp1382);
bool $tmp1387 = $tmp1386.value;
if ($tmp1387) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1388 = $tmp1382->$class->itable;
while ($tmp1388->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1388 = $tmp1388->next;
}
$fn1390 $tmp1389 = $tmp1388->methods[1];
frost$core$Object* $tmp1391 = $tmp1389($tmp1382);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1391)));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1392 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1391);
// line 870
*(&local2) = ((frost$core$String*) NULL);
// line 871
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1393 = *(&local1);
frost$core$Int64* $tmp1394 = &$tmp1393->$rawValue;
frost$core$Int64 $tmp1395 = *$tmp1394;
frost$core$Int64 $tmp1396 = (frost$core$Int64) {0};
frost$core$Bit $tmp1397 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1395, $tmp1396);
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block5; else goto block6;
block5:;
frost$core$String** $tmp1399 = (frost$core$String**) ($tmp1393->$data + 0);
frost$core$String* $tmp1400 = *$tmp1399;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$String* $tmp1401 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local3) = $tmp1400;
// line 873
frost$core$String* $tmp1402 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$String* $tmp1403 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local2) = $tmp1402;
// line 874
frost$core$String* $tmp1404 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1405 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1406 = *$tmp1405;
$fn1408 $tmp1407 = ($fn1408) $tmp1406->$class->vtable[2];
frost$core$String* $tmp1409 = $tmp1407($tmp1406, &$s1410);
frost$core$String* $tmp1411 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1404, &$s1412, $tmp1409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
frost$core$String* $tmp1413 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local2) = $tmp1411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// unreffing REF($78:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
// unreffing REF($77:frost.core.String)
// line 875
frost$core$String* $tmp1414 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1415 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1416 = *$tmp1415;
$fn1418 $tmp1417 = ($fn1418) $tmp1416->$class->vtable[2];
frost$core$String* $tmp1419 = $tmp1417($tmp1416, &$s1420);
frost$core$String* $tmp1421 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1414, &$s1422, $tmp1419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$String* $tmp1423 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local2) = $tmp1421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
// unreffing REF($97:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing REF($96:frost.core.String)
// line 876
frost$core$String* $tmp1424 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1425 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1426 = *$tmp1425;
$fn1428 $tmp1427 = ($fn1428) $tmp1426->$class->vtable[2];
frost$core$String* $tmp1429 = $tmp1427($tmp1426, &$s1430);
frost$core$String* $tmp1431 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1424, &$s1432, $tmp1429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$String* $tmp1433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local2) = $tmp1431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
// unreffing REF($116:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// unreffing REF($115:frost.core.String)
// line 877
frost$core$String* $tmp1434 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1435 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1436 = *$tmp1435;
$fn1438 $tmp1437 = ($fn1438) $tmp1436->$class->vtable[2];
frost$core$String* $tmp1439 = $tmp1437($tmp1436, &$s1440);
frost$core$String* $tmp1441 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1434, &$s1442, $tmp1439);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$String* $tmp1443 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local2) = $tmp1441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
// unreffing REF($135:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// unreffing REF($134:frost.core.String)
frost$core$String* $tmp1444 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
// unreffing text
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
frost$core$Int64 $tmp1445 = (frost$core$Int64) {1};
frost$core$Bit $tmp1446 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1395, $tmp1445);
bool $tmp1447 = $tmp1446.value;
if ($tmp1447) goto block7; else goto block4;
block7:;
frost$core$String** $tmp1448 = (frost$core$String**) ($tmp1393->$data + 0);
frost$core$String* $tmp1449 = *$tmp1448;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$String* $tmp1450 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local4) = $tmp1449;
// line 880
frost$core$String* $tmp1451 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$String* $tmp1452 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local2) = $tmp1451;
frost$core$String* $tmp1453 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// unreffing text
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 883
frost$core$String* $tmp1454 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, $tmp1454);
frost$core$String* $tmp1455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
// unreffing value
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1391);
// unreffing REF($37:frost.collections.Iterator.T)
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// unreffing token
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
// unreffing REF($26:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$ListView* $tmp1457 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
// unreffing tokens
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// line 889
frost$core$RegularExpression* $tmp1458 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1458, &$s1459);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1458, &$s1460);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing REF($1:frost.core.RegularExpression)
// line 890
frost$core$RegularExpression* $tmp1461 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1461, &$s1462);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1461, &$s1463);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
// unreffing REF($8:frost.core.RegularExpression)
// line 893
frost$core$RegularExpression* $tmp1464 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1466, &$s1467);
frost$core$String* $tmp1468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1465, &$s1469);
frost$core$String* $tmp1470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1468, &$s1471);
frost$core$RegularExpression$init$frost$core$String($tmp1464, $tmp1470);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$RegularExpression* $tmp1472 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local0) = $tmp1464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
// unreffing REF($16:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
// unreffing REF($15:frost.core.RegularExpression)
// line 898
frost$core$RegularExpression* $tmp1473 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure24* $tmp1474 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown($tmp1474, param0);
frost$core$MutableMethod* $tmp1476 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1476, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1474));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1473, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1476)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
// unreffing REF($44:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
// unreffing REF($41:org.frostlang.frostc.frostdoc.Markdown._Closure24)
frost$core$RegularExpression* $tmp1477 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
// unreffing imageLink
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// line 931
frost$core$RegularExpression* $tmp1478 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1480, &$s1481);
frost$core$String* $tmp1482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1479, &$s1483);
frost$core$String* $tmp1484 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1482, &$s1485);
frost$core$RegularExpression$init$frost$core$String($tmp1478, $tmp1484);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$RegularExpression* $tmp1486 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
*(&local0) = $tmp1478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
// unreffing REF($1:frost.core.RegularExpression)
// line 936
frost$core$RegularExpression* $tmp1487 = *(&local0);
org$frostlang$frostc$frostdoc$Markdown$_Closure26* $tmp1488 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown($tmp1488, param0);
frost$core$MutableMethod* $tmp1490 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1490, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1488));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1487, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1490)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
// unreffing REF($30:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
// unreffing REF($27:org.frostlang.frostc.frostdoc.Markdown._Closure26)
// line 968
frost$core$RegularExpression* $tmp1491 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1493, &$s1494);
frost$core$String* $tmp1495 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1492, &$s1496);
frost$core$String* $tmp1497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1495, &$s1498);
frost$core$String* $tmp1499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1497, &$s1500);
frost$core$String* $tmp1501 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1499, &$s1502);
frost$core$String* $tmp1503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1501, &$s1504);
frost$core$String* $tmp1505 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1503, &$s1506);
frost$core$String* $tmp1507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1505, &$s1508);
frost$core$String* $tmp1509 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1507, &$s1510);
frost$core$String* $tmp1511 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1509, &$s1512);
frost$core$String* $tmp1513 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1511, &$s1514);
frost$core$Int64 $tmp1515 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1491, $tmp1513, $tmp1515);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
frost$core$RegularExpression* $tmp1516 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local1) = $tmp1491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
// unreffing REF($54:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
// unreffing REF($53:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// unreffing REF($52:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
// unreffing REF($49:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
// unreffing REF($48:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
// unreffing REF($43:frost.core.RegularExpression)
// line 982
frost$core$RegularExpression* $tmp1517 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure28* $tmp1518 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown($tmp1518, param0);
frost$core$MutableMethod* $tmp1520 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1520, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1518));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1517, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1520)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
// unreffing REF($105:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
// unreffing REF($102:org.frostlang.frostc.frostdoc.Markdown._Closure28)
// line 1024
frost$core$RegularExpression* $tmp1521 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1523, &$s1524);
frost$core$String* $tmp1525 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1522, &$s1526);
frost$core$String* $tmp1527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1525, &$s1528);
frost$core$Int64 $tmp1529 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1521, $tmp1527, $tmp1529);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
frost$core$RegularExpression* $tmp1530 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local2) = $tmp1521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
// unreffing REF($120:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
// unreffing REF($119:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
// unreffing REF($118:frost.core.RegularExpression)
// line 1030
frost$core$RegularExpression* $tmp1531 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown$_Closure30* $tmp1532 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown($tmp1532, param0);
frost$core$MutableMethod* $tmp1534 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1534, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Object*) $tmp1532));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1531, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1534)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
// unreffing REF($148:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
// unreffing REF($145:org.frostlang.frostc.frostdoc.Markdown._Closure30)
frost$core$RegularExpression* $tmp1535 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
// unreffing referenceShortcut
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1536 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
// unreffing inlineLink
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp1537 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
// unreffing internalLink
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1072
frost$core$RegularExpression* $tmp1538 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1538, &$s1539);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1538, &$s1540);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
// unreffing REF($1:frost.core.RegularExpression)
// line 1073
frost$core$RegularExpression* $tmp1541 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1541, &$s1542);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1541, &$s1543);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
// unreffing REF($8:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1079
frost$core$RegularExpression* $tmp1544 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1544, &$s1545);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1544, &$s1546);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
// unreffing REF($1:frost.core.RegularExpression)
// line 1080
frost$core$RegularExpression* $tmp1547 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1547, &$s1548);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(param1, $tmp1547, &$s1549);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
// unreffing REF($8:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// line 1084
frost$core$RegularExpression* $tmp1550 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1550, &$s1551);
org$frostlang$frostc$frostdoc$Markdown$_Closure32* $tmp1552 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown($tmp1552, param0);
frost$core$MutableMethod* $tmp1554 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp1554, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String), ((frost$core$Object*) $tmp1552));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1550, ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp1554)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
// unreffing REF($6:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
// unreffing REF($3:org.frostlang.frostc.frostdoc.Markdown._Closure32)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
// unreffing REF($1:frost.core.RegularExpression)
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

// line 83
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1555 = &param0->source;
frost$io$File* $tmp1556 = *$tmp1555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$threads$MessageQueue** $tmp1557 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1558 = *$tmp1557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
org$frostlang$frostc$parser$Parser** $tmp1559 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1560 = *$tmp1559;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
frost$core$MutableMethod** $tmp1561 = &param0->linkResolver;
frost$core$MutableMethod* $tmp1562 = *$tmp1561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
frost$collections$HashMap** $tmp1563 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp1564 = *$tmp1563;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
org$frostlang$frostc$frostdoc$Protector** $tmp1565 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1566 = *$tmp1565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
org$frostlang$frostc$frostdoc$Protector** $tmp1567 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1568 = *$tmp1567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
frost$math$Random** $tmp1569 = &param0->random;
frost$math$Random* $tmp1570 = *$tmp1569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
return;

}

