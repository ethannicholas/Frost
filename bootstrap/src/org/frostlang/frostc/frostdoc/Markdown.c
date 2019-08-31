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
#include "frost/core/Int.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/MutableString.h"
#include "frost/core/Matcher.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Bit.h"
#include "frost/collections/ListView.h"
#include "frost/core/String/UTF8List.h"
#include "frost/core/Char8.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure2.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure4.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.h"
#include "frost/core/MutableString/Index.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure6.h"
#include "frost/collections/MapView.h"
#include "frost/core/Char32.h"
#include "frost/core/Real64.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure9.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure12.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/threads/ScopedLock.h"
#include "frost/threads/Lock.h"
#include "frost/collections/SpecializedArray.LTorg/frostlang/frostc/parser/Token.GT.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure14.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure16.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure18.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure20.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure22.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure24.h"
#include "frost/core/Comparable.h"
#include "org/frostlang/frostc/frostdoc/Markdown/HTMLToken.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure26.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure30.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure32.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure34.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$class_type org$frostlang$frostc$frostdoc$Markdown$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$cleanup, org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT, org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString} };

typedef frost$core$String* (*$fn51)(frost$core$Object*);
typedef frost$core$String* (*$fn67)(frost$core$Object*);
typedef frost$core$String* (*$fn83)(frost$core$Object*);
typedef void (*$fn98)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn104)(frost$core$Object*);
typedef void (*$fn117)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn120)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn123)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn126)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn131)(frost$core$Object*);
typedef frost$core$String* (*$fn143)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn149)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef void (*$fn153)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn159)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn163)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn168)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn176)(frost$core$Object*);
typedef frost$core$String* (*$fn186)(frost$core$Object*);
typedef frost$core$String* (*$fn189)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn193)(frost$core$Object*);
typedef frost$core$String* (*$fn225)(org$frostlang$frostc$frostdoc$Markdown$_Closure2*, frost$collections$ListView*);
typedef void (*$fn233)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn235)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn237)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn239)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn241)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn243)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn245)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$collections$Iterator* (*$fn257)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn261)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn266)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn277)(frost$core$Object*);
typedef frost$core$String* (*$fn341)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn351)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn388)(org$frostlang$frostc$frostdoc$Markdown$_Closure4*, frost$collections$ListView*);
typedef frost$core$String* (*$fn439)(frost$core$Object*);
typedef frost$core$String* (*$fn475)(frost$core$Object*);
typedef frost$core$String* (*$fn512)(frost$core$Object*);
typedef frost$core$String* (*$fn527)(frost$core$Object*);
typedef frost$core$String* (*$fn550)(frost$core$Object*);
typedef frost$core$Int (*$fn563)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn592)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn612)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Int (*$fn634)(frost$collections$CollectionView*);
typedef void (*$fn654)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn659)(frost$core$Object*);
typedef frost$core$Int (*$fn673)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn715)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn723)(frost$core$Object*);
typedef frost$core$String* (*$fn739)(org$frostlang$frostc$frostdoc$Markdown$_Closure6*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn752)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn756)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn761)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn768)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn784)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn788)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn793)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn799)(frost$math$Random*);
typedef frost$core$String* (*$fn816)(frost$core$Object*);
typedef frost$core$String* (*$fn855)(frost$core$Object*);
typedef frost$core$Object* (*$fn876)(org$frostlang$frostc$frostdoc$Markdown$_Closure9*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn886)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn897)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn901)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn933)(frost$core$Object*);
typedef frost$core$String* (*$fn939)(frost$collections$ListView*);
typedef frost$core$String* (*$fn949)(frost$core$Object*);
typedef frost$core$String* (*$fn979)(org$frostlang$frostc$frostdoc$Markdown$_Closure12*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn1005)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1009)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1014)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1025)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1037)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1050)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1185)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1193)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1201)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1209)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1217)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn1230)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1242)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1252)(frost$core$Object*);
typedef frost$core$String* (*$fn1261)(frost$core$Object*);
typedef frost$core$Bit (*$fn1272)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1284)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1300)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1321)(frost$core$Object*);
typedef frost$core$String* (*$fn1358)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int (*$fn1384)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1399)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1414)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1438)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1479)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int (*$fn1505)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1520)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1535)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1559)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1600)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1633)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1641)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn1649)(frost$core$Object*);
typedef void (*$fn1661)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn1673)(frost$core$Object*);
typedef frost$core$Object* (*$fn1699)(org$frostlang$frostc$frostdoc$Markdown$_Closure14*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1713)(org$frostlang$frostc$frostdoc$Markdown$_Closure16*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1746)(org$frostlang$frostc$frostdoc$Markdown$_Closure18*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1782)(org$frostlang$frostc$frostdoc$Markdown$_Closure20*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1791)(org$frostlang$frostc$frostdoc$Markdown$_Closure22*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1803)(org$frostlang$frostc$frostdoc$Markdown$_Closure24*, frost$collections$ListView*);
typedef void (*$fn1811)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1813)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1815)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1817)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1819)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1821)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1823)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1825)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1827)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn1832)(frost$core$Object*);
typedef frost$core$Bit (*$fn1893)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn1927)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$String* (*$fn1948)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn1951)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1957)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1961)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1966)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1987)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1997)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn2007)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn2017)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn2044)(frost$core$Object*);
typedef frost$core$String* (*$fn2059)(frost$core$Object*);
typedef frost$core$String* (*$fn2081)(org$frostlang$frostc$frostdoc$Markdown$_Closure26*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn2099)(org$frostlang$frostc$frostdoc$Markdown$_Closure28*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2133)(org$frostlang$frostc$frostdoc$Markdown$_Closure30*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn2151)(org$frostlang$frostc$frostdoc$Markdown$_Closure32*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2164)(frost$core$Object*);
typedef frost$core$String* (*$fn2179)(frost$core$Object*);
typedef frost$core$String* (*$fn2194)(frost$core$Object*);
typedef frost$core$String* (*$fn2209)(frost$core$Object*);
typedef frost$core$String* (*$fn2223)(org$frostlang$frostc$frostdoc$Markdown$_Closure34*, frost$collections$ListView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e", 38, -4001291999769164301, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x64\x75\x6d\x6d\x79", 10, -318330169617071760, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72\x5c\x6e", 4, 7951194466260930145, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72", 2, 671122139501198827, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, -1139377895399220983, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x2b\x24", 6, -619359493981426982, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60\x5f\x3e\x21", 4, 7659751650544287521, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, 2316169525425843347, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 5306561135431028005, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x5c", 3, -5656721131278804581, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29", 4, -2335708253904817870, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 33, -4331202214299653377, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f", 10, 8382417696982838485, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 15, -6491245181353575060, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f", 24, 3710167618475896376, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 10, -5708435374441202776, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, 4309245317481151845, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 7160482551558519224, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, -5777796302439281154, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70", 1, -5808538181456230033, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76", 3, -3843758403106219896, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x31", 2, 628963565149030354, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x32", 2, 628962465637402143, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x33", 2, 628961366125773932, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x34", 2, 628960266614145721, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x35", 2, 628959167102517510, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x36", 2, 628958067590889299, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -5563452656499994818, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65", 3, 8646156028890705350, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 8583921542012250175, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6c", 2, 617375812101585325, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, -5981763091442670774, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, -783081183237450799, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d", 4, -2513836004432995353, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 7357453410947828701, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, -3638500342914660223, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x68", 4, 2256134787772167695, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x73", 3, 3143514847037410647, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x6c", 3, -3847723242036791862, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5e\x3c\x28", 4, -48189702736247289, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 287570575661980099, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 2665918321944868088, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, -7380592505298674730, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5e", 2, 567781240609339659, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28", 2, 579161185959052809, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 287570575661980099, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 938556386175108236, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, -7380592505298674730, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, -8972720710842805865, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 7194244039519334453, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, -3928593254950292230, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 5113638981539259662, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 4681977557455105029, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3f\x3e", 3, -1252663599262404009, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 7822491852177365645, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, -8972720710842805865, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 7194244039519334453, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, -3928593254950292230, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a", 4, -2345270706533476687, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x21", 2, 579168882540450286, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, 5563676495348135801, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, 2741499190047052438, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 7194222049286770233, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 97634128454376478, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 7690319398872698237, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x70\x3e", 3, 8061034418550842365, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 8919941027677049518, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, 1795392191797210536, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, 943263205479741618, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 5452143767326512023, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23", 2, 558196797748116622, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23\x78", 3, -5531746251334265342, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 567770245493057549, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -7372722945027663410, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 5142313243796413576, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, -4363383151632465587, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2a", 3, -5612786845647453793, NULL };
static frost$core$String $s869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 3712169380313635567, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, -3272951813139089848, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -7138352204384862423, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, -7521922402797660827, NULL };
static frost$core$String $s965 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, -6625699055198575136, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, 3651045375067248158, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 8088723627449183031, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, 4586254628416497089, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, 5195701876173909349, NULL };
static frost$core$String $s1085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, -1277266025356162443, NULL };
static frost$core$String $s1093 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 614141651668444638, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 7976964863345252008, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6237120118826539316, NULL };
static frost$core$String $s1117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, 3489752146076448555, NULL };
static frost$core$String $s1125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -6843474029214577891, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -3542195609056500961, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -4855012157584048303, NULL };
static frost$core$String $s1149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 33141744113103844, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, -149918338464228758, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s1174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s1176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s1179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 8779067523193954595, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s1195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b", 2, 671077059524442176, NULL };
static frost$core$String $s1211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s1212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, 4264447674952797972, NULL };
static frost$core$String $s1257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s1543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s1544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s1646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -248689979902601246, NULL };
static frost$core$String $s1657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -9212652225966281814, NULL };
static frost$core$String $s1662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 4555640629949038113, NULL };
static frost$core$String $s1663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, -453769903465079796, NULL };
static frost$core$String $s1676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, -3741150137448884478, NULL };
static frost$core$String $s1678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, 137202100460744211, NULL };
static frost$core$String $s1680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8134773430561440898, NULL };
static frost$core$String $s1693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, -439449056924796284, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 1848678979582438429, NULL };
static frost$core$String $s1730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, -541266234631704725, NULL };
static frost$core$String $s1733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 654627259653007759, NULL };
static frost$core$String $s1738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 9093550410993434533, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2262235355244044178, NULL };
static frost$core$String $s1767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s1774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s1775 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1780 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, -6883718133434480482, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 7770988057466060478, NULL };
static frost$core$String $s1799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 16014950917847968, NULL };
static frost$core$String $s1829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, -5658908687078335657, NULL };
static frost$core$String $s1840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, -2897744956745334060, NULL };
static frost$core$String $s1849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -2230095140111063139, NULL };
static frost$core$String $s1860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, -1177431067148667313, NULL };
static frost$core$String $s1868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -1727262038654951337, NULL };
static frost$core$String $s1869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, 6214673560103078479, NULL };
static frost$core$String $s1871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s1991 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s1999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s2001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s2009 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s2011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s2019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s2021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s2041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 6493917754048131162, NULL };
static frost$core$String $s2052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, 4038931684154322219, NULL };
static frost$core$String $s2056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, 765547484578233383, NULL };
static frost$core$String $s2067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -2070577711995753147, NULL };
static frost$core$String $s2072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, 8561428590693777046, NULL };
static frost$core$String $s2073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s2075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s2091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s2095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x28", 2, 671062765873275433, NULL };
static frost$core$String $s2110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s2112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, -2141900438656434377, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s2116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 5815611588259600167, NULL };
static frost$core$String $s2120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, -5551797076377908473, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x35", 2, 671057268315134378, NULL };
static frost$core$String $s2124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3f", 2, 566759794306920865, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x29", 2, 671061666361647222, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b", 3, 727888895142067038, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 2820061196371221627, NULL };
static frost$core$String $s2144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s2146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, -3636589227861870419, NULL };
static frost$core$String $s2172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 980505209609811292, NULL };
static frost$core$String $s2176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, 9006340171609119475, NULL };
static frost$core$String $s2187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, -8498297401027505814, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -1680408519398193257, NULL };
static frost$core$String $s2202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s2206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, -2067299480089594827, NULL };
static frost$core$String $s2217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s2221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 4191340564316553542, NULL };

void org$frostlang$frostc$frostdoc$Markdown$init(org$frostlang$frostc$frostdoc$Markdown* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:120
org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(param0, ((frost$core$MutableMethod*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:98
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:100
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:105
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:108
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:111
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:114
frost$math$Random* $tmp24 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$math$Random** $tmp25 = &param0->random;
frost$math$Random* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$math$Random** $tmp27 = &param0->random;
*$tmp27 = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:117
frost$core$Int $tmp28 = (frost$core$Int) {0u};
frost$core$Int* $tmp29 = &param0->listLevel;
*$tmp29 = $tmp28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:124
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$MutableMethod** $tmp35 = &param0->linkResolver;
frost$core$MutableMethod* $tmp36 = *$tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$MutableMethod** $tmp37 = &param0->linkResolver;
*$tmp37 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:126
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
frost$core$Matcher* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$Matcher* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:130
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp44 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp44, param1);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$MutableString* $tmp45 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local0) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:131
frost$core$MutableString* $tmp46 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp47, &$s48);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:131:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp49 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn51 $tmp50 = ($fn51) ((frost$core$Object*) $tmp46)->$class->vtable[0];
frost$core$String* $tmp52 = $tmp50(((frost$core$Object*) $tmp46));
frost$core$Matcher* $tmp53 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp47, $tmp52);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Matcher* $tmp54 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local1) = $tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp46);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp55 = *(&local1);
frost$core$Bit $tmp56 = frost$core$Matcher$find$R$frost$core$Bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp58 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp58, $tmp46, &$s59, $tmp49);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp60 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp60, $tmp46);
frost$core$Matcher* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:132
frost$core$MutableString* $tmp62 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp63 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp63, &$s64);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:132:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp65 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn67 $tmp66 = ($fn67) ((frost$core$Object*) $tmp62)->$class->vtable[0];
frost$core$String* $tmp68 = $tmp66(((frost$core$Object*) $tmp62));
frost$core$Matcher* $tmp69 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp63, $tmp68);
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Matcher* $tmp70 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local2) = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp62);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp71 = *(&local2);
frost$core$Bit $tmp72 = frost$core$Matcher$find$R$frost$core$Bit($tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp74 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp74, $tmp62, &$s75, $tmp65);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp76 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp76, $tmp62);
frost$core$Matcher* $tmp77 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:133
frost$core$MutableString* $tmp78 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp79 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp79, &$s80);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:133:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp81 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn83 $tmp82 = ($fn83) ((frost$core$Object*) $tmp78)->$class->vtable[0];
frost$core$String* $tmp84 = $tmp82(((frost$core$Object*) $tmp78));
frost$core$Matcher* $tmp85 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp79, $tmp84);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Matcher* $tmp86 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local3) = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp78);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block13;
block13:;
frost$core$Matcher* $tmp87 = *(&local3);
frost$core$Bit $tmp88 = frost$core$Matcher$find$R$frost$core$Bit($tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp90 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp90, $tmp78, &$s91, $tmp81);
goto block13;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp92 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp92, $tmp78);
frost$core$Matcher* $tmp93 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:136
frost$core$MutableString* $tmp94 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp94, &$s95);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:138
frost$core$MutableString* $tmp96 = *(&local0);
$fn98 $tmp97 = ($fn98) param0->$class->vtable[14];
$tmp97(param0, $tmp96);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:139
frost$core$MutableString* $tmp99 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp100 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp100, &$s101);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:139:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp102 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn104 $tmp103 = ($fn104) ((frost$core$Object*) $tmp99)->$class->vtable[0];
frost$core$String* $tmp105 = $tmp103(((frost$core$Object*) $tmp99));
frost$core$Matcher* $tmp106 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp100, $tmp105);
*(&local4) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Matcher* $tmp107 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local4) = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp99);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block18;
block18:;
frost$core$Matcher* $tmp108 = *(&local4);
frost$core$Bit $tmp109 = frost$core$Matcher$find$R$frost$core$Bit($tmp108);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp111 = *(&local4);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp111, $tmp99, &$s112, $tmp102);
goto block18;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp113 = *(&local4);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp113, $tmp99);
frost$core$Matcher* $tmp114 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local4) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:140
frost$core$MutableString* $tmp115 = *(&local0);
$fn117 $tmp116 = ($fn117) param0->$class->vtable[8];
$tmp116(param0, $tmp115);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:141
frost$core$MutableString* $tmp118 = *(&local0);
$fn120 $tmp119 = ($fn120) param0->$class->vtable[5];
$tmp119(param0, $tmp118);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:142
frost$core$MutableString* $tmp121 = *(&local0);
$fn123 $tmp122 = ($fn123) param0->$class->vtable[6];
$tmp122(param0, $tmp121);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:143
frost$core$MutableString* $tmp124 = *(&local0);
$fn126 $tmp125 = ($fn126) param0->$class->vtable[11];
$tmp125(param0, $tmp124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:145
frost$core$MutableString* $tmp127 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp127, &$s128);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:146
frost$core$MutableString* $tmp129 = *(&local0);
$fn131 $tmp130 = ($fn131) ((frost$core$Object*) $tmp129)->$class->vtable[0];
frost$core$String* $tmp132 = $tmp130(((frost$core$Object*) $tmp129));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$MutableString* $tmp133 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp132;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:150
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Markdown.frost:150:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp134 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp134, &$s135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp134)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp134)));
frost$collections$ListView* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local0) = ((frost$collections$ListView*) $tmp134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp134)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:151
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Markdown.frost:151:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp137 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp137, &$s138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp137)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp137)));
frost$collections$ListView* $tmp139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local1) = ((frost$collections$ListView*) $tmp137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp137)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:154
org$frostlang$frostc$frostdoc$Protector** $tmp140 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp141 = *$tmp140;
$fn143 $tmp142 = ($fn143) $tmp141->$class->vtable[2];
frost$core$String* $tmp144 = $tmp142($tmp141, &$s145);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s146, $tmp144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:157
frost$collections$ListView* $tmp147 = *(&local0);
$fn149 $tmp148 = ($fn149) param0->$class->vtable[4];
$tmp148(param0, param1, $tmp147, &$s150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:158
frost$collections$ListView* $tmp151 = *(&local1);
$fn153 $tmp152 = ($fn153) param0->$class->vtable[4];
$tmp152(param0, param1, $tmp151, &$s154);
frost$collections$ListView* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1, frost$collections$ListView* param2, frost$core$String* param3) {

frost$core$Char8 local0;
frost$core$RegularExpression* local1 = NULL;
frost$core$Matcher* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:162
ITable* $tmp157 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[0];
frost$collections$Iterator* $tmp160 = $tmp158(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp161 = $tmp160->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$core$Bit $tmp164 = $tmp162($tmp160);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block3; else goto block2;
block2:;
ITable* $tmp166 = $tmp160->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[1];
frost$core$Object* $tmp169 = $tmp167($tmp160);
*(&local0) = ((frost$core$Char8$wrapper*) $tmp169)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:163
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp170 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s172, param3);
frost$core$Char8 $tmp173 = *(&local0);
frost$core$Char8$wrapper* $tmp174;
$tmp174 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp174->value = $tmp173;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:163:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn176 $tmp175 = ($fn176) ((frost$core$Object*) $tmp174)->$class->vtable[0];
frost$core$String* $tmp177 = $tmp175(((frost$core$Object*) $tmp174));
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$RegularExpression$init$frost$core$String($tmp170, $tmp178);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$RegularExpression* $tmp179 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local1) = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:164
frost$core$RegularExpression* $tmp180 = *(&local1);
org$frostlang$frostc$frostdoc$Protector** $tmp181 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp182 = *$tmp181;
frost$core$Char8 $tmp183 = *(&local0);
frost$core$Char8$wrapper* $tmp184;
$tmp184 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp184->value = $tmp183;
$fn186 $tmp185 = ($fn186) ((frost$core$Object*) $tmp184)->$class->vtable[0];
frost$core$String* $tmp187 = $tmp185(((frost$core$Object*) $tmp184));
$fn189 $tmp188 = ($fn189) $tmp182->$class->vtable[2];
frost$core$String* $tmp190 = $tmp188($tmp182, $tmp187);
frost$core$Bit $tmp191 = (frost$core$Bit) {false};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from Markdown.frost:164:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn193 $tmp192 = ($fn193) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp194 = $tmp192(((frost$core$Object*) param1));
frost$core$Matcher* $tmp195 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp180, $tmp194);
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Matcher* $tmp196 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local2) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block6;
block6:;
frost$core$Matcher* $tmp197 = *(&local2);
frost$core$Bit $tmp198 = frost$core$Matcher$find$R$frost$core$Bit($tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp200 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp200, param1, $tmp190, $tmp191);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp201 = *(&local2);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp202 = &$tmp201->searchText;
frost$core$String* $tmp203 = *$tmp202;
frost$core$String$Index* $tmp204 = &$tmp201->replacementIndex;
frost$core$String$Index $tmp205 = *$tmp204;
frost$core$Bit $tmp206 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp207 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp205, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp206);
frost$core$String* $tmp208 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp203, $tmp207);
frost$core$MutableString$append$frost$core$String(param1, $tmp208);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Matcher* $tmp209 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$RegularExpression* $tmp210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp169);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:169
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp211 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s213, &$s214);
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp212, &$s216);
frost$core$String* $tmp217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp215, &$s218);
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp217, &$s220);
frost$core$Int $tmp221 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp211, $tmp219, $tmp221);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$RegularExpression* $tmp222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local0) = $tmp211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:177
frost$core$RegularExpression* $tmp223 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure2));
org$frostlang$frostc$frostdoc$Markdown$_Closure2* $tmp224 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure2$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown($tmp224, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp226 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:177:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp227 = &$tmp226->pointer;
*$tmp227 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Object** $tmp228 = &$tmp226->target;
frost$core$Object* $tmp229 = *$tmp228;
frost$core$Frost$unref$frost$core$Object$Q($tmp229);
frost$core$Object** $tmp230 = &$tmp226->target;
*$tmp230 = ((frost$core$Object*) $tmp224);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp223, $tmp226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$RegularExpression* $tmp231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:199
$fn233 $tmp232 = ($fn233) param0->$class->vtable[21];
$tmp232(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:200
$fn235 $tmp234 = ($fn235) param0->$class->vtable[7];
$tmp234(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:201
$fn237 $tmp236 = ($fn237) param0->$class->vtable[19];
$tmp236(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:202
$fn239 $tmp238 = ($fn239) param0->$class->vtable[15];
$tmp238(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:203
$fn241 $tmp240 = ($fn241) param0->$class->vtable[13];
$tmp240(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:204
$fn243 $tmp242 = ($fn243) param0->$class->vtable[8];
$tmp242(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:205
$fn245 $tmp244 = ($fn245) param0->$class->vtable[9];
$tmp244(param0, param1);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Matcher* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:209
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp246 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp246);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$collections$Array* $tmp247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local0) = $tmp246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:210
frost$collections$Array* $tmp248 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp248, ((frost$core$Object*) &$s249));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:211
frost$collections$Array* $tmp250 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp250, ((frost$core$Object*) &$s251));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:212
frost$collections$Array* $tmp252 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp252, ((frost$core$Object*) &$s253));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:213
frost$collections$Array* $tmp254 = *(&local0);
ITable* $tmp255 = ((frost$collections$Iterable*) $tmp254)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$collections$Iterator* $tmp258 = $tmp256(((frost$collections$Iterable*) $tmp254));
goto block1;
block1:;
ITable* $tmp259 = $tmp258->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
frost$core$Bit $tmp262 = $tmp260($tmp258);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp264 = $tmp258->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[1];
frost$core$Object* $tmp267 = $tmp265($tmp258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp267)));
frost$core$String* $tmp268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local1) = ((frost$core$String*) $tmp267);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:214
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp269 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp270 = *(&local1);
frost$core$String* $tmp271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s272, $tmp270);
frost$core$String* $tmp273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp271, &$s274);
frost$core$RegularExpression$init$frost$core$String($tmp269, $tmp273);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:214:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp275 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn277 $tmp276 = ($fn277) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp278 = $tmp276(((frost$core$Object*) param1));
frost$core$Matcher* $tmp279 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp269, $tmp278);
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Matcher* $tmp280 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local2) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block6;
block6:;
frost$core$Matcher* $tmp281 = *(&local2);
frost$core$Bit $tmp282 = frost$core$Matcher$find$R$frost$core$Bit($tmp281);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp284 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp284, param1, &$s285, $tmp275);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp286 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp286, param1);
frost$core$Matcher* $tmp287 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
frost$core$String* $tmp288 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$collections$Array* $tmp289 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Int local4;
frost$core$RegularExpression* local5 = NULL;
frost$core$MutableMethod* local6 = NULL;
frost$core$RegularExpression* local7 = NULL;
frost$core$RegularExpression* local8 = NULL;
frost$core$RegularExpression* local9 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:227
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp290 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp290);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$collections$Array* $tmp291 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local0) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:228
frost$collections$Array* $tmp292 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp292, ((frost$core$Object*) &$s293));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:229
frost$collections$Array* $tmp294 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp294, ((frost$core$Object*) &$s295));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:230
frost$collections$Array* $tmp296 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp296, ((frost$core$Object*) &$s297));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:231
frost$collections$Array* $tmp298 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp298, ((frost$core$Object*) &$s299));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:232
frost$collections$Array* $tmp300 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp300, ((frost$core$Object*) &$s301));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:233
frost$collections$Array* $tmp302 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp302, ((frost$core$Object*) &$s303));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:234
frost$collections$Array* $tmp304 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp304, ((frost$core$Object*) &$s305));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:235
frost$collections$Array* $tmp306 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp306, ((frost$core$Object*) &$s307));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:236
frost$collections$Array* $tmp308 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp308, ((frost$core$Object*) &$s309));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:237
frost$collections$Array* $tmp310 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp310, ((frost$core$Object*) &$s311));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:238
frost$collections$Array* $tmp312 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp312, ((frost$core$Object*) &$s313));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:239
frost$collections$Array* $tmp314 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp314, ((frost$core$Object*) &$s315));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:240
frost$collections$Array* $tmp316 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp316, ((frost$core$Object*) &$s317));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:241
frost$collections$Array* $tmp318 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp318, ((frost$core$Object*) &$s319));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:242
frost$collections$Array* $tmp320 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp320, ((frost$core$Object*) &$s321));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:243
frost$collections$Array* $tmp322 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp322, ((frost$core$Object*) &$s323));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:244
frost$collections$Array* $tmp324 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp324, ((frost$core$Object*) &$s325));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:245
frost$collections$Array* $tmp326 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp326, ((frost$core$Object*) &$s327));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:246
frost$collections$Array* $tmp328 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp328, ((frost$core$Object*) &$s329));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:247
frost$collections$Array* $tmp330 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp330, ((frost$core$Object*) &$s331));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:248
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp332 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp332);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$collections$Array* $tmp333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local1) = $tmp332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:249
frost$collections$Array* $tmp334 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp334, ((frost$core$Object*) &$s335));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:250
frost$collections$Array* $tmp336 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp336, ((frost$core$Object*) &$s337));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:252
frost$collections$Array* $tmp338 = *(&local0);
ITable* $tmp339 = ((frost$collections$CollectionView*) $tmp338)->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[3];
frost$core$String* $tmp342 = $tmp340(((frost$collections$CollectionView*) $tmp338), &$s343);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$String* $tmp344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local2) = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:253
frost$core$String* $tmp345 = *(&local2);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Markdown.frost:253:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp345, &$s347);
frost$collections$Array* $tmp348 = *(&local1);
ITable* $tmp349 = ((frost$collections$CollectionView*) $tmp348)->$class->itable;
while ($tmp349->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[3];
frost$core$String* $tmp352 = $tmp350(((frost$collections$CollectionView*) $tmp348), &$s353);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, $tmp352);
frost$core$String* $tmp355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp354, &$s356);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$String* $tmp357 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local3) = $tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:255
frost$core$Int $tmp358 = (frost$core$Int) {4u};
frost$core$Int $tmp359 = (frost$core$Int) {1u};
int64_t $tmp360 = $tmp358.value;
int64_t $tmp361 = $tmp359.value;
int64_t $tmp362 = $tmp360 - $tmp361;
frost$core$Int $tmp363 = (frost$core$Int) {$tmp362};
*(&local4) = $tmp363;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:268
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp364 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp365 = *(&local2);
frost$core$String* $tmp366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s367, $tmp365);
frost$core$String* $tmp368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp366, &$s369);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp368, &$s371);
frost$core$String* $tmp372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, &$s373);
frost$core$String* $tmp374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp372, &$s375);
frost$core$String* $tmp376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp374, &$s377);
frost$core$String* $tmp378 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp376, &$s379);
frost$core$Int $tmp380 = (frost$core$Int) {1u};
frost$core$Int $tmp381 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Markdown.frost:275:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382 | $tmp383;
frost$core$Int $tmp385 = (frost$core$Int) {$tmp384};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp364, $tmp378, $tmp385);
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$RegularExpression* $tmp386 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local5) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure4));
org$frostlang$frostc$frostdoc$Markdown$_Closure4* $tmp387 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure4$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure4$init$org$frostlang$frostc$frostdoc$Markdown($tmp387, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp389 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:277:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp390 = &$tmp389->pointer;
*$tmp390 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Object** $tmp391 = &$tmp389->target;
frost$core$Object* $tmp392 = *$tmp391;
frost$core$Frost$unref$frost$core$Object$Q($tmp392);
frost$core$Object** $tmp393 = &$tmp389->target;
*$tmp393 = ((frost$core$Object*) $tmp387);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
*(&local6) = ((frost$core$MutableMethod*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$MutableMethod* $tmp394 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local6) = $tmp389;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:281
frost$core$RegularExpression* $tmp395 = *(&local5);
frost$core$MutableMethod* $tmp396 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp395, $tmp396);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:284
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp397 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s399, &$s400);
frost$core$String* $tmp401 = *(&local3);
frost$core$String* $tmp402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp398, $tmp401);
frost$core$String* $tmp403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp402, &$s404);
frost$core$String* $tmp405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp403, &$s406);
frost$core$String* $tmp407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp405, &$s408);
frost$core$String* $tmp409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp407, &$s410);
frost$core$String* $tmp411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp409, &$s412);
frost$core$String* $tmp413 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp411, &$s414);
frost$core$Int $tmp415 = (frost$core$Int) {1u};
frost$core$Int $tmp416 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Markdown.frost:292:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp417 = $tmp415.value;
int64_t $tmp418 = $tmp416.value;
int64_t $tmp419 = $tmp417 | $tmp418;
frost$core$Int $tmp420 = (frost$core$Int) {$tmp419};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp397, $tmp413, $tmp420);
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$RegularExpression* $tmp421 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local7) = $tmp397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:293
frost$core$RegularExpression* $tmp422 = *(&local7);
frost$core$MutableMethod* $tmp423 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp422, $tmp423);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:296
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp424 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s426, &$s427);
frost$core$String* $tmp428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp425, &$s429);
frost$core$String* $tmp430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp428, &$s431);
frost$core$String* $tmp432 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp430, &$s433);
frost$core$String* $tmp434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp432, &$s435);
frost$core$Int $tmp436 = *(&local4);
frost$core$Int$wrapper* $tmp437;
$tmp437 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp437->value = $tmp436;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:302:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn439 $tmp438 = ($fn439) ((frost$core$Object*) $tmp437)->$class->vtable[0];
frost$core$String* $tmp440 = $tmp438(((frost$core$Object*) $tmp437));
frost$core$String* $tmp441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp434, $tmp440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$String* $tmp442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp441, &$s443);
frost$core$String* $tmp444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp442, &$s445);
frost$core$String* $tmp446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp444, &$s447);
frost$core$String* $tmp448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp446, &$s449);
frost$core$String* $tmp450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp448, &$s451);
frost$core$String* $tmp452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp450, &$s453);
frost$core$String* $tmp454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp452, &$s455);
frost$core$Int $tmp456 = (frost$core$Int) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp424, $tmp454, $tmp456);
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$RegularExpression* $tmp457 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local8) = $tmp424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:310
frost$core$RegularExpression* $tmp458 = *(&local8);
frost$core$MutableMethod* $tmp459 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp458, $tmp459);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:313
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp460 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s462, &$s463);
frost$core$String* $tmp464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp461, &$s465);
frost$core$String* $tmp466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp464, &$s467);
frost$core$String* $tmp468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp466, &$s469);
frost$core$String* $tmp470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp468, &$s471);
frost$core$Int $tmp472 = *(&local4);
frost$core$Int$wrapper* $tmp473;
$tmp473 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp473->value = $tmp472;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:319:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn475 $tmp474 = ($fn475) ((frost$core$Object*) $tmp473)->$class->vtable[0];
frost$core$String* $tmp476 = $tmp474(((frost$core$Object*) $tmp473));
frost$core$String* $tmp477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp470, $tmp476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp477, &$s479);
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s481);
frost$core$String* $tmp482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp480, &$s483);
frost$core$String* $tmp484 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp482, &$s485);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp484, &$s487);
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, &$s489);
frost$core$String* $tmp490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp488, &$s491);
frost$core$String* $tmp492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp490, &$s493);
frost$core$String* $tmp494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp492, &$s495);
frost$core$RegularExpression$init$frost$core$String($tmp460, $tmp494);
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$RegularExpression* $tmp496 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local9) = $tmp460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:328
frost$core$RegularExpression* $tmp497 = *(&local9);
frost$core$MutableMethod* $tmp498 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp497, $tmp498);
frost$core$RegularExpression* $tmp499 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp500 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp501 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$MutableMethod* $tmp502 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local6) = ((frost$core$MutableMethod*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$RegularExpression* $tmp503 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp504 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp505 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp506 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp507 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int local3;
frost$core$String* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$MutableString* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:332
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp508 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp508, &$s509);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:332:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp510 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn512 $tmp511 = ($fn512) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp513 = $tmp511(((frost$core$Object*) param1));
frost$core$Matcher* $tmp514 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp508, $tmp513);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Matcher* $tmp515 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local0) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp516 = *(&local0);
frost$core$Bit $tmp517 = frost$core$Matcher$find$R$frost$core$Bit($tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp519 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp519, param1, &$s520, $tmp510);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp521 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp521, param1);
frost$core$Matcher* $tmp522 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:333
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp523 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp523, &$s524);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:333:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp525 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn527 $tmp526 = ($fn527) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp528 = $tmp526(((frost$core$Object*) param1));
frost$core$Matcher* $tmp529 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp523, $tmp528);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Matcher* $tmp530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local1) = $tmp529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp531 = *(&local1);
frost$core$Bit $tmp532 = frost$core$Matcher$find$R$frost$core$Bit($tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp534 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp534, param1, &$s535, $tmp525);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp536 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp536, param1);
frost$core$Matcher* $tmp537 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:335
*(&local2) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:336
// begin inline call to function frost.core.MutableString.get_byteLength():frost.core.Int from Markdown.frost:336:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:173
frost$core$Int* $tmp538 = &param1->_length;
frost$core$Int $tmp539 = *$tmp538;
frost$core$Int $tmp540 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:336:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540.value;
bool $tmp543 = $tmp541 == $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:337
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp546 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$collections$Array* $tmp547 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local2) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:339
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp548 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
$fn550 $tmp549 = ($fn550) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp551 = $tmp549(((frost$core$Object*) param1));
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp552 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp552, &$s553);
// begin inline call to function frost.core.String.split(delimiter:frost.core.RegularExpression):frost.collections.Array<frost.core.String> from Markdown.frost:339:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1449
frost$core$Int64 $tmp554 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp555 = $tmp554.value;
frost$core$Int $tmp556 = (frost$core$Int) {((int64_t) $tmp555)};
frost$collections$Array* $tmp557 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT($tmp551, $tmp552, $tmp556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp548, ((frost$collections$CollectionView*) $tmp557));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$collections$Array* $tmp558 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local2) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:341
frost$core$Int $tmp559 = (frost$core$Int) {0u};
frost$collections$Array* $tmp560 = *(&local2);
ITable* $tmp561 = ((frost$collections$CollectionView*) $tmp560)->$class->itable;
while ($tmp561->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp561 = $tmp561->next;
}
$fn563 $tmp562 = $tmp561->methods[0];
frost$core$Int $tmp564 = $tmp562(((frost$collections$CollectionView*) $tmp560));
frost$core$Bit $tmp565 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp566 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp559, $tmp564, $tmp565);
frost$core$Int $tmp567 = $tmp566.min;
*(&local3) = $tmp567;
frost$core$Int $tmp568 = $tmp566.max;
frost$core$Bit $tmp569 = $tmp566.inclusive;
bool $tmp570 = $tmp569.value;
frost$core$Int $tmp571 = (frost$core$Int) {1u};
if ($tmp570) goto block21; else goto block22;
block21:;
int64_t $tmp572 = $tmp567.value;
int64_t $tmp573 = $tmp568.value;
bool $tmp574 = $tmp572 <= $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block18; else goto block19;
block22:;
int64_t $tmp577 = $tmp567.value;
int64_t $tmp578 = $tmp568.value;
bool $tmp579 = $tmp577 < $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:342
frost$collections$Array* $tmp582 = *(&local2);
frost$core$Int $tmp583 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Markdown.frost:342:40
frost$core$Int $tmp584 = (frost$core$Int) {0u};
int64_t $tmp585 = $tmp583.value;
int64_t $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 >= $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block26; else goto block25;
block26:;
ITable* $tmp590 = ((frost$collections$CollectionView*) $tmp582)->$class->itable;
while ($tmp590->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp590 = $tmp590->next;
}
$fn592 $tmp591 = $tmp590->methods[0];
frost$core$Int $tmp593 = $tmp591(((frost$collections$CollectionView*) $tmp582));
int64_t $tmp594 = $tmp583.value;
int64_t $tmp595 = $tmp593.value;
bool $tmp596 = $tmp594 < $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block24; else goto block25;
block25:;
frost$core$Int $tmp599 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s600, $tmp599, &$s601);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp602 = &$tmp582->data;
frost$core$Object** $tmp603 = *$tmp602;
frost$core$Int64 $tmp604 = frost$core$Int64$init$frost$core$Int($tmp583);
int64_t $tmp605 = $tmp604.value;
frost$core$Object* $tmp606 = $tmp603[$tmp605];
frost$core$Frost$ref$frost$core$Object$Q($tmp606);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp606)));
frost$core$String* $tmp607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local4) = ((frost$core$String*) $tmp606);
frost$core$Frost$unref$frost$core$Object$Q($tmp606);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:343
org$frostlang$frostc$frostdoc$Protector** $tmp608 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp609 = *$tmp608;
frost$core$String* $tmp610 = *(&local4);
$fn612 $tmp611 = ($fn612) $tmp609->$class->vtable[3];
frost$core$String* $tmp613 = $tmp611($tmp609, $tmp610);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$String* $tmp614 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local5) = $tmp613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:344
frost$core$String* $tmp615 = *(&local5);
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615 != NULL};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:345
frost$collections$Array* $tmp618 = *(&local2);
frost$core$Int $tmp619 = *(&local3);
frost$core$String* $tmp620 = *(&local5);
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620 != NULL};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block30; else goto block31;
block31:;
frost$core$Int $tmp623 = (frost$core$Int) {345u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s624, $tmp623, &$s625);
abort(); // unreachable
block30:;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Markdown.frost:345:27
frost$core$Int $tmp626 = (frost$core$Int) {0u};
int64_t $tmp627 = $tmp619.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 >= $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block35; else goto block34;
block35:;
ITable* $tmp632 = ((frost$collections$CollectionView*) $tmp618)->$class->itable;
while ($tmp632->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp632 = $tmp632->next;
}
$fn634 $tmp633 = $tmp632->methods[0];
frost$core$Int $tmp635 = $tmp633(((frost$collections$CollectionView*) $tmp618));
int64_t $tmp636 = $tmp619.value;
int64_t $tmp637 = $tmp635.value;
bool $tmp638 = $tmp636 < $tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block33; else goto block34;
block34:;
frost$core$Int $tmp641 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s642, $tmp641, &$s643);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp644 = &$tmp618->data;
frost$core$Object** $tmp645 = *$tmp644;
frost$core$Int64 $tmp646 = frost$core$Int64$init$frost$core$Int($tmp619);
int64_t $tmp647 = $tmp646.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Object* $tmp648 = $tmp645[$tmp647];
frost$core$Frost$unref$frost$core$Object$Q($tmp648);
$tmp645[$tmp647] = ((frost$core$Object*) $tmp620);
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:348
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp649 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp650 = *(&local4);
frost$core$MutableString$init$frost$core$String($tmp649, $tmp650);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$MutableString* $tmp651 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local6) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:349
frost$core$MutableString* $tmp652 = *(&local6);
$fn654 $tmp653 = ($fn654) param0->$class->vtable[22];
$tmp653(param0, $tmp652);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:350
frost$collections$Array* $tmp655 = *(&local2);
frost$core$Int $tmp656 = *(&local3);
frost$core$MutableString* $tmp657 = *(&local6);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:350:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn659 $tmp658 = ($fn659) ((frost$core$Object*) $tmp657)->$class->vtable[0];
frost$core$String* $tmp660 = $tmp658(((frost$core$Object*) $tmp657));
frost$core$String* $tmp661 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s662, $tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$String* $tmp663 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp661, &$s664);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Markdown.frost:350:27
frost$core$Int $tmp665 = (frost$core$Int) {0u};
int64_t $tmp666 = $tmp656.value;
int64_t $tmp667 = $tmp665.value;
bool $tmp668 = $tmp666 >= $tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668};
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block40; else goto block39;
block40:;
ITable* $tmp671 = ((frost$collections$CollectionView*) $tmp655)->$class->itable;
while ($tmp671->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp671 = $tmp671->next;
}
$fn673 $tmp672 = $tmp671->methods[0];
frost$core$Int $tmp674 = $tmp672(((frost$collections$CollectionView*) $tmp655));
int64_t $tmp675 = $tmp656.value;
int64_t $tmp676 = $tmp674.value;
bool $tmp677 = $tmp675 < $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block38; else goto block39;
block39:;
frost$core$Int $tmp680 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s681, $tmp680, &$s682);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp683 = &$tmp655->data;
frost$core$Object** $tmp684 = *$tmp683;
frost$core$Int64 $tmp685 = frost$core$Int64$init$frost$core$Int($tmp656);
int64_t $tmp686 = $tmp685.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Object* $tmp687 = $tmp684[$tmp686];
frost$core$Frost$unref$frost$core$Object$Q($tmp687);
$tmp684[$tmp686] = ((frost$core$Object*) $tmp663);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$MutableString* $tmp688 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local6) = ((frost$core$MutableString*) NULL);
goto block28;
block28:;
frost$core$String* $tmp689 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp690 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Int $tmp691 = *(&local3);
int64_t $tmp692 = $tmp568.value;
int64_t $tmp693 = $tmp691.value;
int64_t $tmp694 = $tmp692 - $tmp693;
frost$core$Int $tmp695 = (frost$core$Int) {$tmp694};
if ($tmp570) goto block42; else goto block43;
block42:;
int64_t $tmp696 = $tmp695.value;
int64_t $tmp697 = $tmp571.value;
bool $tmp698 = $tmp696 >= $tmp697;
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block41; else goto block19;
block43:;
int64_t $tmp701 = $tmp695.value;
int64_t $tmp702 = $tmp571.value;
bool $tmp703 = $tmp701 > $tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block41; else goto block19;
block41:;
int64_t $tmp706 = $tmp691.value;
int64_t $tmp707 = $tmp571.value;
int64_t $tmp708 = $tmp706 + $tmp707;
frost$core$Int $tmp709 = (frost$core$Int) {$tmp708};
*(&local3) = $tmp709;
goto block18;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:353
frost$core$Bit $tmp710 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp711 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp710);
frost$collections$Array* $tmp712 = *(&local2);
ITable* $tmp713 = ((frost$collections$CollectionView*) $tmp712)->$class->itable;
while ($tmp713->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp713 = $tmp713->next;
}
$fn715 $tmp714 = $tmp713->methods[3];
frost$core$String* $tmp716 = $tmp714(((frost$collections$CollectionView*) $tmp712), &$s717);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp711, $tmp716);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$collections$Array* $tmp718 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local2) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:357
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp719 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp719, &$s720);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:357:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp721 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn723 $tmp722 = ($fn723) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp724 = $tmp722(((frost$core$Object*) param1));
frost$core$Matcher* $tmp725 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp719, $tmp724);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Matcher* $tmp726 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local0) = $tmp725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp727 = *(&local0);
frost$core$Bit $tmp728 = frost$core$Matcher$find$R$frost$core$Bit($tmp727);
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp730 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp730, param1, &$s731, $tmp721);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp732 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp732, param1);
frost$core$Matcher* $tmp733 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:358
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp734 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp734, &$s735);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$RegularExpression* $tmp736 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local1) = $tmp734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:359
frost$core$RegularExpression* $tmp737 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure6));
org$frostlang$frostc$frostdoc$Markdown$_Closure6* $tmp738 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown($tmp738, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp740 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:359:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp741 = &$tmp740->pointer;
*$tmp741 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Object** $tmp742 = &$tmp740->target;
frost$core$Object* $tmp743 = *$tmp742;
frost$core$Frost$unref$frost$core$Object$Q($tmp743);
frost$core$Object** $tmp744 = &$tmp740->target;
*$tmp744 = ((frost$core$Object*) $tmp738);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp737, $tmp740);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$RegularExpression* $tmp745 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local1) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:370
org$frostlang$frostc$frostdoc$Protector** $tmp746 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp747 = *$tmp746;
frost$collections$HashMap** $tmp748 = &$tmp747->decodeMap;
frost$collections$HashMap* $tmp749 = *$tmp748;
ITable* $tmp750 = ((frost$collections$MapView*) $tmp749)->$class->itable;
while ($tmp750->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp750 = $tmp750->next;
}
$fn752 $tmp751 = $tmp750->methods[4];
frost$collections$Iterator* $tmp753 = $tmp751(((frost$collections$MapView*) $tmp749));
goto block1;
block1:;
ITable* $tmp754 = $tmp753->$class->itable;
while ($tmp754->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp754 = $tmp754->next;
}
$fn756 $tmp755 = $tmp754->methods[0];
frost$core$Bit $tmp757 = $tmp755($tmp753);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp759 = $tmp753->$class->itable;
while ($tmp759->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp759 = $tmp759->next;
}
$fn761 $tmp760 = $tmp759->methods[1];
frost$core$Object* $tmp762 = $tmp760($tmp753);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp762)));
frost$core$String* $tmp763 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local0) = ((frost$core$String*) $tmp762);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:371
org$frostlang$frostc$frostdoc$Protector** $tmp764 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp765 = *$tmp764;
frost$core$String* $tmp766 = *(&local0);
$fn768 $tmp767 = ($fn768) $tmp765->$class->vtable[3];
frost$core$String* $tmp769 = $tmp767($tmp765, $tmp766);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$core$String* $tmp770 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local1) = $tmp769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:372
frost$core$String* $tmp771 = *(&local0);
frost$core$String* $tmp772 = *(&local1);
frost$core$Bit $tmp773 = (frost$core$Bit) {$tmp772 != NULL};
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block4; else goto block5;
block5:;
frost$core$Int $tmp775 = (frost$core$Int) {372u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s776, $tmp775, &$s777);
abort(); // unreachable
block4:;
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, $tmp771, $tmp772);
frost$core$String* $tmp778 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp762);
frost$core$String* $tmp779 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Real64 local2;
frost$core$Int32 local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:377
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp780 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp780);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$MutableString* $tmp781 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local0) = $tmp780;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:378
ITable* $tmp782 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp782->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp782 = $tmp782->next;
}
$fn784 $tmp783 = $tmp782->methods[0];
frost$collections$Iterator* $tmp785 = $tmp783(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp786 = $tmp785->$class->itable;
while ($tmp786->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp786 = $tmp786->next;
}
$fn788 $tmp787 = $tmp786->methods[0];
frost$core$Bit $tmp789 = $tmp787($tmp785);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block3; else goto block2;
block2:;
ITable* $tmp791 = $tmp785->$class->itable;
while ($tmp791->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp791 = $tmp791->next;
}
$fn793 $tmp792 = $tmp791->methods[1];
frost$core$Object* $tmp794 = $tmp792($tmp785);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp794)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:380
frost$math$Random** $tmp795 = &param0->random;
frost$math$Random* $tmp796 = *$tmp795;
ITable* $tmp797 = $tmp796->$class->itable;
while ($tmp797->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp797 = $tmp797->next;
}
$fn799 $tmp798 = $tmp797->methods[5];
frost$core$Real64 $tmp800 = $tmp798($tmp796);
*(&local2) = $tmp800;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:381
frost$core$Real64 $tmp801 = *(&local2);
frost$core$Real64 $tmp802 = (frost$core$Real64) {0.45};
double $tmp803 = $tmp801.value;
double $tmp804 = $tmp802.value;
bool $tmp805 = $tmp803 < $tmp804;
frost$core$Bit $tmp806 = (frost$core$Bit) {$tmp805};
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:382
frost$core$MutableString* $tmp808 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp808, &$s809);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:383
frost$core$MutableString* $tmp810 = *(&local0);
frost$core$Char32 $tmp811 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:383:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:106
int32_t $tmp812 = $tmp811.value;
frost$core$Int32 $tmp813 = (frost$core$Int32) {$tmp812};
frost$core$Int32$wrapper* $tmp814;
$tmp814 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp814->value = $tmp813;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:383:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn816 $tmp815 = ($fn816) ((frost$core$Object*) $tmp814)->$class->vtable[0];
frost$core$String* $tmp817 = $tmp815(((frost$core$Object*) $tmp814));
frost$core$MutableString$append$frost$core$String($tmp810, $tmp817);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:384
frost$core$MutableString* $tmp818 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp818, &$s819);
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:386
frost$core$Real64 $tmp820 = *(&local2);
frost$core$Real64 $tmp821 = (frost$core$Real64) {0.9};
double $tmp822 = $tmp820.value;
double $tmp823 = $tmp821.value;
bool $tmp824 = $tmp822 < $tmp823;
frost$core$Bit $tmp825 = (frost$core$Bit) {$tmp824};
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:387
frost$core$MutableString* $tmp827 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp827, &$s828);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:388
frost$core$MutableString* $tmp829 = *(&local0);
frost$core$Char32 $tmp830 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:388:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:106
int32_t $tmp831 = $tmp830.value;
frost$core$Int32 $tmp832 = (frost$core$Int32) {$tmp831};
// begin inline call to function frost.core.Int32.format(fmt:frost.core.String):frost.core.String from Markdown.frost:388:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1058
int32_t $tmp833 = $tmp832.value;
bool $tmp834 = $tmp833 < 0u;
frost$core$Bit $tmp835 = (frost$core$Bit) {$tmp834};
// begin inline call to function frost.core.Int32.get_abs():frost.core.Int32 from Int32.frost:1058:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:730
frost$core$Int32 $tmp836 = (frost$core$Int32) {0u};
int32_t $tmp837 = $tmp832.value;
int32_t $tmp838 = $tmp836.value;
bool $tmp839 = $tmp837 < $tmp838;
frost$core$Bit $tmp840 = (frost$core$Bit) {$tmp839};
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:731
frost$core$Int32 $tmp842 = frost$core$Int32$$SUB$R$frost$core$Int32($tmp832);
*(&local3) = $tmp842;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:733
*(&local3) = $tmp832;
goto block14;
block14:;
frost$core$Int32 $tmp843 = *(&local3);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:1058:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1008
int32_t $tmp844 = $tmp843.value;
frost$core$UInt64 $tmp845 = (frost$core$UInt64) {((uint64_t) $tmp844)};
frost$core$UInt64 $tmp846 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp847 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp835, $tmp845, $tmp846, &$s848);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$MutableString$append$frost$core$String($tmp829, $tmp847);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:389
frost$core$MutableString* $tmp849 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp849, &$s850);
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:392
frost$core$MutableString* $tmp851 = *(&local0);
frost$core$Char32 $tmp852 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp851, $tmp852);
goto block10;
block10:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp794);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:395
frost$core$MutableString* $tmp853 = *(&local0);
$fn855 $tmp854 = ($fn855) ((frost$core$Object*) $tmp853)->$class->vtable[0];
frost$core$String* $tmp856 = $tmp854(((frost$core$Object*) $tmp853));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$MutableString* $tmp857 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp856;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:399
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp858 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s860, &$s861);
frost$core$String* $tmp862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp859, &$s863);
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp862, &$s865);
frost$core$String* $tmp866 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp864, &$s867);
frost$core$String* $tmp868 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp866, &$s869);
frost$core$String* $tmp870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp868, &$s871);
frost$core$Int $tmp872 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp858, $tmp870, $tmp872);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$RegularExpression* $tmp873 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local0) = $tmp858;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:408
frost$core$RegularExpression* $tmp874 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure9));
org$frostlang$frostc$frostdoc$Markdown$_Closure9* $tmp875 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown($tmp875, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp877 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:408:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp878 = &$tmp877->pointer;
*$tmp878 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Object** $tmp879 = &$tmp877->target;
frost$core$Object* $tmp880 = *$tmp879;
frost$core$Frost$unref$frost$core$Object$Q($tmp880);
frost$core$Object** $tmp881 = &$tmp877->target;
*$tmp881 = ((frost$core$Object*) $tmp875);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp874, $tmp877);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$RegularExpression* $tmp882 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$MutableString* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:423
frost$core$Int $tmp883 = (frost$core$Int) {1u};
ITable* $tmp884 = param0->$class->itable;
while ($tmp884->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp884 = $tmp884->next;
}
$fn886 $tmp885 = $tmp884->methods[0];
frost$core$Object* $tmp887 = $tmp885(param0, $tmp883);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp887)));
frost$core$String* $tmp888 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local0) = ((frost$core$String*) $tmp887);
frost$core$Frost$unref$frost$core$Object$Q($tmp887);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:424
frost$core$String* $tmp889 = *(&local0);
frost$core$Bit $tmp890 = (frost$core$Bit) {$tmp889 != NULL};
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block1; else goto block2;
block2:;
frost$core$Int $tmp892 = (frost$core$Int) {424u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s893, $tmp892, &$s894);
abort(); // unreachable
block1:;
// begin inline call to function frost.core.String.get_length():frost.core.Int from Markdown.frost:424:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp895 = ((frost$collections$Iterable*) $tmp889)->$class->itable;
while ($tmp895->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp895 = $tmp895->next;
}
$fn897 $tmp896 = $tmp895->methods[0];
frost$collections$Iterator* $tmp898 = $tmp896(((frost$collections$Iterable*) $tmp889));
ITable* $tmp899 = $tmp898->$class->itable;
while ($tmp899->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp899 = $tmp899->next;
}
$fn901 $tmp900 = $tmp899->methods[2];
frost$core$Int $tmp902 = $tmp900($tmp898);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local1) = $tmp902;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:425
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp903 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp904 = *(&local0);
frost$core$Bit $tmp905 = (frost$core$Bit) {$tmp904 != NULL};
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block4; else goto block5;
block5:;
frost$core$Int $tmp907 = (frost$core$Int) {425u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s908, $tmp907, &$s909);
abort(); // unreachable
block4:;
frost$core$MutableString$init$frost$core$String($tmp903, $tmp904);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$MutableString* $tmp910 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local2) = $tmp903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:426
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:427
frost$core$MutableString* $tmp911 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp911, &$s912);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:428
frost$core$Int $tmp913 = *(&local1);
frost$core$Int $tmp914 = (frost$core$Int) {1u};
int64_t $tmp915 = $tmp913.value;
int64_t $tmp916 = $tmp914.value;
int64_t $tmp917 = $tmp915 + $tmp916;
frost$core$Int $tmp918 = (frost$core$Int) {$tmp917};
*(&local1) = $tmp918;
frost$core$Int $tmp919 = *(&local1);
frost$core$Int $tmp920 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Markdown.frost:430:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp921 = $tmp919.value;
int64_t $tmp922 = $tmp920.value;
int64_t $tmp923 = $tmp921 % $tmp922;
frost$core$Int $tmp924 = (frost$core$Int) {$tmp923};
frost$core$Int $tmp925 = (frost$core$Int) {0u};
int64_t $tmp926 = $tmp924.value;
int64_t $tmp927 = $tmp925.value;
bool $tmp928 = $tmp926 != $tmp927;
frost$core$Bit $tmp929 = (frost$core$Bit) {$tmp928};
bool $tmp930 = $tmp929.value;
if ($tmp930) goto block6; else goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:431
frost$core$MutableString* $tmp931 = *(&local2);
$fn933 $tmp932 = ($fn933) ((frost$core$Object*) $tmp931)->$class->vtable[0];
frost$core$String* $tmp934 = $tmp932(((frost$core$Object*) $tmp931));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$MutableString* $tmp935 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp936 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local0) = ((frost$core$String*) NULL);
return $tmp934;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:422
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp937 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp937, &$s938);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp940 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Markdown.frost:422:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp941 = &$tmp940->pointer;
*$tmp941 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp942 = &$tmp940->target;
frost$core$Immutable* $tmp943 = *$tmp942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$core$Immutable** $tmp944 = &$tmp940->target;
*$tmp944 = ((frost$core$Immutable*) NULL);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp937, ((frost$core$MutableMethod*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:437
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp945 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp945, &$s946);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:437:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp947 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn949 $tmp948 = ($fn949) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp950 = $tmp948(((frost$core$Object*) param0));
frost$core$Matcher* $tmp951 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp945, $tmp950);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Matcher* $tmp952 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local0) = $tmp951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp953 = *(&local0);
frost$core$Bit $tmp954 = frost$core$Matcher$find$R$frost$core$Bit($tmp953);
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp956 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp956, param0, &$s957, $tmp947);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp958 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp958, param0);
frost$core$Matcher* $tmp959 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:493
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp960 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s962, &$s963);
frost$core$String* $tmp964 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp961, &$s965);
frost$core$String* $tmp966 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp964, &$s967);
frost$core$String* $tmp968 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp966, &$s969);
frost$core$String* $tmp970 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp968, &$s971);
frost$core$Int $tmp972 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp960, $tmp970, $tmp972);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$RegularExpression* $tmp973 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local0) = $tmp960;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
frost$core$RegularExpression* $tmp974 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp975 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown($tmp975, param0);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp976 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local1) = $tmp975;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure12));
org$frostlang$frostc$frostdoc$Markdown$_Closure12* $tmp977 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp978 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown$CodeReplacer($tmp977, $tmp978);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp980 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:501:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp981 = &$tmp980->pointer;
*$tmp981 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Object** $tmp982 = &$tmp980->target;
frost$core$Object* $tmp983 = *$tmp982;
frost$core$Frost$unref$frost$core$Object$Q($tmp983);
frost$core$Object** $tmp984 = &$tmp980->target;
*$tmp984 = ((frost$core$Object*) $tmp977);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp974, $tmp980);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp985 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$RegularExpression* $tmp986 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, org$frostlang$frostc$parser$Parser* param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local2;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local3;
org$frostlang$frostc$Pair* local4 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local5;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local6;
frost$core$MutableString* local7 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local8;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local9;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local10;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local11;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local12;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local13;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local14;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local15;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local16;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:505
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp987 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp987, &$s988);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$MutableString* $tmp989 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local0) = $tmp987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:506
frost$core$Int $tmp990 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:506:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp991 = &(&local2)->$rawValue;
*$tmp991 = $tmp990;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp992 = *(&local2);
*(&local1) = $tmp992;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp993 = *(&local1);
*(&local3) = $tmp993;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:507
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp994 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp995 = *$tmp994;
frost$core$Bit $tmp996 = (frost$core$Bit) {$tmp995 != NULL};
bool $tmp997 = $tmp996.value;
if ($tmp997) goto block2; else goto block3;
block3:;
frost$core$Int $tmp998 = (frost$core$Int) {507u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s999, $tmp998, &$s1000);
abort(); // unreachable
block2:;
frost$collections$Array** $tmp1001 = &$tmp995->tokens;
frost$collections$Array* $tmp1002 = *$tmp1001;
ITable* $tmp1003 = ((frost$collections$Iterable*) $tmp1002)->$class->itable;
while ($tmp1003->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1003 = $tmp1003->next;
}
$fn1005 $tmp1004 = $tmp1003->methods[0];
frost$collections$Iterator* $tmp1006 = $tmp1004(((frost$collections$Iterable*) $tmp1002));
goto block4;
block4:;
ITable* $tmp1007 = $tmp1006->$class->itable;
while ($tmp1007->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1007 = $tmp1007->next;
}
$fn1009 $tmp1008 = $tmp1007->methods[0];
frost$core$Bit $tmp1010 = $tmp1008($tmp1006);
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp1012 = $tmp1006->$class->itable;
while ($tmp1012->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1012 = $tmp1012->next;
}
$fn1014 $tmp1013 = $tmp1012->methods[1];
frost$core$Object* $tmp1015 = $tmp1013($tmp1006);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp1015)));
org$frostlang$frostc$Pair* $tmp1016 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local4) = ((org$frostlang$frostc$Pair*) $tmp1015);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:508
org$frostlang$frostc$Pair* $tmp1017 = *(&local4);
frost$core$Object** $tmp1018 = &$tmp1017->second;
frost$core$Object* $tmp1019 = *$tmp1018;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1020;
$tmp1020 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1020->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp1019)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1021 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1022;
$tmp1022 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1022->value = $tmp1021;
ITable* $tmp1023 = ((frost$core$Equatable*) $tmp1020)->$class->itable;
while ($tmp1023->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1023 = $tmp1023->next;
}
$fn1025 $tmp1024 = $tmp1023->methods[1];
frost$core$Bit $tmp1026 = $tmp1024(((frost$core$Equatable*) $tmp1020), ((frost$core$Equatable*) $tmp1022));
bool $tmp1027 = $tmp1026.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1022)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1020)));
if ($tmp1027) goto block9; else goto block8;
block9:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1028 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1029;
$tmp1029 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1029->value = $tmp1028;
frost$core$Int $tmp1030 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:508:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1031 = &(&local6)->$rawValue;
*$tmp1031 = $tmp1030;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1032 = *(&local6);
*(&local5) = $tmp1032;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1033 = *(&local5);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1034;
$tmp1034 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1034->value = $tmp1033;
ITable* $tmp1035 = ((frost$core$Equatable*) $tmp1029)->$class->itable;
while ($tmp1035->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1035 = $tmp1035->next;
}
$fn1037 $tmp1036 = $tmp1035->methods[1];
frost$core$Bit $tmp1038 = $tmp1036(((frost$core$Equatable*) $tmp1029), ((frost$core$Equatable*) $tmp1034));
bool $tmp1039 = $tmp1038.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1034)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1029)));
if ($tmp1039) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:509
frost$core$MutableString* $tmp1040 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1040, &$s1041);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:511
org$frostlang$frostc$Pair* $tmp1042 = *(&local4);
frost$core$Object** $tmp1043 = &$tmp1042->second;
frost$core$Object* $tmp1044 = *$tmp1043;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1045;
$tmp1045 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1045->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp1044)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1046 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1047;
$tmp1047 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1047->value = $tmp1046;
ITable* $tmp1048 = ((frost$core$Equatable*) $tmp1045)->$class->itable;
while ($tmp1048->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1048 = $tmp1048->next;
}
$fn1050 $tmp1049 = $tmp1048->methods[1];
frost$core$Bit $tmp1051 = $tmp1049(((frost$core$Equatable*) $tmp1045), ((frost$core$Equatable*) $tmp1047));
bool $tmp1052 = $tmp1051.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1047)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1045)));
if ($tmp1052) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:512
org$frostlang$frostc$Pair* $tmp1053 = *(&local4);
frost$core$Object** $tmp1054 = &$tmp1053->second;
frost$core$Object* $tmp1055 = *$tmp1054;
*(&local3) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp1055)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:513
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1056 = *(&local3);
frost$core$Int $tmp1057 = $tmp1056.$rawValue;
frost$core$Int $tmp1058 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:514:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1059 = $tmp1057.value;
int64_t $tmp1060 = $tmp1058.value;
bool $tmp1061 = $tmp1059 == $tmp1060;
frost$core$Bit $tmp1062 = (frost$core$Bit) {$tmp1061};
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block14; else goto block15;
block14:;
goto block13;
block15:;
frost$core$Int $tmp1064 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:517:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1065 = $tmp1057.value;
int64_t $tmp1066 = $tmp1064.value;
bool $tmp1067 = $tmp1065 == $tmp1066;
frost$core$Bit $tmp1068 = (frost$core$Bit) {$tmp1067};
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block17; else goto block18;
block18:;
frost$core$Int $tmp1070 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:517:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1071 = $tmp1057.value;
int64_t $tmp1072 = $tmp1070.value;
bool $tmp1073 = $tmp1071 == $tmp1072;
frost$core$Bit $tmp1074 = (frost$core$Bit) {$tmp1073};
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block17; else goto block20;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:518
frost$core$MutableString* $tmp1076 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1076, &$s1077);
goto block13;
block20:;
frost$core$Int $tmp1078 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:520:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1079 = $tmp1057.value;
int64_t $tmp1080 = $tmp1078.value;
bool $tmp1081 = $tmp1079 == $tmp1080;
frost$core$Bit $tmp1082 = (frost$core$Bit) {$tmp1081};
bool $tmp1083 = $tmp1082.value;
if ($tmp1083) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:521
frost$core$MutableString* $tmp1084 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1084, &$s1085);
goto block13;
block23:;
frost$core$Int $tmp1086 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:523:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1087 = $tmp1057.value;
int64_t $tmp1088 = $tmp1086.value;
bool $tmp1089 = $tmp1087 == $tmp1088;
frost$core$Bit $tmp1090 = (frost$core$Bit) {$tmp1089};
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:524
frost$core$MutableString* $tmp1092 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1092, &$s1093);
goto block13;
block26:;
frost$core$Int $tmp1094 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:526:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1095 = $tmp1057.value;
int64_t $tmp1096 = $tmp1094.value;
bool $tmp1097 = $tmp1095 == $tmp1096;
frost$core$Bit $tmp1098 = (frost$core$Bit) {$tmp1097};
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:527
frost$core$MutableString* $tmp1100 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1100, &$s1101);
goto block13;
block29:;
frost$core$Int $tmp1102 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:529:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1103 = $tmp1057.value;
int64_t $tmp1104 = $tmp1102.value;
bool $tmp1105 = $tmp1103 == $tmp1104;
frost$core$Bit $tmp1106 = (frost$core$Bit) {$tmp1105};
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:530
frost$core$MutableString* $tmp1108 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1108, &$s1109);
goto block13;
block32:;
frost$core$Int $tmp1110 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:532:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1111 = $tmp1057.value;
int64_t $tmp1112 = $tmp1110.value;
bool $tmp1113 = $tmp1111 == $tmp1112;
frost$core$Bit $tmp1114 = (frost$core$Bit) {$tmp1113};
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:533
frost$core$MutableString* $tmp1116 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1116, &$s1117);
goto block13;
block35:;
frost$core$Int $tmp1118 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:535:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1119 = $tmp1057.value;
int64_t $tmp1120 = $tmp1118.value;
bool $tmp1121 = $tmp1119 == $tmp1120;
frost$core$Bit $tmp1122 = (frost$core$Bit) {$tmp1121};
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:536
frost$core$MutableString* $tmp1124 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1124, &$s1125);
goto block13;
block38:;
frost$core$Int $tmp1126 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:538:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1127 = $tmp1057.value;
int64_t $tmp1128 = $tmp1126.value;
bool $tmp1129 = $tmp1127 == $tmp1128;
frost$core$Bit $tmp1130 = (frost$core$Bit) {$tmp1129};
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:539
frost$core$MutableString* $tmp1132 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1132, &$s1133);
goto block13;
block41:;
frost$core$Int $tmp1134 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:541:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1135 = $tmp1057.value;
int64_t $tmp1136 = $tmp1134.value;
bool $tmp1137 = $tmp1135 == $tmp1136;
frost$core$Bit $tmp1138 = (frost$core$Bit) {$tmp1137};
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:542
frost$core$MutableString* $tmp1140 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1140, &$s1141);
goto block13;
block44:;
frost$core$Int $tmp1142 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:544:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1143 = $tmp1057.value;
int64_t $tmp1144 = $tmp1142.value;
bool $tmp1145 = $tmp1143 == $tmp1144;
frost$core$Bit $tmp1146 = (frost$core$Bit) {$tmp1145};
bool $tmp1147 = $tmp1146.value;
if ($tmp1147) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:545
frost$core$MutableString* $tmp1148 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1148, &$s1149);
goto block13;
block47:;
frost$core$Int $tmp1150 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:547:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1151 = $tmp1057.value;
int64_t $tmp1152 = $tmp1150.value;
bool $tmp1153 = $tmp1151 == $tmp1152;
frost$core$Bit $tmp1154 = (frost$core$Bit) {$tmp1153};
bool $tmp1155 = $tmp1154.value;
if ($tmp1155) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:548
frost$core$MutableString* $tmp1156 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1156, &$s1157);
goto block13;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:551
frost$core$Int $tmp1158 = (frost$core$Int) {551u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1159, $tmp1158);
abort(); // unreachable
block13:;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:555
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1160 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp1161 = *(&local4);
frost$core$Object** $tmp1162 = &$tmp1161->first;
frost$core$Object* $tmp1163 = *$tmp1162;
// begin inline call to function org.frostlang.frostc.parser.Parser.text(token:org.frostlang.frostc.parser.Token):frost.core.String from Markdown.frost:555:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:227
frost$core$String** $tmp1164 = &param1->source;
frost$core$String* $tmp1165 = *$tmp1164;
frost$core$String$Index $tmp1166 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1163)->value.start;
frost$core$String$Index $tmp1167 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1163)->value.end;
frost$core$Bit $tmp1168 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1169 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1166, $tmp1167, $tmp1168);
frost$core$String* $tmp1170 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp1165, $tmp1169);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$MutableString$init$frost$core$String($tmp1160, $tmp1170);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$MutableString* $tmp1171 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local7) = $tmp1160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:556
frost$core$MutableString* $tmp1172 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1172, &$s1173, &$s1174);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:557
frost$core$MutableString* $tmp1175 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1175, &$s1176, &$s1177);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:558
frost$core$MutableString* $tmp1178 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1178, &$s1179, &$s1180);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:559
frost$core$MutableString* $tmp1181 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1182 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1183 = *$tmp1182;
$fn1185 $tmp1184 = ($fn1185) $tmp1183->$class->vtable[2];
frost$core$String* $tmp1186 = $tmp1184($tmp1183, &$s1187);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1181, &$s1188, $tmp1186);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:560
frost$core$MutableString* $tmp1189 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1190 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1191 = *$tmp1190;
$fn1193 $tmp1192 = ($fn1193) $tmp1191->$class->vtable[2];
frost$core$String* $tmp1194 = $tmp1192($tmp1191, &$s1195);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1189, &$s1196, $tmp1194);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:561
frost$core$MutableString* $tmp1197 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1198 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1199 = *$tmp1198;
$fn1201 $tmp1200 = ($fn1201) $tmp1199->$class->vtable[2];
frost$core$String* $tmp1202 = $tmp1200($tmp1199, &$s1203);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1197, &$s1204, $tmp1202);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:562
frost$core$MutableString* $tmp1205 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1206 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1207 = *$tmp1206;
$fn1209 $tmp1208 = ($fn1209) $tmp1207->$class->vtable[2];
frost$core$String* $tmp1210 = $tmp1208($tmp1207, &$s1211);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1205, &$s1212, $tmp1210);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:563
frost$core$MutableString* $tmp1213 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1214 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1215 = *$tmp1214;
$fn1217 $tmp1216 = ($fn1217) $tmp1215->$class->vtable[2];
frost$core$String* $tmp1218 = $tmp1216($tmp1215, &$s1219);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1213, &$s1220, $tmp1218);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:564
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1221 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1222;
$tmp1222 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1222->value = $tmp1221;
frost$core$Int $tmp1223 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:564:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1224 = &(&local9)->$rawValue;
*$tmp1224 = $tmp1223;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1225 = *(&local9);
*(&local8) = $tmp1225;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1226 = *(&local8);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1227;
$tmp1227 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1227->value = $tmp1226;
ITable* $tmp1228 = ((frost$core$Equatable*) $tmp1222)->$class->itable;
while ($tmp1228->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1228 = $tmp1228->next;
}
$fn1230 $tmp1229 = $tmp1228->methods[1];
frost$core$Bit $tmp1231 = $tmp1229(((frost$core$Equatable*) $tmp1222), ((frost$core$Equatable*) $tmp1227));
bool $tmp1232 = $tmp1231.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1227)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1222)));
if ($tmp1232) goto block55; else goto block54;
block55:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1233 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1234;
$tmp1234 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1234->value = $tmp1233;
frost$core$Int $tmp1235 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:565:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1236 = &(&local11)->$rawValue;
*$tmp1236 = $tmp1235;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1237 = *(&local11);
*(&local10) = $tmp1237;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1238 = *(&local10);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1239;
$tmp1239 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1239->value = $tmp1238;
ITable* $tmp1240 = ((frost$core$Equatable*) $tmp1234)->$class->itable;
while ($tmp1240->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1240 = $tmp1240->next;
}
$fn1242 $tmp1241 = $tmp1240->methods[1];
frost$core$Bit $tmp1243 = $tmp1241(((frost$core$Equatable*) $tmp1234), ((frost$core$Equatable*) $tmp1239));
bool $tmp1244 = $tmp1243.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1239)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1234)));
if ($tmp1244) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:566
frost$core$MutableString* $tmp1245 = *(&local0);
org$frostlang$frostc$Pair* $tmp1246 = *(&local4);
frost$core$Object** $tmp1247 = &$tmp1246->first;
frost$core$Object* $tmp1248 = *$tmp1247;
org$frostlang$frostc$parser$Token$Kind $tmp1249 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1248)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1250;
$tmp1250 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1250->value = $tmp1249;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:566:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1252 $tmp1251 = ($fn1252) ((frost$core$Object*) $tmp1250)->$class->vtable[0];
frost$core$String* $tmp1253 = $tmp1251(((frost$core$Object*) $tmp1250));
frost$core$String* $tmp1254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1255, $tmp1253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$String* $tmp1256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1254, &$s1257);
frost$core$MutableString$append$frost$core$String($tmp1245, $tmp1256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:568
frost$core$MutableString* $tmp1258 = *(&local0);
frost$core$MutableString* $tmp1259 = *(&local7);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:568:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn1261 $tmp1260 = ($fn1261) ((frost$core$Object*) $tmp1259)->$class->vtable[0];
frost$core$String* $tmp1262 = $tmp1260(((frost$core$Object*) $tmp1259));
frost$core$MutableString$append$frost$core$String($tmp1258, $tmp1262);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:569
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1263 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1264;
$tmp1264 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1264->value = $tmp1263;
frost$core$Int $tmp1265 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:569:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1266 = &(&local13)->$rawValue;
*$tmp1266 = $tmp1265;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1267 = *(&local13);
*(&local12) = $tmp1267;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1268 = *(&local12);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1269;
$tmp1269 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1269->value = $tmp1268;
ITable* $tmp1270 = ((frost$core$Equatable*) $tmp1264)->$class->itable;
while ($tmp1270->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1270 = $tmp1270->next;
}
$fn1272 $tmp1271 = $tmp1270->methods[1];
frost$core$Bit $tmp1273 = $tmp1271(((frost$core$Equatable*) $tmp1264), ((frost$core$Equatable*) $tmp1269));
bool $tmp1274 = $tmp1273.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1269)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1264)));
if ($tmp1274) goto block62; else goto block61;
block62:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1275 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1276;
$tmp1276 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1276->value = $tmp1275;
frost$core$Int $tmp1277 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:570:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1278 = &(&local15)->$rawValue;
*$tmp1278 = $tmp1277;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1279 = *(&local15);
*(&local14) = $tmp1279;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1280 = *(&local14);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1281;
$tmp1281 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1281->value = $tmp1280;
ITable* $tmp1282 = ((frost$core$Equatable*) $tmp1276)->$class->itable;
while ($tmp1282->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1282 = $tmp1282->next;
}
$fn1284 $tmp1283 = $tmp1282->methods[1];
frost$core$Bit $tmp1285 = $tmp1283(((frost$core$Equatable*) $tmp1276), ((frost$core$Equatable*) $tmp1281));
bool $tmp1286 = $tmp1285.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1281)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1276)));
if ($tmp1286) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:571
frost$core$MutableString* $tmp1287 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1287, &$s1288);
goto block61;
block61:;
frost$core$MutableString* $tmp1289 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1015);
org$frostlang$frostc$Pair* $tmp1290 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:574
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1291 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1292;
$tmp1292 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1292->value = $tmp1291;
frost$core$Int $tmp1293 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:574:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1294 = &(&local17)->$rawValue;
*$tmp1294 = $tmp1293;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1295 = *(&local17);
*(&local16) = $tmp1295;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1296 = *(&local16);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1297;
$tmp1297 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1297->value = $tmp1296;
ITable* $tmp1298 = ((frost$core$Equatable*) $tmp1292)->$class->itable;
while ($tmp1298->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1298 = $tmp1298->next;
}
$fn1300 $tmp1299 = $tmp1298->methods[1];
frost$core$Bit $tmp1301 = $tmp1299(((frost$core$Equatable*) $tmp1292), ((frost$core$Equatable*) $tmp1297));
bool $tmp1302 = $tmp1301.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1297)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1292)));
if ($tmp1302) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:575
frost$core$MutableString* $tmp1303 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1303, &$s1304);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:577
frost$core$MutableString* $tmp1305 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1305, &$s1306);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:578
frost$core$MutableString* $tmp1307 = *(&local0);
frost$core$String* $tmp1308 = frost$core$MutableString$finish$R$frost$core$String($tmp1307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$MutableString* $tmp1309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp1308;

}
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$threads$ScopedLock* local2 = NULL;
org$frostlang$frostc$parser$Token$Kind local3;
org$frostlang$frostc$parser$Token$Kind local4;
frost$threads$ScopedLock* local5 = NULL;
frost$threads$ScopedLock* local6 = NULL;
org$frostlang$frostc$parser$Token$Kind local7;
org$frostlang$frostc$parser$Token$Kind local8;
frost$threads$ScopedLock* local9 = NULL;
frost$threads$ScopedLock* local10 = NULL;
org$frostlang$frostc$parser$Token local11;
org$frostlang$frostc$parser$Token$Kind local12;
org$frostlang$frostc$parser$Token$Kind local13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:582
frost$threads$MessageQueue** $tmp1310 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1311 = *$tmp1310;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:582:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block2;
block2:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
frost$core$Int $tmp1312 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int($tmp1311);
frost$core$Int $tmp1313 = (frost$core$Int) {0u};
int64_t $tmp1314 = $tmp1312.value;
int64_t $tmp1315 = $tmp1313.value;
bool $tmp1316 = $tmp1314 > $tmp1315;
frost$core$Bit $tmp1317 = (frost$core$Bit) {$tmp1316};
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1319 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1311);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:583
$fn1321 $tmp1320 = ($fn1321) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1322 = $tmp1320(((frost$core$Object*) param1));
frost$core$String* $tmp1323 = frost$core$String$get_trimmed$R$frost$core$String($tmp1322);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$core$String* $tmp1324 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local0) = $tmp1323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:584
org$frostlang$frostc$parser$Parser** $tmp1325 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1326 = *$tmp1325;
frost$io$File** $tmp1327 = &param0->source;
frost$io$File* $tmp1328 = *$tmp1327;
frost$core$Int $tmp1329 = (frost$core$Int) {18446744073709551615u};
frost$core$String* $tmp1330 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp1326, $tmp1328, $tmp1329, $tmp1330);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:585
org$frostlang$frostc$parser$Parser** $tmp1331 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1332 = *$tmp1331;
org$frostlang$frostc$ASTNode* $tmp1333 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp1332);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
org$frostlang$frostc$ASTNode* $tmp1334 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local1) = $tmp1333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:586
org$frostlang$frostc$ASTNode* $tmp1335 = *(&local1);
frost$core$Bit $tmp1336 = (frost$core$Bit) {$tmp1335 != NULL};
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block8; else goto block7;
block8:;
frost$threads$MessageQueue** $tmp1338 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1339 = *$tmp1338;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:586:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1340 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1341 = &$tmp1339->lock;
frost$threads$Lock* $tmp1342 = *$tmp1341;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1340, $tmp1342);
*(&local2) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$threads$ScopedLock* $tmp1343 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local2) = $tmp1340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1344 = &$tmp1339->count;
frost$core$Int $tmp1345 = *$tmp1344;
frost$threads$ScopedLock* $tmp1346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local2) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1347 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:586:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1348 = $tmp1345.value;
int64_t $tmp1349 = $tmp1347.value;
bool $tmp1350 = $tmp1348 == $tmp1349;
frost$core$Bit $tmp1351 = (frost$core$Bit) {$tmp1350};
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:587
frost$core$Bit $tmp1353 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1354 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1353);
org$frostlang$frostc$parser$Parser** $tmp1355 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1356 = *$tmp1355;
$fn1358 $tmp1357 = ($fn1358) param0->$class->vtable[16];
frost$core$String* $tmp1359 = $tmp1357(param0, $tmp1356);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1354, $tmp1359);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:588
org$frostlang$frostc$ASTNode* $tmp1360 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1361 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:591
frost$threads$MessageQueue** $tmp1362 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1363 = *$tmp1362;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:591:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block12;
block12:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
frost$core$Int $tmp1364 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int($tmp1363);
frost$core$Int $tmp1365 = (frost$core$Int) {0u};
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365.value;
bool $tmp1368 = $tmp1366 > $tmp1367;
frost$core$Bit $tmp1369 = (frost$core$Bit) {$tmp1368};
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1371 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1363);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:592
org$frostlang$frostc$parser$Parser** $tmp1372 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1373 = *$tmp1372;
frost$io$File** $tmp1374 = &param0->source;
frost$io$File* $tmp1375 = *$tmp1374;
frost$core$Int $tmp1376 = (frost$core$Int) {18446744073709551615u};
frost$core$String* $tmp1377 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp1373, $tmp1375, $tmp1376, $tmp1377);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:593
goto block16;
block16:;
org$frostlang$frostc$parser$Parser** $tmp1378 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1379 = *$tmp1378;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:593:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1380 = &$tmp1379->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1381 = *$tmp1380;
ITable* $tmp1382 = ((frost$collections$CollectionView*) $tmp1381)->$class->itable;
while ($tmp1382->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1382 = $tmp1382->next;
}
$fn1384 $tmp1383 = $tmp1382->methods[0];
frost$core$Int $tmp1385 = $tmp1383(((frost$collections$CollectionView*) $tmp1381));
frost$core$Int $tmp1386 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1387 = $tmp1385.value;
int64_t $tmp1388 = $tmp1386.value;
bool $tmp1389 = $tmp1387 == $tmp1388;
frost$core$Bit $tmp1390 = (frost$core$Bit) {$tmp1389};
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
org$frostlang$frostc$parser$Token $tmp1392 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1379);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp1379, $tmp1392);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1393 = &$tmp1379->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1394 = *$tmp1393;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1395 = &$tmp1379->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1396 = *$tmp1395;
ITable* $tmp1397 = ((frost$collections$CollectionView*) $tmp1396)->$class->itable;
while ($tmp1397->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1397 = $tmp1397->next;
}
$fn1399 $tmp1398 = $tmp1397->methods[0];
frost$core$Int $tmp1400 = $tmp1398(((frost$collections$CollectionView*) $tmp1396));
frost$core$Int $tmp1401 = (frost$core$Int) {1u};
int64_t $tmp1402 = $tmp1400.value;
int64_t $tmp1403 = $tmp1401.value;
int64_t $tmp1404 = $tmp1402 - $tmp1403;
frost$core$Int $tmp1405 = (frost$core$Int) {$tmp1404};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from Parser.frost:170:30
frost$core$Int $tmp1406 = (frost$core$Int) {0u};
int64_t $tmp1407 = $tmp1405.value;
int64_t $tmp1408 = $tmp1406.value;
bool $tmp1409 = $tmp1407 >= $tmp1408;
frost$core$Bit $tmp1410 = (frost$core$Bit) {$tmp1409};
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block27; else goto block26;
block27:;
ITable* $tmp1412 = ((frost$collections$CollectionView*) $tmp1394)->$class->itable;
while ($tmp1412->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1412 = $tmp1412->next;
}
$fn1414 $tmp1413 = $tmp1412->methods[0];
frost$core$Int $tmp1415 = $tmp1413(((frost$collections$CollectionView*) $tmp1394));
int64_t $tmp1416 = $tmp1405.value;
int64_t $tmp1417 = $tmp1415.value;
bool $tmp1418 = $tmp1416 < $tmp1417;
frost$core$Bit $tmp1419 = (frost$core$Bit) {$tmp1418};
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1421 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1422, $tmp1421, &$s1423);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$frostc$parser$Token** $tmp1424 = &$tmp1394->data;
org$frostlang$frostc$parser$Token* $tmp1425 = *$tmp1424;
frost$core$Int64 $tmp1426 = frost$core$Int64$init$frost$core$Int($tmp1405);
int64_t $tmp1427 = $tmp1426.value;
org$frostlang$frostc$parser$Token $tmp1428 = $tmp1425[$tmp1427];
org$frostlang$frostc$parser$Token$Kind $tmp1429 = $tmp1428.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1430;
$tmp1430 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1430->value = $tmp1429;
frost$core$Int $tmp1431 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:593:47
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp1432 = &(&local4)->$rawValue;
*$tmp1432 = $tmp1431;
org$frostlang$frostc$parser$Token$Kind $tmp1433 = *(&local4);
*(&local3) = $tmp1433;
org$frostlang$frostc$parser$Token$Kind $tmp1434 = *(&local3);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1435;
$tmp1435 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1435->value = $tmp1434;
ITable* $tmp1436 = ((frost$core$Equatable*) $tmp1430)->$class->itable;
while ($tmp1436->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1436 = $tmp1436->next;
}
$fn1438 $tmp1437 = $tmp1436->methods[1];
frost$core$Bit $tmp1439 = $tmp1437(((frost$core$Equatable*) $tmp1430), ((frost$core$Equatable*) $tmp1435));
bool $tmp1440 = $tmp1439.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1435)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1430)));
if ($tmp1440) goto block19; else goto block18;
block19:;
frost$threads$MessageQueue** $tmp1441 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1442 = *$tmp1441;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:593:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1443 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1444 = &$tmp1442->lock;
frost$threads$Lock* $tmp1445 = *$tmp1444;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1443, $tmp1445);
*(&local5) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$threads$ScopedLock* $tmp1446 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local5) = $tmp1443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1447 = &$tmp1442->count;
frost$core$Int $tmp1448 = *$tmp1447;
frost$threads$ScopedLock* $tmp1449 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local5) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1450 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:593:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1451 = $tmp1448.value;
int64_t $tmp1452 = $tmp1450.value;
bool $tmp1453 = $tmp1451 == $tmp1452;
frost$core$Bit $tmp1454 = (frost$core$Bit) {$tmp1453};
bool $tmp1455 = $tmp1454.value;
if ($tmp1455) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:594
org$frostlang$frostc$parser$Parser** $tmp1456 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1457 = *$tmp1456;
org$frostlang$frostc$ASTNode* $tmp1458 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q($tmp1457);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:596
frost$threads$MessageQueue** $tmp1459 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1460 = *$tmp1459;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:596:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1461 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1462 = &$tmp1460->lock;
frost$threads$Lock* $tmp1463 = *$tmp1462;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1461, $tmp1463);
*(&local6) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$threads$ScopedLock* $tmp1464 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
*(&local6) = $tmp1461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1465 = &$tmp1460->count;
frost$core$Int $tmp1466 = *$tmp1465;
frost$threads$ScopedLock* $tmp1467 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local6) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1468 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:596:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1469 = $tmp1466.value;
int64_t $tmp1470 = $tmp1468.value;
bool $tmp1471 = $tmp1469 == $tmp1470;
frost$core$Bit $tmp1472 = (frost$core$Bit) {$tmp1471};
bool $tmp1473 = $tmp1472.value;
if ($tmp1473) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:597
frost$core$Bit $tmp1474 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1475 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1474);
org$frostlang$frostc$parser$Parser** $tmp1476 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1477 = *$tmp1476;
$fn1479 $tmp1478 = ($fn1479) param0->$class->vtable[16];
frost$core$String* $tmp1480 = $tmp1478(param0, $tmp1477);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1475, $tmp1480);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:598
org$frostlang$frostc$ASTNode* $tmp1481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1482 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
*(&local0) = ((frost$core$String*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:601
frost$threads$MessageQueue** $tmp1483 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1484 = *$tmp1483;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:601:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block36;
block36:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
frost$core$Int $tmp1485 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int($tmp1484);
frost$core$Int $tmp1486 = (frost$core$Int) {0u};
int64_t $tmp1487 = $tmp1485.value;
int64_t $tmp1488 = $tmp1486.value;
bool $tmp1489 = $tmp1487 > $tmp1488;
frost$core$Bit $tmp1490 = (frost$core$Bit) {$tmp1489};
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1492 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1484);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
goto block36;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:602
org$frostlang$frostc$parser$Parser** $tmp1493 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1494 = *$tmp1493;
frost$io$File** $tmp1495 = &param0->source;
frost$io$File* $tmp1496 = *$tmp1495;
frost$core$Int $tmp1497 = (frost$core$Int) {18446744073709551615u};
frost$core$String* $tmp1498 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp1494, $tmp1496, $tmp1497, $tmp1498);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:603
goto block40;
block40:;
org$frostlang$frostc$parser$Parser** $tmp1499 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1500 = *$tmp1499;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:603:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1501 = &$tmp1500->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1502 = *$tmp1501;
ITable* $tmp1503 = ((frost$collections$CollectionView*) $tmp1502)->$class->itable;
while ($tmp1503->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1503 = $tmp1503->next;
}
$fn1505 $tmp1504 = $tmp1503->methods[0];
frost$core$Int $tmp1506 = $tmp1504(((frost$collections$CollectionView*) $tmp1502));
frost$core$Int $tmp1507 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1508 = $tmp1506.value;
int64_t $tmp1509 = $tmp1507.value;
bool $tmp1510 = $tmp1508 == $tmp1509;
frost$core$Bit $tmp1511 = (frost$core$Bit) {$tmp1510};
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
org$frostlang$frostc$parser$Token $tmp1513 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1500);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp1500, $tmp1513);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1514 = &$tmp1500->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1515 = *$tmp1514;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1516 = &$tmp1500->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1517 = *$tmp1516;
ITable* $tmp1518 = ((frost$collections$CollectionView*) $tmp1517)->$class->itable;
while ($tmp1518->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1518 = $tmp1518->next;
}
$fn1520 $tmp1519 = $tmp1518->methods[0];
frost$core$Int $tmp1521 = $tmp1519(((frost$collections$CollectionView*) $tmp1517));
frost$core$Int $tmp1522 = (frost$core$Int) {1u};
int64_t $tmp1523 = $tmp1521.value;
int64_t $tmp1524 = $tmp1522.value;
int64_t $tmp1525 = $tmp1523 - $tmp1524;
frost$core$Int $tmp1526 = (frost$core$Int) {$tmp1525};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from Parser.frost:170:30
frost$core$Int $tmp1527 = (frost$core$Int) {0u};
int64_t $tmp1528 = $tmp1526.value;
int64_t $tmp1529 = $tmp1527.value;
bool $tmp1530 = $tmp1528 >= $tmp1529;
frost$core$Bit $tmp1531 = (frost$core$Bit) {$tmp1530};
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block51; else goto block50;
block51:;
ITable* $tmp1533 = ((frost$collections$CollectionView*) $tmp1515)->$class->itable;
while ($tmp1533->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
frost$core$Int $tmp1536 = $tmp1534(((frost$collections$CollectionView*) $tmp1515));
int64_t $tmp1537 = $tmp1526.value;
int64_t $tmp1538 = $tmp1536.value;
bool $tmp1539 = $tmp1537 < $tmp1538;
frost$core$Bit $tmp1540 = (frost$core$Bit) {$tmp1539};
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block49; else goto block50;
block50:;
frost$core$Int $tmp1542 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1543, $tmp1542, &$s1544);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$frostc$parser$Token** $tmp1545 = &$tmp1515->data;
org$frostlang$frostc$parser$Token* $tmp1546 = *$tmp1545;
frost$core$Int64 $tmp1547 = frost$core$Int64$init$frost$core$Int($tmp1526);
int64_t $tmp1548 = $tmp1547.value;
org$frostlang$frostc$parser$Token $tmp1549 = $tmp1546[$tmp1548];
org$frostlang$frostc$parser$Token$Kind $tmp1550 = $tmp1549.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1551;
$tmp1551 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1551->value = $tmp1550;
frost$core$Int $tmp1552 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:603:47
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp1553 = &(&local8)->$rawValue;
*$tmp1553 = $tmp1552;
org$frostlang$frostc$parser$Token$Kind $tmp1554 = *(&local8);
*(&local7) = $tmp1554;
org$frostlang$frostc$parser$Token$Kind $tmp1555 = *(&local7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1556;
$tmp1556 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1556->value = $tmp1555;
ITable* $tmp1557 = ((frost$core$Equatable*) $tmp1551)->$class->itable;
while ($tmp1557->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1557 = $tmp1557->next;
}
$fn1559 $tmp1558 = $tmp1557->methods[1];
frost$core$Bit $tmp1560 = $tmp1558(((frost$core$Equatable*) $tmp1551), ((frost$core$Equatable*) $tmp1556));
bool $tmp1561 = $tmp1560.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1556)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1551)));
if ($tmp1561) goto block43; else goto block42;
block43:;
frost$threads$MessageQueue** $tmp1562 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1563 = *$tmp1562;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:603:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1564 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1565 = &$tmp1563->lock;
frost$threads$Lock* $tmp1566 = *$tmp1565;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1564, $tmp1566);
*(&local9) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
frost$threads$ScopedLock* $tmp1567 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local9) = $tmp1564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1568 = &$tmp1563->count;
frost$core$Int $tmp1569 = *$tmp1568;
frost$threads$ScopedLock* $tmp1570 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
*(&local9) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1571 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:603:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1572 = $tmp1569.value;
int64_t $tmp1573 = $tmp1571.value;
bool $tmp1574 = $tmp1572 == $tmp1573;
frost$core$Bit $tmp1575 = (frost$core$Bit) {$tmp1574};
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:604
org$frostlang$frostc$parser$Parser** $tmp1577 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1578 = *$tmp1577;
org$frostlang$frostc$ASTNode* $tmp1579 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q($tmp1578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
goto block40;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:606
frost$threads$MessageQueue** $tmp1580 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1581 = *$tmp1580;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:606:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1582 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1583 = &$tmp1581->lock;
frost$threads$Lock* $tmp1584 = *$tmp1583;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1582, $tmp1584);
*(&local10) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
frost$threads$ScopedLock* $tmp1585 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local10) = $tmp1582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1586 = &$tmp1581->count;
frost$core$Int $tmp1587 = *$tmp1586;
frost$threads$ScopedLock* $tmp1588 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
*(&local10) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1589 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:606:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1590 = $tmp1587.value;
int64_t $tmp1591 = $tmp1589.value;
bool $tmp1592 = $tmp1590 == $tmp1591;
frost$core$Bit $tmp1593 = (frost$core$Bit) {$tmp1592};
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:607
frost$core$Bit $tmp1595 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1596 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1595);
org$frostlang$frostc$parser$Parser** $tmp1597 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1598 = *$tmp1597;
$fn1600 $tmp1599 = ($fn1600) param0->$class->vtable[16];
frost$core$String* $tmp1601 = $tmp1599(param0, $tmp1598);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1596, $tmp1601);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:608
org$frostlang$frostc$ASTNode* $tmp1602 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1603 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local0) = ((frost$core$String*) NULL);
return;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:611
frost$threads$MessageQueue** $tmp1604 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1605 = *$tmp1604;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:611:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block60;
block60:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
frost$core$Int $tmp1606 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int($tmp1605);
frost$core$Int $tmp1607 = (frost$core$Int) {0u};
int64_t $tmp1608 = $tmp1606.value;
int64_t $tmp1609 = $tmp1607.value;
bool $tmp1610 = $tmp1608 > $tmp1609;
frost$core$Bit $tmp1611 = (frost$core$Bit) {$tmp1610};
bool $tmp1612 = $tmp1611.value;
if ($tmp1612) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1613 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1605);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:612
org$frostlang$frostc$parser$Parser** $tmp1614 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1615 = *$tmp1614;
frost$io$File** $tmp1616 = &param0->source;
frost$io$File* $tmp1617 = *$tmp1616;
frost$core$Int $tmp1618 = (frost$core$Int) {18446744073709551615u};
frost$core$String* $tmp1619 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp1615, $tmp1617, $tmp1618, $tmp1619);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:613
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:614
org$frostlang$frostc$parser$Parser** $tmp1620 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1621 = *$tmp1620;
org$frostlang$frostc$parser$Token $tmp1622 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1621);
*(&local11) = $tmp1622;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:615
org$frostlang$frostc$parser$Token $tmp1623 = *(&local11);
org$frostlang$frostc$parser$Token$Kind $tmp1624 = $tmp1623.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1625;
$tmp1625 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1625->value = $tmp1624;
frost$core$Int $tmp1626 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:615:38
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp1627 = &(&local13)->$rawValue;
*$tmp1627 = $tmp1626;
org$frostlang$frostc$parser$Token$Kind $tmp1628 = *(&local13);
*(&local12) = $tmp1628;
org$frostlang$frostc$parser$Token$Kind $tmp1629 = *(&local12);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1630;
$tmp1630 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1630->value = $tmp1629;
ITable* $tmp1631 = ((frost$core$Equatable*) $tmp1625)->$class->itable;
while ($tmp1631->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1631 = $tmp1631->next;
}
$fn1633 $tmp1632 = $tmp1631->methods[0];
frost$core$Bit $tmp1634 = $tmp1632(((frost$core$Equatable*) $tmp1625), ((frost$core$Equatable*) $tmp1630));
bool $tmp1635 = $tmp1634.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1630)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1625)));
if ($tmp1635) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:616
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:619
frost$core$Bit $tmp1636 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1637 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1636);
org$frostlang$frostc$parser$Parser** $tmp1638 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1639 = *$tmp1638;
$fn1641 $tmp1640 = ($fn1641) param0->$class->vtable[16];
frost$core$String* $tmp1642 = $tmp1640(param0, $tmp1639);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1637, $tmp1642);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
org$frostlang$frostc$ASTNode* $tmp1643 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1644 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
*(&local0) = ((frost$core$String*) NULL);
return;
block67:;
goto block64;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:625
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1645 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1645, &$s1646);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:625:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1647 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn1649 $tmp1648 = ($fn1649) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1650 = $tmp1648(((frost$core$Object*) param1));
frost$core$Matcher* $tmp1651 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1645, $tmp1650);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
frost$core$Matcher* $tmp1652 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local0) = $tmp1651;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp1653 = *(&local0);
frost$core$Bit $tmp1654 = frost$core$Matcher$find$R$frost$core$Bit($tmp1653);
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1656 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1656, param1, &$s1657, $tmp1647);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1658 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1658, param1);
frost$core$Matcher* $tmp1659 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:626
$fn1661 $tmp1660 = ($fn1661) param0->$class->vtable[17];
$tmp1660(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s1662, &$s1663);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Int local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:631
frost$core$Int $tmp1664 = (frost$core$Int) {4u};
frost$core$Int $tmp1665 = (frost$core$Int) {1u};
int64_t $tmp1666 = $tmp1664.value;
int64_t $tmp1667 = $tmp1665.value;
int64_t $tmp1668 = $tmp1666 - $tmp1667;
frost$core$Int $tmp1669 = (frost$core$Int) {$tmp1668};
*(&local0) = $tmp1669;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:633
frost$core$Int $tmp1670 = *(&local0);
frost$core$Int$wrapper* $tmp1671;
$tmp1671 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1671->value = $tmp1670;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:634:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1673 $tmp1672 = ($fn1673) ((frost$core$Object*) $tmp1671)->$class->vtable[0];
frost$core$String* $tmp1674 = $tmp1672(((frost$core$Object*) $tmp1671));
frost$core$String* $tmp1675 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1676, $tmp1674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$String* $tmp1677 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1675, &$s1678);
frost$core$String* $tmp1679 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1677, &$s1680);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
frost$core$String* $tmp1681 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
*(&local1) = $tmp1679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:656
frost$core$Int* $tmp1682 = &param0->listLevel;
frost$core$Int $tmp1683 = *$tmp1682;
frost$core$Int $tmp1684 = (frost$core$Int) {0u};
int64_t $tmp1685 = $tmp1683.value;
int64_t $tmp1686 = $tmp1684.value;
bool $tmp1687 = $tmp1685 > $tmp1686;
frost$core$Bit $tmp1688 = (frost$core$Bit) {$tmp1687};
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block2; else goto block4;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:657
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1690 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1691 = *(&local1);
frost$core$String* $tmp1692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1693, $tmp1691);
frost$core$String* $tmp1694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1692, &$s1695);
frost$core$RegularExpression$init$frost$core$String($tmp1690, $tmp1694);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
frost$core$RegularExpression* $tmp1696 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
*(&local2) = $tmp1690;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:658
frost$core$RegularExpression* $tmp1697 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure14));
org$frostlang$frostc$frostdoc$Markdown$_Closure14* $tmp1698 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown($tmp1698, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1700 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:658:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1701 = &$tmp1700->pointer;
*$tmp1701 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
frost$core$Object** $tmp1702 = &$tmp1700->target;
frost$core$Object* $tmp1703 = *$tmp1702;
frost$core$Frost$unref$frost$core$Object$Q($tmp1703);
frost$core$Object** $tmp1704 = &$tmp1700->target;
*$tmp1704 = ((frost$core$Object*) $tmp1698);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1697, $tmp1700);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
frost$core$RegularExpression* $tmp1705 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block3;
block4:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:684
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1706 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1707 = *(&local1);
frost$core$String* $tmp1708 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1709, $tmp1707);
frost$core$RegularExpression$init$frost$core$String($tmp1706, $tmp1708);
*(&local3) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
frost$core$RegularExpression* $tmp1710 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local3) = $tmp1706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:685
frost$core$RegularExpression* $tmp1711 = *(&local3);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure16));
org$frostlang$frostc$frostdoc$Markdown$_Closure16* $tmp1712 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown($tmp1712, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1714 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:685:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1715 = &$tmp1714->pointer;
*$tmp1715 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
frost$core$Object** $tmp1716 = &$tmp1714->target;
frost$core$Object* $tmp1717 = *$tmp1716;
frost$core$Frost$unref$frost$core$Object$Q($tmp1717);
frost$core$Object** $tmp1718 = &$tmp1714->target;
*$tmp1718 = ((frost$core$Object*) $tmp1712);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1711, $tmp1714);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
frost$core$RegularExpression* $tmp1719 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block3;
block3:;
frost$core$String* $tmp1720 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:726
frost$core$Int* $tmp1721 = &param0->listLevel;
frost$core$Int $tmp1722 = *$tmp1721;
frost$core$Int $tmp1723 = (frost$core$Int) {1u};
int64_t $tmp1724 = $tmp1722.value;
int64_t $tmp1725 = $tmp1723.value;
int64_t $tmp1726 = $tmp1724 + $tmp1725;
frost$core$Int $tmp1727 = (frost$core$Int) {$tmp1726};
frost$core$Int* $tmp1728 = &param0->listLevel;
*$tmp1728 = $tmp1727;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:729
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1729 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1729, &$s1730);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:729:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
frost$core$Bit $tmp1731 = (frost$core$Bit) {true};
frost$core$String* $tmp1732 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param1, $tmp1729, &$s1733, $tmp1731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$String* $tmp1734 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local0) = $tmp1732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:731
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1735 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1737, &$s1738);
frost$core$String* $tmp1739 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1736, &$s1740);
frost$core$Int $tmp1741 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp1735, $tmp1739, $tmp1741);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
frost$core$RegularExpression* $tmp1742 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local1) = $tmp1735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:736
frost$core$String* $tmp1743 = *(&local0);
frost$core$RegularExpression* $tmp1744 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure18));
org$frostlang$frostc$frostdoc$Markdown$_Closure18* $tmp1745 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown($tmp1745, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1747 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:736:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1748 = &$tmp1747->pointer;
*$tmp1748 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
frost$core$Object** $tmp1749 = &$tmp1747->target;
frost$core$Object* $tmp1750 = *$tmp1749;
frost$core$Frost$unref$frost$core$Object$Q($tmp1750);
frost$core$Object** $tmp1751 = &$tmp1747->target;
*$tmp1751 = ((frost$core$Object*) $tmp1745);
frost$core$String* $tmp1752 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String($tmp1743, $tmp1744, $tmp1747);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
frost$core$String* $tmp1753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local0) = $tmp1752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:753
frost$core$Int* $tmp1754 = &param0->listLevel;
frost$core$Int $tmp1755 = *$tmp1754;
frost$core$Int $tmp1756 = (frost$core$Int) {1u};
int64_t $tmp1757 = $tmp1755.value;
int64_t $tmp1758 = $tmp1756.value;
int64_t $tmp1759 = $tmp1757 - $tmp1758;
frost$core$Int $tmp1760 = (frost$core$Int) {$tmp1759};
frost$core$Int* $tmp1761 = &param0->listLevel;
*$tmp1761 = $tmp1760;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:754
frost$core$String* $tmp1762 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
frost$core$RegularExpression* $tmp1763 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1764 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1762;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:759
// begin inline call to function frost.core.MutableString.contains(s:frost.core.String):frost.core.Bit from Markdown.frost:759:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:298
// begin inline call to function frost.core.MutableString.indexOf(s:frost.core.String):frost.core.MutableString.Index? from MutableString.frost:298:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:256
frost$core$MutableString$Index $tmp1765 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$nullable $tmp1766 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, &$s1767, $tmp1765);
frost$core$Bit $tmp1768 = (frost$core$Bit) {$tmp1766.nonnull};
return $tmp1768;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:764
frost$core$Bit $tmp1769 = (frost$core$Bit) {param0 == NULL};
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1769;
goto block3;
block2:;
frost$core$Bit $tmp1771 = (frost$core$Bit) {param0 != NULL};
bool $tmp1772 = $tmp1771.value;
if ($tmp1772) goto block4; else goto block5;
block5:;
frost$core$Int $tmp1773 = (frost$core$Int) {764u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1774, $tmp1773, &$s1775);
abort(); // unreachable
block4:;
frost$core$Bit $tmp1776 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s1777);
*(&local0) = $tmp1776;
goto block3;
block3:;
frost$core$Bit $tmp1778 = *(&local0);
return $tmp1778;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:769
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1779 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1779, &$s1780);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure20));
org$frostlang$frostc$frostdoc$Markdown$_Closure20* $tmp1781 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown($tmp1781, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1783 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:769:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1784 = &$tmp1783->pointer;
*$tmp1784 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
frost$core$Object** $tmp1785 = &$tmp1783->target;
frost$core$Object* $tmp1786 = *$tmp1785;
frost$core$Frost$unref$frost$core$Object$Q($tmp1786);
frost$core$Object** $tmp1787 = &$tmp1783->target;
*$tmp1787 = ((frost$core$Object*) $tmp1781);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1779, $tmp1783);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:774
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1788 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1788, &$s1789);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure22));
org$frostlang$frostc$frostdoc$Markdown$_Closure22* $tmp1790 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown($tmp1790, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1792 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:774:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1793 = &$tmp1792->pointer;
*$tmp1793 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
frost$core$Object** $tmp1794 = &$tmp1792->target;
frost$core$Object* $tmp1795 = *$tmp1794;
frost$core$Frost$unref$frost$core$Object$Q($tmp1795);
frost$core$Object** $tmp1796 = &$tmp1792->target;
*$tmp1796 = ((frost$core$Object*) $tmp1790);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1788, $tmp1792);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:781
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1797 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int $tmp1798 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp1797, &$s1799, $tmp1798);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$RegularExpression* $tmp1800 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
*(&local0) = $tmp1797;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:782
frost$core$RegularExpression* $tmp1801 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure24));
org$frostlang$frostc$frostdoc$Markdown$_Closure24* $tmp1802 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown($tmp1802, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1804 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:782:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1805 = &$tmp1804->pointer;
*$tmp1805 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Object** $tmp1806 = &$tmp1804->target;
frost$core$Object* $tmp1807 = *$tmp1806;
frost$core$Frost$unref$frost$core$Object$Q($tmp1807);
frost$core$Object** $tmp1808 = &$tmp1804->target;
*$tmp1808 = ((frost$core$Object*) $tmp1802);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1801, $tmp1804);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$RegularExpression* $tmp1809 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:793
$fn1811 $tmp1810 = ($fn1811) param0->$class->vtable[24];
$tmp1810(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:794
$fn1813 $tmp1812 = ($fn1813) param0->$class->vtable[29];
$tmp1812(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:795
$fn1815 $tmp1814 = ($fn1815) param0->$class->vtable[3];
$tmp1814(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:797
$fn1817 $tmp1816 = ($fn1817) param0->$class->vtable[25];
$tmp1816(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:798
$fn1819 $tmp1818 = ($fn1819) param0->$class->vtable[26];
$tmp1818(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:799
$fn1821 $tmp1820 = ($fn1821) param0->$class->vtable[10];
$tmp1820(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:805
$fn1823 $tmp1822 = ($fn1823) param0->$class->vtable[24];
$tmp1822(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:807
$fn1825 $tmp1824 = ($fn1825) param0->$class->vtable[28];
$tmp1824(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:808
$fn1827 $tmp1826 = ($fn1827) param0->$class->vtable[27];
$tmp1826(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:810
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1828 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1828, &$s1829);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:810:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1830 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn1832 $tmp1831 = ($fn1832) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1833 = $tmp1831(((frost$core$Object*) param1));
frost$core$Matcher* $tmp1834 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1828, $tmp1833);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Matcher* $tmp1835 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
*(&local0) = $tmp1834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp1836 = *(&local0);
frost$core$Bit $tmp1837 = frost$core$Matcher$find$R$frost$core$Bit($tmp1836);
bool $tmp1838 = $tmp1837.value;
if ($tmp1838) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1839 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1839, param1, &$s1840, $tmp1830);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1841 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1841, param1);
frost$core$Matcher* $tmp1842 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String(frost$core$Int param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:820
frost$core$Int $tmp1843 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:820:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1844 = param0.value;
int64_t $tmp1845 = $tmp1843.value;
bool $tmp1846 = $tmp1844 == $tmp1845;
frost$core$Bit $tmp1847 = (frost$core$Bit) {$tmp1846};
bool $tmp1848 = $tmp1847.value;
if ($tmp1848) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1849));
return &$s1850;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:824
frost$core$Int $tmp1851 = (frost$core$Int) {1u};
int64_t $tmp1852 = param0.value;
int64_t $tmp1853 = $tmp1851.value;
int64_t $tmp1854 = $tmp1852 - $tmp1853;
frost$core$Int $tmp1855 = (frost$core$Int) {$tmp1854};
frost$core$String* $tmp1856 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String($tmp1855);
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1858, $tmp1856);
frost$core$String* $tmp1859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1857, &$s1860);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
return $tmp1859;
block2:;
goto block5;
block5:;

}
frost$collections$ListView* org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$String$Index local8;
frost$core$String$Index local9;
frost$core$String$Index local10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:829
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1861 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1861);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$collections$Array* $tmp1862 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
*(&local0) = $tmp1861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:830
frost$core$Int $tmp1863 = (frost$core$Int) {6u};
frost$core$String* $tmp1864 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String($tmp1863);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$String* $tmp1865 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local1) = $tmp1864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:832
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1866 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1868, &$s1869);
frost$core$String* $tmp1870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1867, &$s1871);
frost$core$String* $tmp1872 = *(&local1);
frost$core$String* $tmp1873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1870, $tmp1872);
frost$core$Int $tmp1874 = (frost$core$Int) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp1866, $tmp1873, $tmp1874);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$core$RegularExpression* $tmp1875 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
*(&local2) = $tmp1866;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:840
frost$core$RegularExpression* $tmp1876 = *(&local2);
frost$core$Matcher* $tmp1877 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1876, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
frost$core$Matcher* $tmp1878 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local3) = $tmp1877;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:841
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Markdown.frost:841:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1879 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1880 = &(&local5)->value;
*$tmp1880 = $tmp1879;
frost$core$String$Index $tmp1881 = *(&local5);
*(&local4) = $tmp1881;
frost$core$String$Index $tmp1882 = *(&local4);
*(&local6) = $tmp1882;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:842
goto block3;
block3:;
frost$core$Matcher* $tmp1883 = *(&local3);
frost$core$Bit $tmp1884 = frost$core$Matcher$find$R$frost$core$Bit($tmp1883);
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:843
frost$core$String$Index $tmp1886 = *(&local6);
frost$core$String$Index$wrapper* $tmp1887;
$tmp1887 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1887->value = $tmp1886;
frost$core$Matcher* $tmp1888 = *(&local3);
frost$core$String$Index $tmp1889;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1889, $tmp1888);
frost$core$String$Index$wrapper* $tmp1890;
$tmp1890 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1890->value = $tmp1889;
ITable* $tmp1891 = ((frost$core$Comparable*) $tmp1887)->$class->itable;
while ($tmp1891->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1891 = $tmp1891->next;
}
$fn1893 $tmp1892 = $tmp1891->methods[1];
frost$core$Bit $tmp1894 = $tmp1892(((frost$core$Comparable*) $tmp1887), ((frost$core$Comparable*) $tmp1890));
bool $tmp1895 = $tmp1894.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1890)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1887)));
if ($tmp1895) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:844
frost$collections$Array* $tmp1896 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1897 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int $tmp1898 = (frost$core$Int) {1u};
frost$core$String$Index $tmp1899 = *(&local6);
frost$core$Matcher* $tmp1900 = *(&local3);
frost$core$String$Index $tmp1901;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1901, $tmp1900);
frost$core$Bit $tmp1902 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1903 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1899, $tmp1901, $tmp1902);
frost$core$String* $tmp1904 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1903);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String($tmp1897, $tmp1898, $tmp1904);
frost$collections$Array$add$frost$collections$Array$T($tmp1896, ((frost$core$Object*) $tmp1897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:846
frost$collections$Array* $tmp1905 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1906 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int $tmp1907 = (frost$core$Int) {0u};
frost$core$Matcher* $tmp1908 = *(&local3);
frost$core$String$Index $tmp1909;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1909, $tmp1908);
frost$core$Matcher* $tmp1910 = *(&local3);
frost$core$String$Index $tmp1911;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1911, $tmp1910);
frost$core$Bit $tmp1912 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1913 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1909, $tmp1911, $tmp1912);
frost$core$String* $tmp1914 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1913);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String($tmp1906, $tmp1907, $tmp1914);
frost$collections$Array$add$frost$collections$Array$T($tmp1905, ((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:847
frost$core$Matcher* $tmp1915 = *(&local3);
frost$core$String$Index $tmp1916;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1916, $tmp1915);
*(&local6) = $tmp1916;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:849
frost$core$String$Index $tmp1917 = *(&local6);
frost$core$String$Index$wrapper* $tmp1918;
$tmp1918 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1918->value = $tmp1917;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:849:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1919 = &param1->_length;
frost$core$Int $tmp1920 = *$tmp1919;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1921 = &(&local8)->value;
*$tmp1921 = $tmp1920;
frost$core$String$Index $tmp1922 = *(&local8);
*(&local7) = $tmp1922;
frost$core$String$Index $tmp1923 = *(&local7);
frost$core$String$Index$wrapper* $tmp1924;
$tmp1924 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1924->value = $tmp1923;
ITable* $tmp1925 = ((frost$core$Comparable*) $tmp1918)->$class->itable;
while ($tmp1925->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1925 = $tmp1925->next;
}
$fn1927 $tmp1926 = $tmp1925->methods[1];
frost$core$Bit $tmp1928 = $tmp1926(((frost$core$Comparable*) $tmp1918), ((frost$core$Comparable*) $tmp1924));
bool $tmp1929 = $tmp1928.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1924)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1918)));
if ($tmp1929) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:850
frost$collections$Array* $tmp1930 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1931 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int $tmp1932 = (frost$core$Int) {1u};
frost$core$String$Index $tmp1933 = *(&local6);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:850:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1934 = &param1->_length;
frost$core$Int $tmp1935 = *$tmp1934;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1936 = &(&local10)->value;
*$tmp1936 = $tmp1935;
frost$core$String$Index $tmp1937 = *(&local10);
*(&local9) = $tmp1937;
frost$core$String$Index $tmp1938 = *(&local9);
frost$core$Bit $tmp1939 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1940 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1933, $tmp1938, $tmp1939);
frost$core$String* $tmp1941 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1940);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String($tmp1931, $tmp1932, $tmp1941);
frost$collections$Array$add$frost$collections$Array$T($tmp1930, ((frost$core$Object*) $tmp1931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:853
frost$collections$Array* $tmp1942 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1942)));
frost$core$Matcher* $tmp1943 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$RegularExpression* $tmp1944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1945 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1946 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1942);

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:866
$fn1948 $tmp1947 = ($fn1948) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1949 = $tmp1947(((frost$core$Object*) param1));
$fn1951 $tmp1950 = ($fn1951) param0->$class->vtable[23];
frost$collections$ListView* $tmp1952 = $tmp1950(param0, $tmp1949);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
frost$collections$ListView* $tmp1953 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
*(&local0) = $tmp1952;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:867
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:869
frost$collections$ListView* $tmp1954 = *(&local0);
ITable* $tmp1955 = ((frost$collections$Iterable*) $tmp1954)->$class->itable;
while ($tmp1955->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1955 = $tmp1955->next;
}
$fn1957 $tmp1956 = $tmp1955->methods[0];
frost$collections$Iterator* $tmp1958 = $tmp1956(((frost$collections$Iterable*) $tmp1954));
goto block1;
block1:;
ITable* $tmp1959 = $tmp1958->$class->itable;
while ($tmp1959->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1959 = $tmp1959->next;
}
$fn1961 $tmp1960 = $tmp1959->methods[0];
frost$core$Bit $tmp1962 = $tmp1960($tmp1958);
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1964 = $tmp1958->$class->itable;
while ($tmp1964->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1964 = $tmp1964->next;
}
$fn1966 $tmp1965 = $tmp1964->methods[1];
frost$core$Object* $tmp1967 = $tmp1965($tmp1958);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1967)));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1968 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1967);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:870
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:871
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1969 = *(&local1);
frost$core$Int* $tmp1970 = &$tmp1969->$rawValue;
frost$core$Int $tmp1971 = *$tmp1970;
frost$core$Int $tmp1972 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:872:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1973 = $tmp1971.value;
int64_t $tmp1974 = $tmp1972.value;
bool $tmp1975 = $tmp1973 == $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block5; else goto block6;
block5:;
frost$core$String** $tmp1978 = (frost$core$String**) ($tmp1969->$data + 0);
frost$core$String* $tmp1979 = *$tmp1978;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
frost$core$String* $tmp1980 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
*(&local3) = $tmp1979;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:873
frost$core$String* $tmp1981 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
frost$core$String* $tmp1982 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local2) = $tmp1981;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:874
frost$core$String* $tmp1983 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1984 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1985 = *$tmp1984;
$fn1987 $tmp1986 = ($fn1987) $tmp1985->$class->vtable[2];
frost$core$String* $tmp1988 = $tmp1986($tmp1985, &$s1989);
frost$core$String* $tmp1990 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1983, &$s1991, $tmp1988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
frost$core$String* $tmp1992 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
*(&local2) = $tmp1990;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:875
frost$core$String* $tmp1993 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1994 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1995 = *$tmp1994;
$fn1997 $tmp1996 = ($fn1997) $tmp1995->$class->vtable[2];
frost$core$String* $tmp1998 = $tmp1996($tmp1995, &$s1999);
frost$core$String* $tmp2000 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1993, &$s2001, $tmp1998);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$String* $tmp2002 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
*(&local2) = $tmp2000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:876
frost$core$String* $tmp2003 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp2004 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp2005 = *$tmp2004;
$fn2007 $tmp2006 = ($fn2007) $tmp2005->$class->vtable[2];
frost$core$String* $tmp2008 = $tmp2006($tmp2005, &$s2009);
frost$core$String* $tmp2010 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp2003, &$s2011, $tmp2008);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$String* $tmp2012 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
*(&local2) = $tmp2010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:877
frost$core$String* $tmp2013 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp2014 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp2015 = *$tmp2014;
$fn2017 $tmp2016 = ($fn2017) $tmp2015->$class->vtable[2];
frost$core$String* $tmp2018 = $tmp2016($tmp2015, &$s2019);
frost$core$String* $tmp2020 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp2013, &$s2021, $tmp2018);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
frost$core$String* $tmp2022 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local2) = $tmp2020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
frost$core$String* $tmp2023 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
frost$core$Int $tmp2024 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:879:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2025 = $tmp1971.value;
int64_t $tmp2026 = $tmp2024.value;
bool $tmp2027 = $tmp2025 == $tmp2026;
frost$core$Bit $tmp2028 = (frost$core$Bit) {$tmp2027};
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block8; else goto block4;
block8:;
frost$core$String** $tmp2030 = (frost$core$String**) ($tmp1969->$data + 0);
frost$core$String* $tmp2031 = *$tmp2030;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
frost$core$String* $tmp2032 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local4) = $tmp2031;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:880
frost$core$String* $tmp2033 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
frost$core$String* $tmp2034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local2) = $tmp2033;
frost$core$String* $tmp2035 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:883
frost$core$String* $tmp2036 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, $tmp2036);
frost$core$String* $tmp2037 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1967);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp2038 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
frost$collections$ListView* $tmp2039 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:889
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2040 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2040, &$s2041);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:889:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2042 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn2044 $tmp2043 = ($fn2044) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2045 = $tmp2043(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2046 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2040, $tmp2045);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
frost$core$Matcher* $tmp2047 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
*(&local0) = $tmp2046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2048 = *(&local0);
frost$core$Bit $tmp2049 = frost$core$Matcher$find$R$frost$core$Bit($tmp2048);
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2051 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2051, param1, &$s2052, $tmp2042);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2053 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2053, param1);
frost$core$Matcher* $tmp2054 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:890
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2055 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2055, &$s2056);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:890:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2057 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn2059 $tmp2058 = ($fn2059) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2060 = $tmp2058(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2061 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2055, $tmp2060);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Matcher* $tmp2062 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local1) = $tmp2061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2063 = *(&local1);
frost$core$Bit $tmp2064 = frost$core$Matcher$find$R$frost$core$Bit($tmp2063);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2066 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2066, param1, &$s2067, $tmp2057);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2068 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2068, param1);
frost$core$Matcher* $tmp2069 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:893
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2070 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2071 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2072, &$s2073);
frost$core$String* $tmp2074 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2071, &$s2075);
frost$core$String* $tmp2076 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2074, &$s2077);
frost$core$RegularExpression$init$frost$core$String($tmp2070, $tmp2076);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
frost$core$RegularExpression* $tmp2078 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
*(&local2) = $tmp2070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:898
frost$core$RegularExpression* $tmp2079 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure26));
org$frostlang$frostc$frostdoc$Markdown$_Closure26* $tmp2080 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown($tmp2080, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2082 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:898:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2083 = &$tmp2082->pointer;
*$tmp2083 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
frost$core$Object** $tmp2084 = &$tmp2082->target;
frost$core$Object* $tmp2085 = *$tmp2084;
frost$core$Frost$unref$frost$core$Object$Q($tmp2085);
frost$core$Object** $tmp2086 = &$tmp2082->target;
*$tmp2086 = ((frost$core$Object*) $tmp2080);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2079, $tmp2082);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
frost$core$RegularExpression* $tmp2087 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
*(&local2) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:931
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2088 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2090, &$s2091);
frost$core$String* $tmp2092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2089, &$s2093);
frost$core$String* $tmp2094 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2092, &$s2095);
frost$core$RegularExpression$init$frost$core$String($tmp2088, $tmp2094);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
frost$core$RegularExpression* $tmp2096 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
*(&local0) = $tmp2088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:936
frost$core$RegularExpression* $tmp2097 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure28));
org$frostlang$frostc$frostdoc$Markdown$_Closure28* $tmp2098 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown($tmp2098, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2100 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:936:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2101 = &$tmp2100->pointer;
*$tmp2101 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$Object** $tmp2102 = &$tmp2100->target;
frost$core$Object* $tmp2103 = *$tmp2102;
frost$core$Frost$unref$frost$core$Object$Q($tmp2103);
frost$core$Object** $tmp2104 = &$tmp2100->target;
*$tmp2104 = ((frost$core$Object*) $tmp2098);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2097, $tmp2100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:968
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2105 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2106 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2107, &$s2108);
frost$core$String* $tmp2109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2106, &$s2110);
frost$core$String* $tmp2111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2109, &$s2112);
frost$core$String* $tmp2113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2111, &$s2114);
frost$core$String* $tmp2115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2113, &$s2116);
frost$core$String* $tmp2117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2115, &$s2118);
frost$core$String* $tmp2119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2117, &$s2120);
frost$core$String* $tmp2121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2119, &$s2122);
frost$core$String* $tmp2123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2121, &$s2124);
frost$core$String* $tmp2125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2123, &$s2126);
frost$core$String* $tmp2127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2125, &$s2128);
frost$core$Int $tmp2129 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp2105, $tmp2127, $tmp2129);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$RegularExpression* $tmp2130 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local1) = $tmp2105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:982
frost$core$RegularExpression* $tmp2131 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure30));
org$frostlang$frostc$frostdoc$Markdown$_Closure30* $tmp2132 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown($tmp2132, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2134 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:982:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2135 = &$tmp2134->pointer;
*$tmp2135 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
frost$core$Object** $tmp2136 = &$tmp2134->target;
frost$core$Object* $tmp2137 = *$tmp2136;
frost$core$Frost$unref$frost$core$Object$Q($tmp2137);
frost$core$Object** $tmp2138 = &$tmp2134->target;
*$tmp2138 = ((frost$core$Object*) $tmp2132);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2131, $tmp2134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1024
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2139 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2141, &$s2142);
frost$core$String* $tmp2143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2140, &$s2144);
frost$core$String* $tmp2145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2143, &$s2146);
frost$core$Int $tmp2147 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp2139, $tmp2145, $tmp2147);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$core$RegularExpression* $tmp2148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
*(&local2) = $tmp2139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1030
frost$core$RegularExpression* $tmp2149 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure32));
org$frostlang$frostc$frostdoc$Markdown$_Closure32* $tmp2150 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown($tmp2150, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2152 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1030:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2153 = &$tmp2152->pointer;
*$tmp2153 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$Object** $tmp2154 = &$tmp2152->target;
frost$core$Object* $tmp2155 = *$tmp2154;
frost$core$Frost$unref$frost$core$Object$Q($tmp2155);
frost$core$Object** $tmp2156 = &$tmp2152->target;
*$tmp2156 = ((frost$core$Object*) $tmp2150);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2149, $tmp2152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$RegularExpression* $tmp2157 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp2158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp2159 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1072
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2160 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2160, &$s2161);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1072:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2162 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn2164 $tmp2163 = ($fn2164) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2165 = $tmp2163(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2166 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2160, $tmp2165);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Matcher* $tmp2167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
*(&local0) = $tmp2166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2168 = *(&local0);
frost$core$Bit $tmp2169 = frost$core$Matcher$find$R$frost$core$Bit($tmp2168);
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2171 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2171, param1, &$s2172, $tmp2162);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2173 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2173, param1);
frost$core$Matcher* $tmp2174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1073
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2175 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2175, &$s2176);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1073:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2177 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn2179 $tmp2178 = ($fn2179) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2180 = $tmp2178(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2181 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2175, $tmp2180);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
frost$core$Matcher* $tmp2182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local1) = $tmp2181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2183 = *(&local1);
frost$core$Bit $tmp2184 = frost$core$Matcher$find$R$frost$core$Bit($tmp2183);
bool $tmp2185 = $tmp2184.value;
if ($tmp2185) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2186 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2186, param1, &$s2187, $tmp2177);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2188 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2188, param1);
frost$core$Matcher* $tmp2189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1079
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2190 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2190, &$s2191);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1079:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2192 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn2194 $tmp2193 = ($fn2194) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2195 = $tmp2193(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2196 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2190, $tmp2195);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
frost$core$Matcher* $tmp2197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
*(&local0) = $tmp2196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2198 = *(&local0);
frost$core$Bit $tmp2199 = frost$core$Matcher$find$R$frost$core$Bit($tmp2198);
bool $tmp2200 = $tmp2199.value;
if ($tmp2200) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2201 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2201, param1, &$s2202, $tmp2192);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2203 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2203, param1);
frost$core$Matcher* $tmp2204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1080
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2205 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2205, &$s2206);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1080:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2207 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn2209 $tmp2208 = ($fn2209) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2210 = $tmp2208(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2211 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2205, $tmp2210);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
frost$core$Matcher* $tmp2212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
*(&local1) = $tmp2211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2213 = *(&local1);
frost$core$Bit $tmp2214 = frost$core$Matcher$find$R$frost$core$Bit($tmp2213);
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2216 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2216, param1, &$s2217, $tmp2207);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2218 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2218, param1);
frost$core$Matcher* $tmp2219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1084
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2220 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2220, &$s2221);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure34));
org$frostlang$frostc$frostdoc$Markdown$_Closure34* $tmp2222 = (org$frostlang$frostc$frostdoc$Markdown$_Closure34*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure34$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure34$init$org$frostlang$frostc$frostdoc$Markdown($tmp2222, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2224 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1085:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2225 = &$tmp2224->pointer;
*$tmp2225 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure34$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
frost$core$Object** $tmp2226 = &$tmp2224->target;
frost$core$Object* $tmp2227 = *$tmp2226;
frost$core$Frost$unref$frost$core$Object$Q($tmp2227);
frost$core$Object** $tmp2228 = &$tmp2224->target;
*$tmp2228 = ((frost$core$Object*) $tmp2222);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2220, $tmp2224);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:83
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp2229 = &param0->source;
frost$io$File* $tmp2230 = *$tmp2229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
frost$threads$MessageQueue** $tmp2231 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2232 = *$tmp2231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
org$frostlang$frostc$parser$Parser** $tmp2233 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp2234 = *$tmp2233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
frost$core$MutableMethod** $tmp2235 = &param0->linkResolver;
frost$core$MutableMethod* $tmp2236 = *$tmp2235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
frost$collections$HashMap** $tmp2237 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp2238 = *$tmp2237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
org$frostlang$frostc$frostdoc$Protector** $tmp2239 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp2240 = *$tmp2239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
org$frostlang$frostc$frostdoc$Protector** $tmp2241 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp2242 = *$tmp2241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
frost$math$Random** $tmp2243 = &param0->random;
frost$math$Random* $tmp2244 = *$tmp2243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
return;

}

